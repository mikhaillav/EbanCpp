/**
 * @file  FakeBatteryMonitorInterface.hpp
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
 * @brief MC class FakeBatteryMonitorInterface.
 *
 */
class FakeBatteryMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKEBATTERYMONITORINTERFACE
public:
    class FakeBatteryMonitorInterface& operator=(class FakeBatteryMonitorInterface const &) = delete;
    FakeBatteryMonitorInterface(class FakeBatteryMonitorInterface const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   141162469
     */
    virtual ~FakeBatteryMonitorInterface();
    /**
     * @vftbl  1
     * @symbol ?getBatteryStatus@FakeBatteryMonitorInterface@@UEBA?AW4BatteryStatus@@XZ
     * @hash   -32858743
     */
    virtual enum class BatteryStatus getBatteryStatus() const;
    /**
     * @vftbl  2
     * @symbol ?getBatteryLevel@FakeBatteryMonitorInterface@@UEBAMXZ
     * @hash   206444484
     */
    virtual float getBatteryLevel() const;
    /**
     * @symbol ??0FakeBatteryMonitorInterface@@QEAA@XZ
     * @hash   -1538249917
     */
    MCAPI FakeBatteryMonitorInterface();

};