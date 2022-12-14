/**
 * @file  ShiftedDurationAmplifier.hpp
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
 * @brief MC class ShiftedDurationAmplifier.
 *
 */
class ShiftedDurationAmplifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIFTEDDURATIONAMPLIFIER
public:
    class ShiftedDurationAmplifier& operator=(class ShiftedDurationAmplifier const &) = delete;
    ShiftedDurationAmplifier(class ShiftedDurationAmplifier const &) = delete;
    ShiftedDurationAmplifier() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1173924890
     */
    virtual ~ShiftedDurationAmplifier();
    /**
     * @vftbl  1
     * @hash   -162053903
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?shouldBuff@ShiftedDurationAmplifier@@UEBA_NHH@Z
     * @hash   -1070418462
     */
    virtual bool shouldBuff(int, int) const;
    /**
     * @vftbl  3
     * @symbol ?getTickInterval@ShiftedDurationAmplifier@@UEBAHH@Z
     * @hash   1424754950
     */
    virtual int getTickInterval(int) const;
    /**
     * @symbol ??0ShiftedDurationAmplifier@@QEAA@H@Z
     * @hash   -160531373
     */
    MCAPI ShiftedDurationAmplifier(int);

};