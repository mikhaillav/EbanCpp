/**
 * @file  AtomicTimeAccumulator.hpp
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
 * @brief MC class AtomicTimeAccumulator.
 *
 */
class AtomicTimeAccumulator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATOMICTIMEACCUMULATOR
public:
    class AtomicTimeAccumulator& operator=(class AtomicTimeAccumulator const &) = delete;
    AtomicTimeAccumulator(class AtomicTimeAccumulator const &) = delete;
#endif

public:
    /**
     * @symbol ??0AtomicTimeAccumulator@@QEAA@XZ
     * @hash   574416810
     */
    MCAPI AtomicTimeAccumulator();
    /**
     * @symbol ?addTime@AtomicTimeAccumulator@@QEAAXAEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
     * @hash   909971707
     */
    MCAPI void addTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &);
    /**
     * @symbol ?reset@AtomicTimeAccumulator@@QEAAXXZ
     * @hash   584153411
     */
    MCAPI void reset();

};