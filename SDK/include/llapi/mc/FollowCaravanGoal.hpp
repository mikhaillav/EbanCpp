/**
 * @file  FollowCaravanGoal.hpp
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
 * @brief MC class FollowCaravanGoal.
 *
 */
class FollowCaravanGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWCARAVANGOAL
public:
    class FollowCaravanGoal& operator=(class FollowCaravanGoal const &) = delete;
    FollowCaravanGoal(class FollowCaravanGoal const &) = delete;
    FollowCaravanGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1030863738
     */
    virtual ~FollowCaravanGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@FollowCaravanGoal@@UEAA_NXZ
     * @hash   -508026408
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@FollowCaravanGoal@@UEAA_NXZ
     * @hash   -678110074
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@FollowCaravanGoal@@UEAAXXZ
     * @hash   996774865
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@FollowCaravanGoal@@UEAAXXZ
     * @hash   -91765823
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@FollowCaravanGoal@@UEAAXXZ
     * @hash   1023058396
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@FollowCaravanGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1093800568
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0FollowCaravanGoal@@QEAA@AEAVMob@@MHAEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@@Z
     * @hash   1749974074
     */
    MCAPI FollowCaravanGoal(class Mob &, float, int, std::vector<struct MobDescriptor> const &);

//private:
    /**
     * @symbol ?checkCaravanType@FollowCaravanGoal@@AEAA_NPEAVMob@@@Z
     * @hash   -1609975422
     */
    MCAPI bool checkCaravanType(class Mob *);
    /**
     * @symbol ?firstIsLeashed@FollowCaravanGoal@@AEAA_NPEAVMob@@H@Z
     * @hash   239682407
     */
    MCAPI bool firstIsLeashed(class Mob *, int);

private:

};