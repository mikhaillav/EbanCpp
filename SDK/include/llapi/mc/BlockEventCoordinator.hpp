/**
 * @file  BlockEventCoordinator.hpp
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
 * @brief MC class BlockEventCoordinator.
 *
 */
class BlockEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTCOORDINATOR
public:
    class BlockEventCoordinator& operator=(class BlockEventCoordinator const &) = delete;
    BlockEventCoordinator(class BlockEventCoordinator const &) = delete;
    BlockEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?getBlockGameplayHandler@BlockEventCoordinator@@QEAAAEAVBlockGameplayHandler@@XZ
     * @hash   1119633160
     */
    MCAPI class BlockGameplayHandler & getBlockGameplayHandler();
    /**
     * @symbol ?registerBlockGameplayHandler@BlockEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VBlockGameplayHandler@@U?$default_delete@VBlockGameplayHandler@@@std@@@std@@@Z
     * @hash   1140764162
     */
    MCAPI void registerBlockGameplayHandler(std::unique_ptr<class BlockGameplayHandler> &&);
    /**
     * @symbol ?sendBlockDestroyedByPlayer@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -1095937456
     */
    MCAPI void sendBlockDestroyedByPlayer(class Player &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?sendBlockDestructionStarted@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1097885555
     */
    MCAPI void sendBlockDestructionStarted(class Player &, class BlockPos const &);
    /**
     * @symbol ?sendBlockDestructionStopped@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@H@Z
     * @hash   -1214652344
     */
    MCAPI void sendBlockDestructionStopped(class Player &, class BlockPos const &, int);
    /**
     * @symbol ?sendBlockExploded@BlockEventCoordinator@@QEAAXAEBVBlockPos@@AEBVBlock@@PEAVActor@@@Z
     * @hash   -976203693
     */
    MCAPI void sendBlockExploded(class BlockPos const &, class Block const &, class Actor *);
    /**
     * @symbol ?sendBlockInPosWillBeDestroyedByPlayer@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1479802927
     */
    MCAPI void sendBlockInPosWillBeDestroyedByPlayer(class Player &, class BlockPos const &);
    /**
     * @symbol ?sendBlockInteractedWith@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1761089227
     */
    MCAPI void sendBlockInteractedWith(class Player &, class BlockPos const &);
    /**
     * @symbol ?sendBlockMovedByPiston@BlockEventCoordinator@@QEAAXAEBVBlockPos@@0W4PistonState@@@Z
     * @hash   -476543675
     */
    MCAPI void sendBlockMovedByPiston(class BlockPos const &, class BlockPos const &, enum class PistonState);
    /**
     * @symbol ?sendBlockPlacedByPlayer@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
     * @hash   431629319
     */
    MCAPI void sendBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    /**
     * @symbol ?sendEvent@BlockEventCoordinator@@QEAA?AW4CoordinatorResult@@AEBV?$EventRef@U?$BlockGameplayEvent@W4CoordinatorResult@@@@@@@Z
     * @hash   1389223805
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct BlockGameplayEvent<enum class CoordinatorResult>> const &);
    /**
     * @symbol ?sendEvent@BlockEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableBlockGameplayEvent@W4CoordinatorResult@@@@@@@Z
     * @hash   899788405
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct MutableBlockGameplayEvent<enum class CoordinatorResult>>);
    /**
     * @symbol ?sendEvent@BlockEventCoordinator@@QEAAXAEBV?$EventRef@U?$BlockGameplayEvent@X@@@@@Z
     * @hash   -166990152
     */
    MCAPI void sendEvent(class EventRef<struct BlockGameplayEvent<void>> const &);
    /**
     * @symbol ?sendUnknownBlockReceived@BlockEventCoordinator@@QEAAXAEAVLevel@@AEBUNewBlockID@@G@Z
     * @hash   -144056025
     */
    MCAPI void sendUnknownBlockReceived(class Level &, struct NewBlockID const &, unsigned short);

};