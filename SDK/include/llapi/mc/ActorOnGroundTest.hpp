/**
 * @file  ActorOnGroundTest.hpp
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
 * @brief MC class ActorOnGroundTest.
 *
 */
class ActorOnGroundTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORONGROUNDTEST
public:
    class ActorOnGroundTest& operator=(class ActorOnGroundTest const &) = delete;
    ActorOnGroundTest(class ActorOnGroundTest const &) = delete;
    ActorOnGroundTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   100998619
     */
    virtual ~ActorOnGroundTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorOnGroundTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   1539565151
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorOnGroundTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -768920493
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};