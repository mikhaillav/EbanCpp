/**
 * @file  MakeLoveGoal.hpp
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
 * @brief MC class MakeLoveGoal.
 *
 */
class MakeLoveGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAKELOVEGOAL
public:
    class MakeLoveGoal& operator=(class MakeLoveGoal const &) = delete;
    MakeLoveGoal(class MakeLoveGoal const &) = delete;
    MakeLoveGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   265960061
     */
    virtual ~MakeLoveGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MakeLoveGoal@@UEAA_NXZ
     * @hash   1651068061
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MakeLoveGoal@@UEAA_NXZ
     * @hash   1712192059
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MakeLoveGoal@@UEAAXXZ
     * @hash   -1919621514
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MakeLoveGoal@@UEAAXXZ
     * @hash   -1814499866
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MakeLoveGoal@@UEAAXXZ
     * @hash   -1199504943
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MakeLoveGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1350790381
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0MakeLoveGoal@@QEAA@AEAVVillagerBase@@@Z
     * @hash   -263329800
     */
    MCAPI MakeLoveGoal(class VillagerBase &);

//private:
    /**
     * @symbol ?_breed@MakeLoveGoal@@AEBAXAEAVVillagerBase@@@Z
     * @hash   498706838
     */
    MCAPI void _breed(class VillagerBase &) const;
    /**
     * @symbol ?_findMate@MakeLoveGoal@@AEBAPEAVVillagerBase@@XZ
     * @hash   856564748
     */
    MCAPI class VillagerBase * _findMate() const;

private:

};