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

using json = nlohmann::json;

Logger logger(PLUGIN_NAME);

class BanCmd : public Command
{
    CommandSelector<Player> p;
    std::string reason;
    bool reason_isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const
    {
        string reasn = reason_isSet ? reason : "Banned by admin";
        auto res = p.results(ori);
        if (!Command::checkHasTargets(res, outp))
            return;
        for (auto i : res)
        {
            if(!i->isOP()){
                i->kick("You have been banned \nReason: " + reasn + "\n:(");
                std::ifstream banlist("banlist.json");
                json parsed;
                banlist >> parsed;
                std::ofstream nw("banlist.json");
                json form = { {"Nick", i->getRealName()}, {"UUID", i->getUuid()}, {"ClientID", i->getClientId()}, {"XUID", i->getXuid()}, {"Reason", reasn} };
                parsed.push_back(form);
                nw << std::setw(4) << parsed << std::endl;

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
    string p;
    std::string reason;
    bool reason_isSet;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const
    {
        string reasn = reason_isSet ? reason : "Banned by admin";

        std::ifstream banlist("banlist.json");
        json parsed;
        banlist >> parsed;
        std::ofstream nw("banlist.json");
        json form = { {"Nick",p}, {"UUID", "404 not found"}, {"ClientID", "404 not found"}, {"XUID", "404 not found"}, {"Reason", reasn} };
        parsed.push_back(form);
        nw << std::setw(4) << parsed << std::endl;

        outp.success("Player has been banned.");
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
            makeMandatory(&OfflineBanCmd::p, "cheater"),
            makeOptional(&OfflineBanCmd::reason, "reason", &OfflineBanCmd::reason_isSet));
    }
};

class unBanCmd : public Command
{
   string p;

public:
    void execute(CommandOrigin const& ori, CommandOutput& outp) const
    {
        std::ifstream banlist("banlist.json");
        json parsed;
        banlist >> parsed;
        bool ok = false;
        for (int i = 0; i < parsed.size(); i++) {
            if (parsed[i]["Nick"] == p) {
                std::ofstream nw("banlist.json");
                parsed.erase(i);
                nw << std::setw(4) << parsed << std::endl;
                outp.success("Player has been unbanned.");
                ok = true;
                break;
                
            }
        }
        if (!ok) {
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
            makeMandatory(&unBanCmd::p, "player"));
    }
};

void JoinEvent(){
    Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& ev) {
        Player* pl = ev.mPlayer;

        std::ifstream banlist("banlist.json");
        json parsed;
        banlist >> parsed;
        
        for (int i = 0; i < parsed.size(); i++) {
            if (parsed[i]["Nick"] == pl->getRealName() || parsed[i]["ClientID"] == pl->getClientId() || parsed[i]["XUID"] == pl->getXuid() || parsed[i]["UUID"] == pl->getUuid()) {
                logger.warn("Banned player " + pl->getRealName() + " try to join server.");
                
                pl->kick("You have been banned \nReason: " + parsed[i]["Reason"].dump() + "\n:(");
            }
        }

        return true;
    });

}

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
    JoinEvent();
    CommandEvent();
}
