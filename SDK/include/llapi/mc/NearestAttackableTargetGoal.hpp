/**
 * @file  NearestAttackableTargetGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NearestAttackableTargetGoal.
 *
 */
class NearestAttackableTargetGoal : public TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETGOAL
public:
    class NearestAttackableTargetGoal& operator=(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   635753042
     */
    virtual ~NearestAttackableTargetGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@NearestAttackableTargetGoal@@UEAA_NXZ
     * @hash   1017381660
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@NearestAttackableTargetGoal@@UEAA_NXZ
     * @hash   -1466179206
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  4
     * @symbol ?start@NearestAttackableTargetGoal@@UEAAXXZ
     * @hash   832899893
     */
    virtual void start();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@NearestAttackableTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -960647404
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1399092504
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1355408327
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?_findTarget@NearestAttackableTargetGoal@@MEAA?AUActorUniqueID@@PEAPEBUMobDescriptor@@@Z
     * @hash   -1695753119
     */
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
    /**
     * @symbol ??0NearestAttackableTargetGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1964061767
     */
    MCAPI NearestAttackableTargetGoal(class Mob &);

//protected:
    /**
     * @symbol ?_canStartSearching@NearestAttackableTargetGoal@@IEAA_NXZ
     * @hash   -1190269390
     */
    MCAPI bool _canStartSearching();
    /**
     * @symbol ?_getNearbyActors@NearestAttackableTargetGoal@@IEAA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@XZ
     * @hash   1914449354
     */
    MCAPI std::vector<struct DistanceSortedActor> _getNearbyActors();
    /**
     * @symbol ?_isTargetVisible@NearestAttackableTargetGoal@@IEBA_NAEBVMob@@MM@Z
     * @hash   -1274160777
     */
    MCAPI bool _isTargetVisible(class Mob const &, float, float) const;

//private:
    /**
     * @symbol ?_selectTarget@NearestAttackableTargetGoal@@AEAA_NXZ
     * @hash   1627480222
     */
    MCAPI bool _selectTarget();

protected:

private:

};