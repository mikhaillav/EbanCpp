/**
 * @file  EatBlockGoal.hpp
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
 * @brief MC class EatBlockGoal.
 *
 */
class EatBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EATBLOCKGOAL
public:
    class EatBlockGoal& operator=(class EatBlockGoal const &) = delete;
    EatBlockGoal(class EatBlockGoal const &) = delete;
    EatBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1500946670
     */
    virtual ~EatBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@EatBlockGoal@@UEAA_NXZ
     * @hash   -292486584
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@EatBlockGoal@@UEAA_NXZ
     * @hash   -230701418
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@EatBlockGoal@@UEAAXXZ
     * @hash   1315096097
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@EatBlockGoal@@UEAAXXZ
     * @hash   1420417633
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@EatBlockGoal@@UEAAXXZ
     * @hash   2035320300
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@EatBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   229937768
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0EatBlockGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1594851515
     */
    MCAPI EatBlockGoal(class Mob &);
    /**
     * @symbol ?getEatSuccessChance@EatBlockGoal@@QEBAMAEAVActor@@@Z
     * @hash   1576444825
     */
    MCAPI float getEatSuccessChance(class Actor &) const;

};