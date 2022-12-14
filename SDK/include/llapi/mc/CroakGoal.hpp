/**
 * @file  CroakGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CroakGoal.
 *
 */
class CroakGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROAKGOAL
public:
    class CroakGoal& operator=(class CroakGoal const &) = delete;
    CroakGoal(class CroakGoal const &) = delete;
    CroakGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   557707147
     */
    virtual ~CroakGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@CroakGoal@@UEAA_NXZ
     * @hash   478318691
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@CroakGoal@@UEAA_NXZ
     * @hash   250130305
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@CroakGoal@@UEAAXXZ
     * @hash   -601512356
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@CroakGoal@@UEAAXXZ
     * @hash   1743432444
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@CroakGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1183851459
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0CroakGoal@@QEAA@AEAVMob@@@Z
     * @hash   -172771968
     */
    MCAPI CroakGoal(class Mob &);

};