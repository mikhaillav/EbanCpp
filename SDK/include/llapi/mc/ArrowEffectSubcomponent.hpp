/**
 * @file  ArrowEffectSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "MobEffectSubcomponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArrowEffectSubcomponent.
 *
 */
class ArrowEffectSubcomponent : public MobEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROWEFFECTSUBCOMPONENT
public:
    class ArrowEffectSubcomponent& operator=(class ArrowEffectSubcomponent const &) = delete;
    ArrowEffectSubcomponent(class ArrowEffectSubcomponent const &) = delete;
    ArrowEffectSubcomponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2012151205
     */
    virtual ~ArrowEffectSubcomponent();
    /**
     * @vftbl  2
     * @symbol ?writetoJSON@ArrowEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
     * @hash   351983432
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl  3
     * @symbol ?doOnHitEffect@ArrowEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     * @hash   -1679244629
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol ?getName@ArrowEffectSubcomponent@@UEAAPEBDXZ
     * @hash   1239582358
     */
    virtual char const * getName();

};