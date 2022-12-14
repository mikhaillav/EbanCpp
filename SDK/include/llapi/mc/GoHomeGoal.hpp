/**
 * @file  GoHomeGoal.hpp
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
 * @brief MC class GoHomeGoal.
 *
 */
class GoHomeGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOHOMEGOAL
public:
    class GoHomeGoal& operator=(class GoHomeGoal const &) = delete;
    GoHomeGoal(class GoHomeGoal const &) = delete;
    GoHomeGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1983079836
     */
    virtual ~GoHomeGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@GoHomeGoal@@UEAA_NXZ
     * @hash   -1918661514
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@GoHomeGoal@@UEAA_NXZ
     * @hash   -1445822396
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@GoHomeGoal@@UEAAXXZ
     * @hash   1010062191
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@GoHomeGoal@@UEAAXXZ
     * @hash   1324181359
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@GoHomeGoal@@UEAAXXZ
     * @hash   805374346
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@GoHomeGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1344376342
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0GoHomeGoal@@QEAA@AEAVMob@@@Z
     * @hash   629269091
     */
    MCAPI GoHomeGoal(class Mob &);

//private:
    /**
     * @symbol ?_getHomeDimension@GoHomeGoal@@AEBA?AV?$AutomaticID@VDimension@@H@@XZ
     * @hash   -627629937
     */
    MCAPI class AutomaticID<class Dimension, int> _getHomeDimension() const;
    /**
     * @symbol ?_getHomePos@GoHomeGoal@@AEBA?AVBlockPos@@XZ
     * @hash   777462017
     */
    MCAPI class BlockPos _getHomePos() const;
    /**
     * @symbol ?_hasRequiredComponents@GoHomeGoal@@AEBA_NXZ
     * @hash   1783870571
     */
    MCAPI bool _hasRequiredComponents() const;
    /**
     * @symbol ?_triggerOnFailedEvents@GoHomeGoal@@AEAAXXZ
     * @hash   -32053680
     */
    MCAPI void _triggerOnFailedEvents();

private:

};