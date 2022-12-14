/**
 * @file  MinecraftCommands.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandContext.hpp"
#include "MCRESULT.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftCommands.
 *
 */
class MinecraftCommands {

#define AFTER_EXTRA
// Add Member There
public:
    [[deprecated]]
    static MCRESULT _runcmd(void* origin, const std::string& cmd) {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            return Global<MinecraftCommands>->executeCommand(std::make_shared<CommandContext>(cmd, std::unique_ptr<CommandOrigin>((CommandOrigin*)origin)), false);
        }
        catch (...)
        {
        }
        return {0};
    }
    static MCRESULT _runcmd(std::unique_ptr<CommandOrigin> origin, const std::string& cmd)
    {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            return Global<MinecraftCommands>->executeCommand(std::make_shared<CommandContext>(cmd, std::move(origin)), false);
        }
        catch (...)
        {
        }
        return {0};
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTCOMMANDS
public:
    class MinecraftCommands& operator=(class MinecraftCommands const &) = delete;
    MinecraftCommands(class MinecraftCommands const &) = delete;
    MinecraftCommands() = delete;
#endif

public:
    /**
     * @symbol ??0MinecraftCommands@@QEAA@AEAVMinecraft@@@Z
     * @hash   675610542
     */
    MCAPI MinecraftCommands(class Minecraft &);
    /**
     * @symbol ?compileCommand@MinecraftCommands@@QEAAPEAVCommand@@AEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     * @hash   2130138716
     */
    MCAPI class Command * compileCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion, class std::function<void (std::string const &)>);
    /**
     * @symbol ?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z
     * @hash   -1797714401
     */
    MCAPI struct MCRESULT executeCommand(class std::shared_ptr<class CommandContext>, bool) const;
    /**
     * @symbol ?getRegistry@MinecraftCommands@@QEAAAEAVCommandRegistry@@XZ
     * @hash   270137614
     */
    MCAPI class CommandRegistry & getRegistry();
    /**
     * @symbol ?handleOutput@MinecraftCommands@@QEBAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
     * @hash   1658847621
     */
    MCAPI void handleOutput(class CommandOrigin const &, class CommandOutput const &) const;
    /**
     * @symbol ?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVIWorldRegistriesProvider@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z
     * @hash   1663478574
     */
    MCAPI void initCoreEnums(class ItemRegistryRef, class IWorldRegistriesProvider const &, class ActorFactory const &, class Experiments const &, class BaseGameVersion const &);
    /**
     * @symbol ?initCoreEnumsServer@MinecraftCommands@@QEAAXAEBVActorDefinitionGroup@@@Z
     * @hash   717682966
     */
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const &);
    /**
     * @symbol ?requestCommandExecution@MinecraftCommands@@QEBA?AUMCRESULT@@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@H_N@Z
     * @hash   1250874545
     */
    MCAPI struct MCRESULT requestCommandExecution(std::unique_ptr<class CommandOrigin>, std::string const &, int, bool) const;
    /**
     * @symbol ?runCommand@MinecraftCommands@@QEAAXAEAVCommand@@AEAVCommandOrigin@@@Z
     * @hash   841434223
     */
    MCAPI void runCommand(class Command &, class CommandOrigin &);
    /**
     * @symbol ?runCommand@MinecraftCommands@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
     * @hash   -440571796
     */
    MCAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @symbol ?setRegistryNetworkUpdateCallback@MinecraftCommands@@QEBAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
     * @hash   1543785073
     */
    MCAPI void setRegistryNetworkUpdateCallback(class std::function<void (class Packet const &)>) const;
    /**
     * @symbol ?getOutputType@MinecraftCommands@@SA?AW4CommandOutputType@@AEBVCommandOrigin@@@Z
     * @hash   -1491380505
     */
    MCAPI static enum class CommandOutputType getOutputType(class CommandOrigin const &);
    /**
     * @symbol ?initBlockEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
     * @hash   -499558935
     */
    MCAPI static void initBlockEnum(class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @symbol ?initItemEnum@MinecraftCommands@@SAXVItemRegistryRef@@AEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
     * @hash   10707104
     */
    MCAPI static void initItemEnum(class ItemRegistryRef, class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @symbol ?initItemTagEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1253168134
     */
    MCAPI static void initItemTagEnum(class CommandRegistry &);
    /**
     * @symbol ?initStructureFeatureEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1670770492
     */
    MCAPI static void initStructureFeatureEnum(class CommandRegistry &);
    /**
     * @symbol ?registerSharedClientServerEnums@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     * @hash   -140659022
     */
    MCAPI static void registerSharedClientServerEnums(class CommandRegistry &);

};