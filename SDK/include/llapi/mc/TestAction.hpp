/**
 * @file  TestAction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TestAction.
 *
 */
class TestAction : public IRequestAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTACTION
public:
    class TestAction& operator=(class TestAction const &) = delete;
    TestAction(class TestAction const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -599321806
     */
    virtual ~TestAction();
    /**
     * @vftbl  1
     * @symbol ?execute@TestAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
     * @hash   -35921985
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @vftbl  3
     * @symbol ??8TestAction@@UEBA_NAEAVIRequestAction@@@Z
     * @hash   -1941042875
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @symbol ??0TestAction@@QEAA@XZ
     * @hash   1601996628
     */
    MCAPI TestAction();

};