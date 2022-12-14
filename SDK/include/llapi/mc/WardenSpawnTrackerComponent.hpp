/**
 * @file  WardenSpawnTrackerComponent.hpp
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
 * @brief MC class WardenSpawnTrackerComponent.
 *
 */
class WardenSpawnTrackerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENSPAWNTRACKERCOMPONENT
public:
    class WardenSpawnTrackerComponent& operator=(class WardenSpawnTrackerComponent const &) = delete;
    WardenSpawnTrackerComponent(class WardenSpawnTrackerComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0WardenSpawnTrackerComponent@@QEAA@XZ
     * @hash   120368439
     */
    MCAPI WardenSpawnTrackerComponent();
    /**
     * @symbol ?addAdditionalSaveData@WardenSpawnTrackerComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1228006136
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?canIncreaseThreatLevel@WardenSpawnTrackerComponent@@QEBA_NXZ
     * @hash   -1348542102
     */
    MCAPI bool canIncreaseThreatLevel() const;
    /**
     * @symbol ?copyDataFrom@WardenSpawnTrackerComponent@@QEAAXAEBV1@@Z
     * @hash   -1373197612
     */
    MCAPI void copyDataFrom(class WardenSpawnTrackerComponent const &);
    /**
     * @symbol ?readAdditionalSaveData@WardenSpawnTrackerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1203996150
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?tick@WardenSpawnTrackerComponent@@QEAAXXZ
     * @hash   401316061
     */
    MCAPI void tick();
    /**
     * @symbol ?tryIncreaseThreatLevel@WardenSpawnTrackerComponent@@QEAAHXZ
     * @hash   -731470878
     */
    MCAPI int tryIncreaseThreatLevel();
    /**
     * @symbol ?getSoundEventForThreatLevel@WardenSpawnTrackerComponent@@SA?AV?$optional@W4LevelSoundEvent@@@std@@H@Z
     * @hash   246613098
     */
    MCAPI static class std::optional<enum class LevelSoundEvent> getSoundEventForThreatLevel(int);
    /**
     * @symbol ?hasNearbyWarden@WardenSpawnTrackerComponent@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   2027685448
     */
    MCAPI static bool hasNearbyWarden(class BlockSource &, class BlockPos const &);

};