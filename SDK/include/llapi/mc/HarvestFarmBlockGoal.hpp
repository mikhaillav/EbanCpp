/**
 * @file  HarvestFarmBlockGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HarvestFarmBlockGoal.
 *
 */
class HarvestFarmBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HARVESTFARMBLOCKGOAL
public:
    class HarvestFarmBlockGoal& operator=(class HarvestFarmBlockGoal const &) = delete;
    HarvestFarmBlockGoal(class HarvestFarmBlockGoal const &) = delete;
    HarvestFarmBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   325319819
     */
    virtual ~HarvestFarmBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@HarvestFarmBlockGoal@@UEAA_NXZ
     * @hash   -1710069521
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@HarvestFarmBlockGoal@@UEAA_NXZ
     * @hash   1684043037
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@HarvestFarmBlockGoal@@UEAAXXZ
     * @hash   -237998184
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@HarvestFarmBlockGoal@@UEAAXXZ
     * @hash   -1709132024
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@HarvestFarmBlockGoal@@UEAAXXZ
     * @hash   -9348029
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@HarvestFarmBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -182761583
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1399092504
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1348196983
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@HarvestFarmBlockGoal@@MEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1482509530
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ??0HarvestFarmBlockGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1005778164
     */
    MCAPI HarvestFarmBlockGoal(class Mob &);

//protected:
    /**
     * @symbol ?trySowCrop@HarvestFarmBlockGoal@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -299974310
     */
    MCAPI bool trySowCrop(class BlockSource &, class BlockPos const &);

protected:

};