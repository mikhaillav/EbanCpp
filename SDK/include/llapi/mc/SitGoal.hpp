/**
 * @file  SitGoal.hpp
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
 * @brief MC class SitGoal.
 *
 */
class SitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SITGOAL
public:
    class SitGoal& operator=(class SitGoal const &) = delete;
    SitGoal(class SitGoal const &) = delete;
    SitGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1976410847
     */
    virtual ~SitGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SitGoal@@UEAA_NXZ
     * @hash   525762607
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1361872974
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   576718691
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SitGoal@@UEAAXXZ
     * @hash   898479720
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SitGoal@@UEAAXXZ
     * @hash   328471256
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SitGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   328739681
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SitGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1504124532
     */
    MCAPI SitGoal(class Mob &);

};