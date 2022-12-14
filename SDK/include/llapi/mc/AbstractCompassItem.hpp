/**
 * @file  AbstractCompassItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AbstractCompassItem.
 *
 */
class AbstractCompassItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABSTRACTCOMPASSITEM
public:
    class AbstractCompassItem& operator=(class AbstractCompassItem const &) = delete;
    AbstractCompassItem(class AbstractCompassItem const &) = delete;
    AbstractCompassItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2067728273
     */
    virtual ~AbstractCompassItem();
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
     * @vftbl  62
     * @symbol ?getEnchantSlot@AbstractCompassItem@@UEBAHXZ
     * @hash   -697243911
     */
    virtual int getEnchantSlot() const;
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
     * @hash   -158474657
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
     * @vftbl  118
     * @symbol ?getIconInfo@AbstractCompassItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -1239588166
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  120
     * @symbol ?getAnimationFrameFor@AbstractCompassItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     * @hash   -1712219614
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @symbol ??0AbstractCompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6A?AVCompassSpriteCalculator@@PEAVMob@@@Z@2@@Z
     * @hash   -1932783651
     */
    MCAPI AbstractCompassItem(std::string const &, int, class std::function<class CompassSpriteCalculator (class Mob *)>);

};