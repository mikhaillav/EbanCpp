/**
 * @file  BlockIsNameTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockIsNameTest.
 *
 */
class BlockIsNameTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKISNAMETEST
public:
    class BlockIsNameTest& operator=(class BlockIsNameTest const &) = delete;
    BlockIsNameTest(class BlockIsNameTest const &) = delete;
    BlockIsNameTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -457402430
     */
    virtual ~BlockIsNameTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@BlockIsNameTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -394910234
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@BlockIsNameTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1395726124
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};