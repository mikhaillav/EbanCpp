/**
 * @file  BaseMoveToBlockGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseMoveToBlockGoal.
 *
 */
class BaseMoveToBlockGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEMOVETOBLOCKGOAL
public:
    class BaseMoveToBlockGoal& operator=(class BaseMoveToBlockGoal const &) = delete;
    BaseMoveToBlockGoal(class BaseMoveToBlockGoal const &) = delete;
    BaseMoveToBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1622757583
     */
    virtual ~BaseMoveToBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@BaseMoveToBlockGoal@@UEAA_NXZ
     * @hash   1826312685
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@BaseMoveToBlockGoal@@UEAA_NXZ
     * @hash   -1632795397
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
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
     * @vftbl  14
     * @symbol ?_moveToBlock@BaseMoveToBlockGoal@@MEAAXXZ
     * @hash   -1982673489
     */
    virtual void _moveToBlock();
    /**
     * @vftbl  17
     * @symbol ?findTargetBlock@BaseMoveToBlockGoal@@UEAA_NXZ
     * @hash   -808266663
     */
    virtual bool findTargetBlock();
    /**
     * @symbol ??0BaseMoveToBlockGoal@@QEAA@AEAVMob@@MHHHMM@Z
     * @hash   993566684
     */
    MCAPI BaseMoveToBlockGoal(class Mob &, float, int, int, int, float, float);

};