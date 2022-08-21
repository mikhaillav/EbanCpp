// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WritableBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITABLEBOOKITEM
public:
    class WritableBookItem& operator=(class WritableBookItem const &) = delete;
    WritableBookItem(class WritableBookItem const &) = delete;
    WritableBookItem() = delete;
#endif


public:
    /*0*/ virtual ~WritableBookItem();
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
    /*119*/ virtual std::string getInteractText(class Player const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WRITABLEBOOKITEM
#endif
    MCAPI WritableBookItem(std::string const &, int);
    MCAPI static void addPageAt(class ItemStack &, int, struct PageContent const &);
    MCAPI static struct PageContent deletePage(class ItemStack &, int);
    MCAPI static void replacePage(class ItemStack &, int, struct PageContent const &);
    MCAPI static void signBook(class ItemStack &, std::string, std::string, std::string);
    MCAPI static void swapPages(class ItemStack &, int, int);



};