/**
 * @file  Inventory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Inventory.
 *
 */
class Inventory : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORY
public:
    class Inventory& operator=(class Inventory const &) = delete;
    Inventory(class Inventory const &) = delete;
    Inventory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1710494422
     */
    virtual ~Inventory();
    /**
     * @vftbl  1
     * @symbol ?init@Inventory@@UEAAXXZ
     * @hash   -996884197
     */
    virtual void init();
    /**
     * @vftbl  9
     * @symbol ?setItem@Inventory@@UEAAXHAEBVItemStack@@@Z
     * @hash   546696645
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl  10
     * @symbol ?setItemWithForceBalance@Inventory@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   1560699728
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vftbl  22
     * @hash   -308831756
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @hash   -307908235
     */
    virtual void __unk_vfn_23();
    /**
     * @vftbl  33
     * @symbol ?add@Inventory@@UEAA_NAEAVItemStack@@@Z
     * @hash   2027218329
     */
    virtual bool add(class ItemStack &);
    /**
     * @vftbl  34
     * @symbol ?canAdd@Inventory@@UEBA_NAEBVItemStack@@@Z
     * @hash   1944978965
     */
    virtual bool canAdd(class ItemStack const &) const;
    /**
     * @vftbl  38
     * @symbol ?getEmptySlotsCount@Inventory@@UEBAHXZ
     * @hash   1861110080
     */
    virtual int getEmptySlotsCount() const;
    /**
     * @vftbl  39
     * @symbol ?getFirstEmptySlot@Inventory@@UEBAHXZ
     * @hash   -1991507088
     */
    virtual int getFirstEmptySlot() const;
    /**
     * @vftbl  40
     * @symbol ?setContainerSize@Inventory@@UEAAXH@Z
     * @hash   -2010998652
     */
    virtual void setContainerSize(int);
    /**
     * @symbol ??0Inventory@@QEAA@PEAVPlayer@@@Z
     * @hash   1775190632
     */
    MCAPI Inventory(class Player *);
    /**
     * @symbol ?dropSlot@Inventory@@QEAAXH_N00@Z
     * @hash   391082507
     */
    MCAPI void dropSlot(int, bool, bool, bool);
    /**
     * @symbol ?getComplexItems@Inventory@@QEAA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   1685028244
     */
    MCAPI std::vector<class ItemStack> getComplexItems();
    /**
     * @symbol ?setupDefault@Inventory@@QEAAXXZ
     * @hash   756233739
     */
    MCAPI void setupDefault();
    /**
     * @symbol ?tick@Inventory@@QEAAXH@Z
     * @hash   742632030
     */
    MCAPI void tick(int);

};