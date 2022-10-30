/**
 * @file  SpawnChecks.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnChecks.
 *
 */
class SpawnChecks {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCHECKS
public:
    class SpawnChecks& operator=(class SpawnChecks const &) = delete;
    SpawnChecks(class SpawnChecks const &) = delete;
    SpawnChecks() = delete;
#endif

public:
    /**
     * @symbol ?canHatchTurtle@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   924502169
     */
    MCAPI static bool canHatchTurtle(class ILevel const &);
    /**
     * @symbol ?canRespawnEnderDragon@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   -201770743
     */
    MCAPI static bool canRespawnEnderDragon(class ILevel const &);
    /**
     * @symbol ?canReviveBees@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   1928770915
     */
    MCAPI static bool canReviveBees(class ILevel const &);
    /**
     * @symbol ?canSpawnBees@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   1394832121
     */
    MCAPI static bool canSpawnBees(class ILevel const &);
    /**
     * @symbol ?canSpawnEnderDragon@SpawnChecks@@SA_NAEBVServerLevel@@@Z
     * @hash   1228437211
     */
    MCAPI static bool canSpawnEnderDragon(class ServerLevel const &);
    /**
     * @symbol ?canSpawnFromMobSpawnerBlock@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   1442891695
     */
    MCAPI static bool canSpawnFromMobSpawnerBlock(class ILevel const &);
    /**
     * @symbol ?canSpawnNaturally@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   -409354503
     */
    MCAPI static bool canSpawnNaturally(class ILevel const &);
    /**
     * @symbol ?canSpawnPigZombieFromPortal@SpawnChecks@@SA_NAEBVDimension@@AEBVRandomize@@@Z
     * @hash   -1678761010
     */
    MCAPI static bool canSpawnPigZombieFromPortal(class Dimension const &, class Randomize const &);
    /**
     * @symbol ?canSpawnSkeletonTrap@SpawnChecks@@SA_NAEBVILevel@@AEBVRandomize@@@Z
     * @hash   -789580952
     */
    MCAPI static bool canSpawnSkeletonTrap(class ILevel const &, class Randomize const &);
    /**
     * @symbol ?canSpawnTadpoles@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   1686478739
     */
    MCAPI static bool canSpawnTadpoles(class ILevel const &);
    /**
     * @symbol ?canSpawnVillageDwellers@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   -1204554203
     */
    MCAPI static bool canSpawnVillageDwellers(class ILevel const &);
    /**
     * @symbol ?canSpawnWanderingTrader@SpawnChecks@@SA_NAEBVServerLevel@@@Z
     * @hash   -310185893
     */
    MCAPI static bool canSpawnWanderingTrader(class ServerLevel const &);
    /**
     * @symbol ?canSpawnWarden@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   2087476001
     */
    MCAPI static bool canSpawnWarden(class ILevel const &);
    /**
     * @symbol ?canSpawnWithWorldGeneration@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   -1099579187
     */
    MCAPI static bool canSpawnWithWorldGeneration(class ILevel const &);
    /**
     * @symbol ?canTriggerRaid@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   -636708643
     */
    MCAPI static bool canTriggerRaid(class ILevel const &);
    /**
     * @symbol ?shouldAbortRaid@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   -1350191247
     */
    MCAPI static bool shouldAbortRaid(class ILevel const &);
    /**
     * @symbol ?shouldPauseRaid@SpawnChecks@@SA_NAEBVILevel@@@Z
     * @hash   327508485
     */
    MCAPI static bool shouldPauseRaid(class ILevel const &);

};