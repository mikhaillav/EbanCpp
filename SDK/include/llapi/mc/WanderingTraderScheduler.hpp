/**
 * @file  WanderingTraderScheduler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WanderingTraderScheduler.
 *
 */
class WanderingTraderScheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WANDERINGTRADERSCHEDULER
public:
    class WanderingTraderScheduler& operator=(class WanderingTraderScheduler const &) = delete;
    WanderingTraderScheduler(class WanderingTraderScheduler const &) = delete;
    WanderingTraderScheduler() = delete;
#endif

public:
    /**
     * @symbol ??0WanderingTraderScheduler@@QEAA@AEAVLevel@@@Z
     * @hash   284591965
     */
    MCAPI WanderingTraderScheduler(class Level &);
    /**
     * @symbol ?isWanderingTraderCurrentlyManaged@WanderingTraderScheduler@@QEAA_NAEBVActor@@@Z
     * @hash   -1753168537
     */
    MCAPI bool isWanderingTraderCurrentlyManaged(class Actor const &);
    /**
     * @symbol ?readSaveData@WanderingTraderScheduler@@QEAAXXZ
     * @hash   -1549794459
     */
    MCAPI void readSaveData();
    /**
     * @symbol ?tick@WanderingTraderScheduler@@QEAAXXZ
     * @hash   -1537730731
     */
    MCAPI void tick();
    /**
     * @symbol ?writeSaveData@WanderingTraderScheduler@@QEBAXXZ
     * @hash   -407069583
     */
    MCAPI void writeSaveData() const;
    /**
     * @symbol ??1WanderingTraderScheduler@@QEAA@XZ
     * @hash   -1684886462
     */
    MCAPI ~WanderingTraderScheduler();

//private:
    /**
     * @symbol ?_doesWanderingTraderExist@WanderingTraderScheduler@@AEBA_NXZ
     * @hash   -813443735
     */
    MCAPI bool _doesWanderingTraderExist() const;
    /**
     * @symbol ?_findValidSpawnPosUnder@WanderingTraderScheduler@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
     * @hash   579242003
     */
    MCAPI class std::optional<class BlockPos> _findValidSpawnPosUnder(class BlockPos const &, class BlockSource &) const;
    /**
     * @symbol ?_getRandomHeightmapPosAroundOrigin@WanderingTraderScheduler@@AEAA?AVBlockPos@@AEBVBlockSource@@AEBV2@H_N@Z
     * @hash   1563752696
     */
    MCAPI class BlockPos _getRandomHeightmapPosAroundOrigin(class BlockSource const &, class BlockPos const &, int, bool);
    /**
     * @symbol ?_getRandomPlayerInOverworld@WanderingTraderScheduler@@AEBAPEAVActor@@XZ
     * @hash   1346531482
     */
    MCAPI class Actor * _getRandomPlayerInOverworld() const;
    /**
     * @symbol ?_getSpawnPosFromNearestVillageToPlayerPos@WanderingTraderScheduler@@AEAA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
     * @hash   -621947879
     */
    MCAPI class std::optional<class BlockPos> _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const &, class BlockSource &);

private:
    /**
     * @symbol ?CHANCE_TO_SPAWN_IN_WILDERNESS@WanderingTraderScheduler@@0MB
     * @hash   1919466630
     */
    MCAPI static float const CHANCE_TO_SPAWN_IN_WILDERNESS;
    /**
     * @symbol ?CHANCE_TO_SPAWN_PER_DAY@WanderingTraderScheduler@@0V?$vector@MV?$allocator@M@std@@@std@@B
     * @hash   -508750225
     */
    MCAPI static std::vector<float> const CHANCE_TO_SPAWN_PER_DAY;
    /**
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_MEETING_AREA@WanderingTraderScheduler@@0HB
     * @hash   -676624063
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    /**
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_PLAYER@WanderingTraderScheduler@@0HB
     * @hash   1659573481
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER;
    /**
     * @symbol ?DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE@WanderingTraderScheduler@@0HB
     * @hash   -633334737
     */
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    /**
     * @symbol ?LENGTH_OF_DAY_IN_TICKS@WanderingTraderScheduler@@0HB
     * @hash   -466632102
     */
    MCAPI static int const LENGTH_OF_DAY_IN_TICKS;

};