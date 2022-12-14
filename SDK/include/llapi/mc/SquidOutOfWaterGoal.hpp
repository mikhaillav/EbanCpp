/**
 * @file  SquidOutOfWaterGoal.hpp
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
 * @brief MC class SquidOutOfWaterGoal.
 *
 */
class SquidOutOfWaterGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDOUTOFWATERGOAL
public:
    class SquidOutOfWaterGoal& operator=(class SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal(class SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -460513755
     */
    virtual ~SquidOutOfWaterGoal();
    /**
     * @vftbl  1
     * @hash   -1362796495
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -643961342
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -643037821
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SquidOutOfWaterGoal@@UEAAXXZ
     * @hash   889215394
     */
    virtual void start();
    /**
     * @vftbl  5
     * @hash   -1401863067
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SquidOutOfWaterGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2117132761
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDOUTOFWATERGOAL
    /**
     * @symbol ?canContinueToUse@SquidOutOfWaterGoal@@UEAA_NXZ
     * @hash   -1315736425
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse@SquidOutOfWaterGoal@@UEAA_NXZ
     * @hash   2143171769
     */
    MCVAPI bool canUse();
    /**
     * @symbol ?stop@SquidOutOfWaterGoal@@UEAAXXZ
     * @hash   1025125522
     */
    MCVAPI void stop();
    /**
     * @symbol ?tick@SquidOutOfWaterGoal@@UEAAXXZ
     * @hash   -102876851
     */
    MCVAPI void tick();
#endif

};