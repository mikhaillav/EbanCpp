/**
 * @file  VanillaGameModuleServer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaGameModuleServer.
 *
 */
class VanillaGameModuleServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAGAMEMODULESERVER
public:
    class VanillaGameModuleServer& operator=(class VanillaGameModuleServer const &) = delete;
    VanillaGameModuleServer(class VanillaGameModuleServer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -711315510
     */
    virtual ~VanillaGameModuleServer();
    /**
     * @vftbl  1
     * @symbol ?init@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@AEAVLevel@@@Z
     * @hash   -1798024025
     */
    virtual void init(class ServerInstance &, class Level &);
    /**
     * @vftbl  2
     * @symbol ?initializeBehaviorStack@VanillaGameModuleServer@@UEAAXAEBVExperiments@@AEAVIResourcePackRepository@@AEAVResourcePackStack@@AEBVBaseGameVersion@@@Z
     * @hash   88531593
     */
    virtual void initializeBehaviorStack(class Experiments const &, class IResourcePackRepository &, class ResourcePackStack &, class BaseGameVersion const &);
    /**
     * @vftbl  3
     * @symbol ?configureLevel@VanillaGameModuleServer@@UEAAXAEAVLevel@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@@Z
     * @hash   510833298
     */
    virtual void configureLevel(class Level &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);
    /**
     * @vftbl  4
     * @hash   -1402786588
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?configureDocumentation@VanillaGameModuleServer@@UEAAXAEAVIGameModuleDocumentation@@VItemRegistryRef@@@Z
     * @hash   1779175430
     */
    virtual void configureDocumentation(class IGameModuleDocumentation &, class ItemRegistryRef);
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?setupCommands@VanillaGameModuleServer@@UEAAXAEAVCommandRegistry@@@Z
     * @hash   -17603116
     */
    virtual void setupCommands(class CommandRegistry &);
    /**
     * @vftbl  8
     * @symbol ?configureServerNetworkHandler@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@@Z
     * @hash   -94558018
     */
    virtual void configureServerNetworkHandler(class ServerInstance &, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAGAMEMODULESERVER
    /**
     * @symbol ?configureNewPlayer@VanillaGameModuleServer@@UEAAXAEAVPlayer@@@Z
     * @hash   1883044173
     */
    MCVAPI void configureNewPlayer(class Player &);
    /**
     * @symbol ?tick@VanillaGameModuleServer@@UEAAXXZ
     * @hash   1140857512
     */
    MCVAPI void tick();
#endif
    /**
     * @symbol ??0VanillaGameModuleServer@@QEAA@XZ
     * @hash   -484684120
     */
    MCAPI VanillaGameModuleServer();

//private:
    /**
     * @symbol ?_configureWorldGen@VanillaGameModuleServer@@AEAAXAEAVIWorldRegistriesProvider@@AEBUSpawnSettings@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@@Z
     * @hash   76433989
     */
    MCAPI void _configureWorldGen(class IWorldRegistriesProvider &, struct SpawnSettings const &, class Experiments const &, class ResourcePackManager &, class BaseGameVersion const &);
    /**
     * @symbol ?_registerListeners@VanillaGameModuleServer@@AEAAXAEAVLevel@@@Z
     * @hash   149985611
     */
    MCAPI void _registerListeners(class Level &);

private:

};