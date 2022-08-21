#include "pch.h"
#include <EventAPI.h>
#include <LoggerAPI.h>
#include <MC/Level.hpp>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include "Version.h"
#include <LLAPI.h>
#include <fstream>
#include <third-party\Nlohmann\json.hpp>
#include <regCommandAPI.h>
#include <DynamicCommandAPI.h>
#include <algorithm>
#include <cctype>
#include <string>

inline bool isBanList(const std::string& name) {
    struct stat buffer;
    return (stat(name.c_str(), &buffer) == 0);
}

using json = nlohmann::json;

Logger logger(PLUGIN_NAME);

//Ban command code

class BanCmd : public Command
{
    CommandSelector<Player> p;
    std::string reason;
    bool reason_isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const
    {
        if (!isBanList("banlist.json")) {
            logger.warn("Banlist not found, creating one...");
            std::ofstream file("banlist.json");
            file << "[]";
            logger.warn("Created!");
        }

        string reasn = reason_isSet ? reason : "Banned by admin"; //defult reason

        auto res = p.results(ori); //get target

        if (!Command::checkHasTargets(res, outp))
            return;

        for (auto i : res) 
        {

            if(!i->isOP()){ //check is target OP

                i->kick("You have been banned \nReason: " + reasn + "\n:("); //kick target

                std::ifstream banlist("banlist.json"); //open banlist 
                json parsed;
                banlist >> parsed; //parsed banlist
                std::ofstream nw("banlist.json"); //open banlist to write

                string nick = i->getRealName();
                std::transform(nick.begin(), nick.end(), nick.begin(),
                    [](unsigned char c) { return std::tolower(c); }); //transform nick to lowercase

                json form = { {"Nick", nick}, {"UUID", i->getUuid()}, {"ClientID", i->getClientId()}, {"XUID", i->getXuid()}, {"Reason", reasn} }; //form for ban player
                parsed.push_back(form); //add form to main json
                nw << std::setw(4) << parsed << std::endl; //write new json to banlist

                outp.success("Player has been banned.");
            }
            else {
                outp.error("Unable to Ban operator.");
            }
     
        }
        
    }
    
    static void setup(CommandRegistry* registry)
    {
        using RegisterCommandHelper::makeMandatory;
        using RegisterCommandHelper::makeOptional;
        registry->registerCommand(
            "ban",
            "Ban a cheater",
            CommandPermissionLevel::GameMasters,
            { (CommandFlagValue)0 },
            { (CommandFlagValue)0x80 });
        registry->registerOverload<BanCmd>(
            "Ban",
            makeMandatory(&BanCmd::p, "cheater"),
            makeOptional(&BanCmd::reason, "reason", &BanCmd::reason_isSet));
    }
};

class  OfflineBanCmd : public Command
{
    string target;
    std::string reason;
    bool reason_isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const
    {
        //check is banlist exist

        if (!isBanList("banlist.json")) {
            logger.warn("Banlist not found, creating one...");
            std::ofstream file("banlist.json");
            file << "[]";
            logger.warn("Created!");
        }

        string reasn = reason_isSet ? reason : "Banned by admin";

        //tranform target to lowercase

        string p = target;
        std::transform(p.begin(), p.end(), p.begin(),
            [](unsigned char c) { return std::tolower(c); });

        //open and parse banlist

        std::ifstream banlist("banlist.json");
        json parsed;
        banlist >> parsed;

        //if player isn't ban now - give error

        bool notbanned = true;
        for (int i = 0; i < parsed.size(); i++) {
            if (parsed[i]["Nick"] == p) {
                outp.error("Player is already banned.");
                notbanned = false;
                break;
            }
        }
        //else - ban him
        if (notbanned) {
            std::ofstream nw("banlist.json");

            json form = { {"Nick",p}, {"UUID", "404 not found"}, {"ClientID", "404 not found"}, {"XUID", "404 not found"}, {"Reason", reasn} };
            parsed.push_back(form);
            nw << std::setw(4) << parsed << std::endl;

            outp.success("Player has been banned.");
        }

    }

    static void setup(CommandRegistry* registry)
    {
        using RegisterCommandHelper::makeMandatory;
        using RegisterCommandHelper::makeOptional;
        registry->registerCommand(
            "offban",
            "Ban a cheater that offline",
            CommandPermissionLevel::GameMasters,
            { (CommandFlagValue)0 },
            { (CommandFlagValue)0x80 });
        registry->registerOverload<OfflineBanCmd>(
            "offban",
            makeMandatory(&OfflineBanCmd::target, "cheater"),
            makeOptional(&OfflineBanCmd::reason, "reason", &OfflineBanCmd::reason_isSet));
    }
};

class unBanCmd : public Command
{
   string target;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const
    {
        //check is banlist exist

        if (!isBanList("banlist.json")) {
            logger.warn("Banlist not found, creating one...");
            std::ofstream file("banlist.json");
            file << "[]";
            logger.warn("Created!");
        }

        //tranform target to lowercase

        string p = target;
        std::transform(p.begin(), p.end(), p.begin(),
            [](unsigned char c) { return std::tolower(c); });

        //open and parse banlist

        std::ifstream banlist("banlist.json");
        json parsed;
        banlist >> parsed;

        //if player is banned - unban him

        bool banned = false;
        for (int i = 0; i < parsed.size(); i++) {
            if (parsed[i]["Nick"] == p) {
                std::ofstream nw("banlist.json");
                parsed.erase(i);
                nw << std::setw(4) << parsed << std::endl;
                outp.success("Player has been unbanned.");
                banned = true;
                break;
                
            }
        }
        //else - give error
        if (!banned) {
            outp.error("Player isn't banned.");

        }
    }

    static void setup(CommandRegistry* registry)
    {
        using RegisterCommandHelper::makeMandatory;
        registry->registerCommand(
            "unban",
            "unBan a player",
            CommandPermissionLevel::GameMasters,
            { (CommandFlagValue)0 },
            { (CommandFlagValue)0x80 });
        registry->registerOverload<unBanCmd>(
            "unBan",
            makeMandatory(&unBanCmd::target, "player"));
    }
};

void JoinEvent(){
    Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {

        //check is banlist exist

        if (!isBanList("banlist.json")) {
            logger.warn("Banlist not found, creating one...");
            std::ofstream file("banlist.json");
            file << "[]";
            logger.warn("Created!");
        }

        Player* pl = ev.mPlayer;

        //open and parse banlist

        std::ifstream banlist("banlist.json");
        json parsed;
        banlist >> parsed;
        
        // if player join is cheater - kick him

        for (int i = 0; i < parsed.size(); i++) {
            if (parsed[i]["Nick"] == pl->getRealName() || parsed[i]["ClientID"] == pl->getClientId() || parsed[i]["XUID"] == pl->getXuid() || parsed[i]["UUID"] == pl->getUuid()) {
                logger.warn("Banned player " + pl->getRealName() + " try to join server.");
                
                pl->kick("You have been banned \nReason: " + parsed[i]["Reason"].dump() + "\n:(");
            }
        }

        return true;
    });

}//reg cmds

void CommandEvent() {
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { 
        BanCmd::setup(ev.mCommandRegistry);
        unBanCmd::setup(ev.mCommandRegistry);
        OfflineBanCmd::setup(ev.mCommandRegistry);
        return true; 
    });
}

void PluginInit()
{
    if (!isBanList("banlist.json")) {
        logger.warn("Banlist not found, creating one...");
        std::ofstream file("banlist.json");
        file << "[]";
        logger.warn("Created!");
    }
    else {
        logger.info("Banlist found, all okay!");
    }
    JoinEvent();
    CommandEvent();
}
