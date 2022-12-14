/**
 * @file  FakeThermalMonitorInterface.hpp
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
 * @brief MC class FakeThermalMonitorInterface.
 *
 */
class FakeThermalMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKETHERMALMONITORINTERFACE
public:
    class FakeThermalMonitorInterface& operator=(class FakeThermalMonitorInterface const &) = delete;
    FakeThermalMonitorInterface(class FakeThermalMonitorInterface const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   622704751
     */
    virtual ~FakeThermalMonitorInterface();
    /**
     * @vftbl  1
     * @symbol ?getThermalState@FakeThermalMonitorInterface@@UEBA?AW4ThermalState@@XZ
     * @hash   1539172981
     */
    virtual enum class ThermalState getThermalState() const;
    /**
     * @vftbl  2
     * @symbol ?getThermalValueCelsius@FakeThermalMonitorInterface@@UEBAMXZ
     * @hash   -830154501
     */
    virtual float getThermalValueCelsius() const;
    /**
     * @vftbl  3
     * @symbol ?isLowBatteryModeEnabled@FakeThermalMonitorInterface@@UEBA_NXZ
     * @hash   -211036014
     */
    virtual bool isLowBatteryModeEnabled() const;
    /**
     * @symbol ??0FakeThermalMonitorInterface@@QEAA@XZ
     * @hash   -171416147
     */
    MCAPI FakeThermalMonitorInterface();

};