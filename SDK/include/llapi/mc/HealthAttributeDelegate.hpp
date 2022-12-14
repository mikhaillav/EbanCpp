/**
 * @file  HealthAttributeDelegate.hpp
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
 * @brief MC class HealthAttributeDelegate.
 *
 */
class HealthAttributeDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALTHATTRIBUTEDELEGATE
public:
    class HealthAttributeDelegate& operator=(class HealthAttributeDelegate const &) = delete;
    HealthAttributeDelegate(class HealthAttributeDelegate const &) = delete;
    HealthAttributeDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1972708627
     */
    virtual ~HealthAttributeDelegate();
    /**
     * @vftbl  1
     * @symbol ?tick@HealthAttributeDelegate@@UEAAXXZ
     * @hash   -182292289
     */
    virtual void tick();
    /**
     * @vftbl  2
     * @hash   -1404633630
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?willChange@HealthAttributeDelegate@@UEAA_NMMAEBVAttributeBuff@@@Z
     * @hash   930935332
     */
    virtual bool willChange(float, float, class AttributeBuff const &);
    /**
     * @vftbl  4
     * @symbol ?change@HealthAttributeDelegate@@UEAAMMMAEBVAttributeBuff@@@Z
     * @hash   980253136
     */
    virtual float change(float, float, class AttributeBuff const &);
    /**
     * @vftbl  5
     * @symbol ?getBuffValueWithModifiers@HealthAttributeDelegate@@UEBAMAEBVAttributeBuff@@@Z
     * @hash   -1023145455
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const &) const;
    /**
     * @symbol ??0HealthAttributeDelegate@@QEAA@AEBVAttributeInstance@@PEAVMob@@@Z
     * @hash   -708085940
     */
    MCAPI HealthAttributeDelegate(class AttributeInstance const &, class Mob *);

};