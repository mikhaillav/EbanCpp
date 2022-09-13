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
#include <regex>

using json = nlohmann::json;

Logger logger(PLUGIN_NAME);

inline bool IsFile(const std::string& name) {
    struct stat buffer;
    return (stat(name.c_str(), &buffer) == 0);
}

auto j2 = R"(
                {
                    "kickmsg": "You have been banned\nReason: <reason>\n:(",
                    "cmdmsg": "Banned player <player> try to join server.",
                    "checkBanlist.succses": "Banlist found, all okay!",
                    "checkBanlist.error": "Banlist not found, creating one...",
                    "checkBanlist.create": "Created!",
                    "checkConfig.succses": "Config found, all okay!",
                    "default.reason": "Banned by admin",
                    "banned.succses": "Player has been banned.",
                    "banned.error.op": "Unable to Ban operator.",
                    "banned.error.already": "Player is already banned.",
                    "unbanned.succses": "Player has been unbanned.",
                    "ban.ip": "false",
                    "ban.clientid": "true",
                    "ban.UUID": "true",
                    "ban.XUID": "true",
                    "ban.nickname": "true",
                    "unbanned.error.isnt": "Player isn't banned."
                }
            )"_json;

void checkfiles() {
    if (!IsFile("EbanConfig.json")) {
        logger.warn("Config not found, creating one...");
        std::ofstream file("EbanConfig.json");

        file << std::setw(4) << j2 << std::endl;
        logger.warn("Created!");
    }
    if (!IsFile("banlist.json")) {
        logger.warn("Banlist not found, creating one...");
        std::ofstream file("banlist.json");
        file << "[]";
        logger.warn("Created!");
    }
}



string checkcfg(const string item) {
    std::ifstream banlist("EbanConfig.json"); //open config 
    json parsed;
    banlist >> parsed; //parsed config
    string cpp_string = parsed[item].get<std::string>();
    return cpp_string;
}

//Ban command code

class BanCmd : public Command
{
    CommandSelector<Player> p;
    std::string reason;
    bool reason_isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const
    {
        checkfiles();
        string reasn = reason_isSet ? reason : checkcfg("default.reason"); //defult reason

        auto res = p.results(ori); //get target

        if (!Command::checkHasTargets(res, outp))
            return;

        for (auto i : res) 
        {

            if(!i->isOP()){ //check is target OP
                string msg = checkcfg("kickmsg");
                msg = std::regex_replace(msg, std::regex(R"(<reason>)"), reasn);

                i->kick(msg); //kick target

                std::ifstream banlist("banlist.json"); //open banlist 
                json parsed;
                banlist >> parsed; //parsed banlist
                std::ofstream nw("banlist.json"); //open banlist to write

                string nick = i->getRealName();
                std::transform(nick.begin(), nick.end(), nick.begin(),
                    [](unsigned char c) { return std::tolower(c); }); //transform nick to lowercase

                string ip = i->getIP();
                ip = ip.substr(0, ip.find(":"));

                json form = { {"Nick", nick}, {"UUID", i->getUuid()}, {"ClientID", i->getClientId()}, {"XUID", i->getXuid()}, {"Ip", ip}, {"Reason", reasn}}; //form for ban player
                parsed.push_back(form); //add form to main json
                nw << std::setw(4) << parsed << std::endl; //write new json to banlist

                outp.success(checkcfg("banned.succses"));
            }
            else {
                outp.error(checkcfg("banned.error.op"));
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
        checkfiles();

        string reasn = reason_isSet ? reason : checkcfg("default.reason");

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
                outp.error(checkcfg("banned.error.already"));
                notbanned = false;
                break;
            }
        }
        //else - ban him
        if (notbanned) {
            std::ofstream nw("banlist.json");

            json form = { {"Nick",p}, {"UUID", "404 not found"}, {"ClientID", "404 not found"}, {"XUID", "404 not found"}, {"Ip", "404 not found"}, {"Reason", reasn} };
            parsed.push_back(form);
            nw << std::setw(4) << parsed << std::endl;

            outp.success(checkcfg("banned.succses"));
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
        checkfiles();

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
                outp.success(checkcfg("unbanned.succses"));
                banned = true;
                break;
                
            }
        }
        //else - give error
        if (!banned) {
            outp.error(checkcfg("unbanned.error.isnt"));

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

        checkfiles();

        Player* pl = ev.mPlayer;

        //open and parse banlist

        std::ifstream banlist("banlist.json");
        json parsed;
        banlist >> parsed;
        
        

        // if player join is cheater - kick him

        for (int i = 0; i < parsed.size(); i++) {
            string nick = pl->getRealName();
            std::transform(nick.begin(), nick.end(), nick.begin(),
                [](unsigned char c) { return std::tolower(c); }); //transform nick to lowercase

            string ip = pl->getIP();
            ip = ip.substr(0, ip.find(":"));

            if ((parsed[i]["Ip"] == ip && checkcfg("ban.ip") == "true") || (parsed[i]["Nick"] == nick && checkcfg("ban.nickname") == "true") || (parsed[i]["ClientID"] == pl->getClientId() && checkcfg("ban.clientid") == "true") || (parsed[i]["XUID"] == pl->getXuid() && checkcfg("ban.XUID") == "true") || (parsed[i]["UUID"] == pl->getUuid() && checkcfg("ban.UUID") == "true")) {
                if (parsed[i]["Ip"] == "404 not found") {
                    Level::runcmdEx(R"(unban ")" + pl->getRealName() + R"(")");
                    Level::runcmdEx(R"(ban ")" + pl->getRealName() + R"(" )" + parsed[i]["Reason"].dump());
                }
                else {
                    string msg = checkcfg("cmdmsg");
                    msg = std::regex_replace(msg, std::regex(R"(<player>)"), pl->getRealName());
                    logger.warn(msg);

                    string kick = checkcfg("kickmsg");
                    kick = std::regex_replace(kick, std::regex(R"(<reason>)"), parsed[i]["Reason"].get<std::string>());
                    pl->kick(kick);
                }
                

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
    checkfiles();
    JoinEvent();
    CommandEvent();
}