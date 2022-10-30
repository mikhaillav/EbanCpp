/**
 * @file  SplashPotionItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Potion.hpp"
#include "PotionItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SplashPotionItem.
 *
 */
class SplashPotionItem : public PotionItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONITEM
public:
    class SplashPotionItem& operator=(class SplashPotionItem const &) = delete;
    SplashPotionItem(class SplashPotionItem const &) = delete;
    SplashPotionItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1362961961
     */
    virtual ~SplashPotionItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  23
     * @symbol ?isThrowable@SplashPotionItem@@UEBA_NXZ
     * @hash   2062516913
     */
    virtual bool isThrowable() const;
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@SplashPotionItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1964167234
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -165686001
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  84
     * @symbol ?use@SplashPotionItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   172507601
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol ?dispense@SplashPotionItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -522937415
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@SplashPotionItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   13599453
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  117
     * @symbol ?setIconInfo@SplashPotionItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -231135843
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@SplashPotionItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -1490943404
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  133
     * @symbol ?getPotionType@SplashPotionItem@@UEBA?AW4PotionType@Potion@@XZ
     * @hash   -349343234
     */
    virtual enum class Potion::PotionType getPotionType() const;
    /**
     * @symbol ??0SplashPotionItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -2102999685
     */
    MCAPI SplashPotionItem(std::string const &, int);

};