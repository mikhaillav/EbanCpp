/**
 * @file  OfferFlowerGoal.hpp
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
 * @brief MC class OfferFlowerGoal.
 *
 */
class OfferFlowerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFERFLOWERGOAL
public:
    class OfferFlowerGoal& operator=(class OfferFlowerGoal const &) = delete;
    OfferFlowerGoal(class OfferFlowerGoal const &) = delete;
    OfferFlowerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1276602072
     */
    virtual ~OfferFlowerGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@OfferFlowerGoal@@UEAA_NXZ
     * @hash   1567811558
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@OfferFlowerGoal@@UEAA_NXZ
     * @hash   -1986309228
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@OfferFlowerGoal@@UEAAXXZ
     * @hash   2061255935
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@OfferFlowerGoal@@UEAAXXZ
     * @hash   -1344421633
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@OfferFlowerGoal@@UEAAXXZ
     * @hash   -1505720806
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@OfferFlowerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   79008122
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0OfferFlowerGoal@@QEAA@AEAVIronGolem@@@Z
     * @hash   -979755141
     */
    MCAPI OfferFlowerGoal(class IronGolem &);

};