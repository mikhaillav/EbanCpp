// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EmptyMapItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMPTYMAPITEM
public:
    class EmptyMapItem& operator=(class EmptyMapItem const &) = delete;
    EmptyMapItem(class EmptyMapItem const &) = delete;
    EmptyMapItem() = delete;
#endif


public:
    /*0*/ virtual ~EmptyMapItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*60*/ virtual bool requiresInteract() const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*85*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*96*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*119*/ virtual std::string getInteractText(class Player const &) const;
    /*137*/ virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EMPTYMAPITEM
#endif
    MCAPI EmptyMapItem(std::string const &, short);
    MCAPI static void addPlayerMarker(class ItemStack &);
    MCAPI static void addPlayerMarker(class ItemInstance &);
    MCAPI static bool isLocatorMap(class ItemStack const &);



};