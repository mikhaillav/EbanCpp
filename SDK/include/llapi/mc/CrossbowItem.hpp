/**
 * @file  CrossbowItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrossbowItem.
 *
 */
class CrossbowItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CROSSBOWITEM
public:
    class CrossbowItem& operator=(class CrossbowItem const &) = delete;
    CrossbowItem(class CrossbowItem const &) = delete;
    CrossbowItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   79622023
     */
    virtual ~CrossbowItem();
    /**
     * @vftbl  6
     * @symbol ?getMaxUseDuration@CrossbowItem@@UEBAHPEBVItemStack@@@Z
     * @hash   1612880419
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
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
     * @symbol ?getEnchantSlot@CrossbowItem@@UEBAHXZ
     * @hash   62905167
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
     * @vftbl  84
     * @symbol ?use@CrossbowItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   -1324119375
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  86
     * @symbol ?useTimeDepleted@CrossbowItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   -1191569123
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  87
     * @symbol ?releaseUsing@CrossbowItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     * @hash   -261617777
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl  112
     * @symbol ?enchantProjectile@CrossbowItem@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
     * @hash   -1411158801
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @vftbl  117
     * @symbol ?setIconInfo@CrossbowItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -76727683
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@CrossbowItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -358874604
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  120
     * @symbol ?getAnimationFrameFor@CrossbowItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     * @hash   -1073221448
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @vftbl  124
     * @symbol ?canBeCharged@CrossbowItem@@UEBA_NXZ
     * @hash   1264886056
     */
    virtual bool canBeCharged() const;
    /**
     * @vftbl  126
     * @symbol ?playSoundIncrementally@CrossbowItem@@UEBAXAEBVItemStack@@AEAVMob@@@Z
     * @hash   -1965852963
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @symbol ??0CrossbowItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1093231845
     */
    MCAPI CrossbowItem(std::string const &, int);

//private:
    /**
     * @symbol ?_getShootDir@CrossbowItem@@AEBA?AVVec3@@AEBVPlayer@@M@Z
     * @hash   474797671
     */
    MCAPI class Vec3 _getShootDir(class Player const &, float) const;
    /**
     * @symbol ?_shootArrow@CrossbowItem@@AEBAXAEBVItemInstance@@0AEAVPlayer@@@Z
     * @hash   613920114
     */
    MCAPI void _shootArrow(class ItemInstance const &, class ItemInstance const &, class Player &) const;
    /**
     * @symbol ?_shootFirework@CrossbowItem@@AEBAXAEBVItemInstance@@AEAVPlayer@@@Z
     * @hash   931593103
     */
    MCAPI void _shootFirework(class ItemInstance const &, class Player &) const;

private:
    /**
     * @symbol ?DEFAULT_USE_DURATION@CrossbowItem@@0HB
     * @hash   85991729
     */
    MCAPI static int const DEFAULT_USE_DURATION;

};