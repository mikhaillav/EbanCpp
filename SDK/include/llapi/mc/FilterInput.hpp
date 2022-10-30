/**
 * @file  FilterInput.hpp
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
 * @brief MC class FilterInput.
 *
 */
class FilterInput {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERINPUT
public:
    FilterInput(class FilterInput const &) = delete;
    FilterInput() = delete;
#endif

public:
    /**
     * @symbol ??0FilterInput@@QEAA@H@Z
     * @hash   -2105573027
     */
    MCAPI FilterInput(int);
    /**
     * @symbol ??4FilterInput@@QEAAAEAV0@AEBV0@@Z
     * @hash   1764013340
     */
    MCAPI class FilterInput & operator=(class FilterInput const &);
    /**
     * @symbol ??4FilterInput@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1271279240
     */
    MCAPI class FilterInput & operator=(class FilterInput &&);
    /**
     * @symbol ??1FilterInput@@QEAA@XZ
     * @hash   -107159826
     */
    MCAPI ~FilterInput();

};