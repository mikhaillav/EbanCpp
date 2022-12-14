/**
 * @file  RandomStrollGoal.hpp
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
 * @brief MC class RandomStrollGoal.
 *
 */
class RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSTROLLGOAL
public:
    class RandomStrollGoal& operator=(class RandomStrollGoal const &) = delete;
    RandomStrollGoal(class RandomStrollGoal const &) = delete;
    RandomStrollGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1205958910
     */
    virtual ~RandomStrollGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RandomStrollGoal@@UEAA_NXZ
     * @hash   579795580
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomStrollGoal@@UEAA_NXZ
     * @hash   1023778506
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?canBeInterrupted@RandomBreachingGoal@@UEAA_NXZ
     * @hash   -1847347292
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol ?start@RandomStrollGoal@@UEAAXXZ
     * @hash   121155221
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@RandomStrollGoal@@UEAAXXZ
     * @hash   -1735593323
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@RandomStrollGoal@@UEAAXXZ
     * @hash   -514890176
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomStrollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -253581628
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
     * @vftbl  10
     * @symbol ?_setWantedPosition@RandomStrollGoal@@MEAA_NXZ
     * @hash   -704788055
     */
    virtual bool _setWantedPosition();
    /**
     * @symbol ??0RandomStrollGoal@@QEAA@AEAVMob@@MHHH@Z
     * @hash   1288161339
     */
    MCAPI RandomStrollGoal(class Mob &, float, int, int, int);

};