/**
 * @file  TargetGoal.hpp
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
 * @brief MC class TargetGoal.
 *
 */
class TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETGOAL
public:
    class TargetGoal& operator=(class TargetGoal const &) = delete;
    TargetGoal(class TargetGoal const &) = delete;
    TargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1600389106
     */
    virtual ~TargetGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@WitherTargetHighestDamage@@UEAA_NXZ
     * @hash   -332601497
     */
    virtual bool canUse() = 0;
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@TargetGoal@@UEAA_NXZ
     * @hash   -184347878
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?isTargetGoal@TargetGoal@@UEBA_NXZ
     * @hash   372468690
     */
    virtual bool isTargetGoal() const;
    /**
     * @vftbl  4
     * @symbol ?start@TargetGoal@@UEAAXXZ
     * @hash   -1863814219
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@TargetGoal@@UEAAXXZ
     * @hash   1146561829
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@TargetGoal@@UEAAXXZ
     * @hash   -2069286240
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@TargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   667575860
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
     * @vftbl  10
     * @symbol ?_canAttack@TargetGoal@@MEAA_NPEAVMob@@PEAVActor@@_N2PEAPEBUMobDescriptor@@@Z
     * @hash   1169799679
     */
    virtual bool _canAttack(class Mob *, class Actor *, bool, bool, struct MobDescriptor const **);
    /**
     * @symbol ??0TargetGoal@@QEAA@AEAVMob@@_NH1M1H@Z
     * @hash   38632351
     */
    MCAPI TargetGoal(class Mob &, bool, int, bool, float, bool, int);
    /**
     * @symbol ??0TargetGoal@@QEAA@AEAVMob@@AEBV?$vector@UMobDescriptor@@V?$allocator@UMobDescriptor@@@std@@@std@@_NH2M2H@Z
     * @hash   1595672730
     */
    MCAPI TargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, bool, int, bool, float, bool, int);

//protected:
    /**
     * @symbol ?_canAttack@TargetGoal@@IEAA_NPEAVActor@@_NPEAPEBUMobDescriptor@@@Z
     * @hash   52820942
     */
    MCAPI bool _canAttack(class Actor *, bool, struct MobDescriptor const **);
    /**
     * @symbol ?_canReach@TargetGoal@@IEAA_NAEAVActor@@@Z
     * @hash   667315116
     */
    MCAPI bool _canReach(class Actor &);
    /**
     * @symbol ?_canReachAfterDelay@TargetGoal@@IEAA_NAEAVActor@@@Z
     * @hash   -1892138987
     */
    MCAPI bool _canReachAfterDelay(class Actor &);
    /**
     * @symbol ?_matchesTargetTypes@TargetGoal@@IEAA_NPEAVMob@@PEAVActor@@_NPEAPEBUMobDescriptor@@@Z
     * @hash   1690077173
     */
    MCAPI bool _matchesTargetTypes(class Mob *, class Actor *, bool, struct MobDescriptor const **);
    /**
     * @symbol ?_withinRange@TargetGoal@@IEAA_NAEBVActor@@@Z
     * @hash   212499880
     */
    MCAPI bool _withinRange(class Actor const &);

protected:

};