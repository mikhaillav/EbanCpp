/**
 * @file  OcelotAttackGoal.hpp
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
 * @brief MC class OcelotAttackGoal.
 *
 */
class OcelotAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTATTACKGOAL
public:
    class OcelotAttackGoal& operator=(class OcelotAttackGoal const &) = delete;
    OcelotAttackGoal(class OcelotAttackGoal const &) = delete;
    OcelotAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   468618245
     */
    virtual ~OcelotAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@OcelotAttackGoal@@UEAA_NXZ
     * @hash   444023077
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@OcelotAttackGoal@@UEAA_NXZ
     * @hash   887852243
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?stop@OcelotAttackGoal@@UEAAXXZ
     * @hash   867962606
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@OcelotAttackGoal@@UEAAXXZ
     * @hash   2088711881
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@OcelotAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1175908949
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0OcelotAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   1309254082
     */
    MCAPI OcelotAttackGoal(class Mob &);

};