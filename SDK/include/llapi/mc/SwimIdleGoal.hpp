/**
 * @file  SwimIdleGoal.hpp
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
 * @brief MC class SwimIdleGoal.
 *
 */
class SwimIdleGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMIDLEGOAL
public:
    class SwimIdleGoal& operator=(class SwimIdleGoal const &) = delete;
    SwimIdleGoal(class SwimIdleGoal const &) = delete;
    SwimIdleGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1162467719
     */
    virtual ~SwimIdleGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SwimIdleGoal@@UEAA_NXZ
     * @hash   -379692159
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SwimIdleGoal@@UEAA_NXZ
     * @hash   -317937745
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SwimIdleGoal@@UEAAXXZ
     * @hash   1021051258
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?tick@SwimIdleGoal@@UEAAXXZ
     * @hash   -898614603
     */
    virtual void tick();
    /**
     * @vftbl  6
     * @hash   -1880148923
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SwimIdleGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   446938911
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SwimIdleGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1879699458
     */
    MCAPI SwimIdleGoal(class Mob &);

};