/**
 * @file  IntRange.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure IntRange.
 *
 */
struct IntRange {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTRANGE
public:
    struct IntRange& operator=(struct IntRange const &) = delete;
    IntRange(struct IntRange const &) = delete;
    IntRange() = delete;
#endif

public:
    /**
     * @symbol ??0IntRange@@QEAA@H@Z
     * @hash   -1061757583
     */
    MCAPI IntRange(int);
    /**
     * @symbol ??0IntRange@@QEAA@HH@Z
     * @hash   1214389474
     */
    MCAPI IntRange(int, int);
    /**
     * @symbol ?getValue@IntRange@@QEBAHAEAVRandom@@@Z
     * @hash   -1923240267
     */
    MCAPI int getValue(class Random &) const;
    /**
     * @symbol ?getValueInclusive@IntRange@@QEBAHAEAVRandom@@@Z
     * @hash   2056588279
     */
    MCAPI int getValueInclusive(class Random &) const;
    /**
     * @symbol ?isInRangeInclusive@IntRange@@QEBA_NH@Z
     * @hash   841177467
     */
    MCAPI bool isInRangeInclusive(int) const;
    /**
     * @symbol ?parseJson@IntRange@@QEAA_NVValue@Json@@HH@Z
     * @hash   -1245720809
     */
    MCAPI bool parseJson(class Json::Value, int, int);
    /**
     * @symbol ?ZERO@IntRange@@2U1@B
     * @hash   -1975238360
     */
    MCAPI static struct IntRange const ZERO;

};