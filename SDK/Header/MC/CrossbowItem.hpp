// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    /*0*/ virtual ~CrossbowItem();
    /*6*/ virtual int getMaxUseDuration(class ItemStack const *) const;
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*63*/ virtual int getEnchantSlot() const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*85*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*87*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*88*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*114*/ virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /*120*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*123*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*125*/ virtual class Item & setIcon(std::string const &, int);
    /*128*/ virtual bool canBeCharged() const;
    /*130*/ virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CROSSBOWITEM
#endif
    MCAPI CrossbowItem(std::string const &, int);

//private:
    MCAPI class Vec3 _getShootDir(class Player const &, float) const;
    MCAPI void _shootArrow(class ItemInstance const &, class ItemInstance const &, class Player &) const;
    MCAPI void _shootFirework(class ItemInstance const &, class Player &) const;


private:
    MCAPI static int const DEFAULT_USE_DURATION;


};