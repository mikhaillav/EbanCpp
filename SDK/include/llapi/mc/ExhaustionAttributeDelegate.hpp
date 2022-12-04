/**
 * @file  ExhaustionAttributeDelegate.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeInstanceDelegate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExhaustionAttributeDelegate.
 *
 */
class ExhaustionAttributeDelegate : public AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXHAUSTIONATTRIBUTEDELEGATE
public:
    class ExhaustionAttributeDelegate& operator=(class ExhaustionAttributeDelegate const &) = delete;
    ExhaustionAttributeDelegate(class ExhaustionAttributeDelegate const &) = delete;
    ExhaustionAttributeDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1364727535
     */
    virtual ~ExhaustionAttributeDelegate();
    /**
     * @vftbl  1
     * @symbol ?tick@ExhaustionAttributeDelegate@@UEAAXXZ
     * @hash   776350065
     */
    virtual void tick();
    /**
     * @symbol ??0ExhaustionAttributeDelegate@@QEAA@AEBVAttributeInstance@@@Z
     * @hash   1043433684
     */
    MCAPI ExhaustionAttributeDelegate(class AttributeInstance const &);

};