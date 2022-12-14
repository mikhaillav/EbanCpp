/**
 * @file  Container.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class ItemStack;
#undef BEFORE_EXTRA

/**
 * @brief MC class Container.
 *
 */
class Container {

#define AFTER_EXTRA
// Add new members to class
public:
    LIAPI std::string getTypeName();

    LIAPI bool addItem_s(ItemStack* item);
    LIAPI bool addItem_s(ItemStack* item, int amount);
    LIAPI bool addItemToFirstEmptySlot_s(ItemStack* item);
    LIAPI bool removeItem_s(int slot, unsigned int number);
    LIAPI ItemStack* getSlot(int slot);
    LIAPI std::vector<const ItemStack*> getAllSlots();
    LIAPI int getSize();

    // static??
    LIAPI bool hasContainer(Vec3& pos, int dim);
    // static??
    LIAPI Container* getContainerAt(Vec3& pos, int dim);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINER
public:
    class Container& operator=(class Container const &) = delete;
    Container() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1781859791
     */
    virtual ~Container();
    /**
     * @vftbl  1
     * @symbol ?init@Container@@UEAAXXZ
     * @hash   500136886
     */
    virtual void init();
    /**
     * @vftbl  2
     * @symbol ?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   -1488520011
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>) = 0;
    /**
     * @vftbl  3
     * @symbol ?addContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
     * @hash   -574662606
     */
    virtual void addContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @vftbl  4
     * @symbol ?removeContentChangeListener@Container@@UEAAXPEAVContainerContentChangeListener@@@Z
     * @hash   -561855355
     */
    virtual void removeContentChangeListener(class ContainerContentChangeListener *);
    /**
     * @vftbl  5
     * @symbol ?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z
     * @hash   -947143408
     */
    virtual class ItemStack const & getItem(int) const = 0;
    /**
     * @vftbl  6
     * @symbol ?hasRoomForItem@Container@@UEAA_NAEBVItemStack@@@Z
     * @hash   -1948411659
     */
    virtual bool hasRoomForItem(class ItemStack const &);
    /**
     * @vftbl  7
     * @symbol ?addItem@Container@@UEAA_NAEAVItemStack@@@Z
     * @hash   -893765269
     */
    virtual bool addItem(class ItemStack &);
    /**
     * @vftbl  8
     * @symbol ?addItemToFirstEmptySlot@Container@@UEAA_NAEBVItemStack@@@Z
     * @hash   121181298
     */
    virtual bool addItemToFirstEmptySlot(class ItemStack const &);
    /**
     * @vftbl  9
     * @symbol ?setItem@SimplePlayerContainer@@UEAAXHAEBVItemStack@@@Z
     * @hash   1156931643
     */
    virtual void setItem(int, class ItemStack const &) = 0;
    /**
     * @vftbl  10
     * @symbol ?setItemWithForceBalance@Container@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1849159851
     */
    virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /**
     * @vftbl  11
     * @symbol ?removeItem@Container@@UEAAXHH@Z
     * @hash   381629021
     */
    virtual void removeItem(int, int);
    /**
     * @vftbl  12
     * @symbol ?removeAllItems@Container@@UEAAXXZ
     * @hash   -543201991
     */
    virtual void removeAllItems();
    /**
     * @vftbl  13
     * @symbol ?dropContents@Container@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     * @hash   1389625087
     */
    virtual void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @vftbl  14
     * @symbol ?getContainerSize@SimpleContainer@@UEBAHXZ
     * @hash   470228337
     */
    virtual int getContainerSize() const = 0;
    /**
     * @vftbl  15
     * @symbol ?getMaxStackSize@SimpleContainer@@UEBAHXZ
     * @hash   -970906752
     */
    virtual int getMaxStackSize() const = 0;
    /**
     * @vftbl  16
     * @symbol ?startOpen@FillingContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   368544188
     */
    virtual void startOpen(class Player &) = 0;
    /**
     * @vftbl  17
     * @symbol ?stopOpen@CraftingContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   -64267396
     */
    virtual void stopOpen(class Player &) = 0;
    /**
     * @vftbl  18
     * @symbol ?getSlotCopies@Container@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   920744057
     */
    virtual std::vector<class ItemStack> getSlotCopies() const;
    /**
     * @vftbl  19
     * @symbol ?getSlots@Container@@UEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     * @hash   753908276
     */
    virtual std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @vftbl  20
     * @symbol ?getItemCount@Container@@UEBAHAEBVItemStack@@@Z
     * @hash   -1085525582
     */
    virtual int getItemCount(class ItemStack const &) const;
    /**
     * @vftbl  21
     * @symbol ?findFirstSlotForItem@Container@@UEBAHAEBVItemStack@@@Z
     * @hash   1173013377
     */
    virtual int findFirstSlotForItem(class ItemStack const &) const;
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
     * @vftbl  24
     * @symbol ?setContainerChanged@Container@@UEAAXH@Z
     * @hash   -1712345612
     */
    virtual void setContainerChanged(int);
    /**
     * @vftbl  25
     * @symbol ?setContainerMoved@Container@@UEAAXXZ
     * @hash   1741641418
     */
    virtual void setContainerMoved();
    /**
     * @vftbl  26
     * @symbol ?setCustomName@Container@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1300507784
     */
    virtual void setCustomName(std::string const &);
    /**
     * @vftbl  27
     * @symbol ?hasCustomName@Container@@UEBA_NXZ
     * @hash   185356733
     */
    virtual bool hasCustomName() const;
    /**
     * @vftbl  28
     * @symbol ?readAdditionalSaveData@Container@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1869867760
     */
    virtual void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @vftbl  29
     * @symbol ?addAdditionalSaveData@Container@@UEAAXAEAVCompoundTag@@@Z
     * @hash   855291800
     */
    virtual void addAdditionalSaveData(class CompoundTag &);
    /**
     * @vftbl  30
     * @symbol ?createTransactionContext@Container@@UEAAXV?$function@$$A6AXAEAVContainer@@HAEBVItemStack@@1@Z@std@@V?$function@$$A6AXXZ@3@@Z
     * @hash   -1840424957
     */
    virtual void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
    /**
     * @vftbl  31
     * @symbol ?initializeContainerContents@Container@@UEAAXAEAVBlockSource@@@Z
     * @hash   -893601037
     */
    virtual void initializeContainerContents(class BlockSource &);
    /**
     * @vftbl  32
     * @symbol ?isEmpty@Container@@UEBA_NXZ
     * @hash   353926106
     */
    virtual bool isEmpty() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINER
    /**
     * @symbol ?canPullOutItem@Container@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     * @hash   -226805096
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @symbol ?canPushInItem@Container@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     * @hash   -100439154
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
#endif
    /**
     * @symbol ??0Container@@QEAA@W4ContainerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1225853608
     */
    MCAPI Container(enum class ContainerType, std::string const &, bool);
    /**
     * @symbol ??0Container@@QEAA@W4ContainerType@@@Z
     * @hash   -30656824
     */
    MCAPI Container(enum class ContainerType);
    /**
     * @symbol ??0Container@@QEAA@AEBV0@@Z
     * @hash   -1326930847
     */
    MCAPI Container(class Container const &);
    /**
     * @symbol ?getContainerType@Container@@QEBA?AW4ContainerType@@XZ
     * @hash   -499040884
     */
    MCAPI enum class ContainerType getContainerType() const;
    /**
     * @symbol ?getGameplayContainerType@Container@@QEBA?AW4ContainerType@@XZ
     * @hash   -1619078416
     */
    MCAPI enum class ContainerType getGameplayContainerType() const;
    /**
     * @symbol ?getItemCount@Container@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
     * @hash   -1027094141
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol ?getRedstoneSignalFromContainer@Container@@QEAAHAEAVBlockSource@@@Z
     * @hash   -1936792809
     */
    MCAPI int getRedstoneSignalFromContainer(class BlockSource &);
    /**
     * @symbol ?getRuntimeId@Container@@QEBAAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@XZ
     * @hash   528163713
     */
    MCAPI class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const & getRuntimeId() const;
    /**
     * @symbol ?initRuntimeId@Container@@QEAAXXZ
     * @hash   -873237765
     */
    MCAPI void initRuntimeId();
    /**
     * @symbol ?serverInitItemStackIdsAll@Container@@QEAAXV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   470345502
     */
    MCAPI void serverInitItemStackIdsAll(class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setGameplayContainerType@Container@@QEAAXW4ContainerType@@@Z
     * @hash   1685799756
     */
    MCAPI void setGameplayContainerType(enum class ContainerType);
    /**
     * @symbol ?triggerTransactionChange@Container@@QEAAXHAEBVItemStack@@0@Z
     * @hash   1987839305
     */
    MCAPI void triggerTransactionChange(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol ?getContainerTypeId@Container@@SA?AW4ContainerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   514710579
     */
    MCAPI static enum class ContainerType getContainerTypeId(std::string const &);
    /**
     * @symbol ?getContainerTypeName@Container@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainerType@@@Z
     * @hash   1956650813
     */
    MCAPI static std::string const & getContainerTypeName(enum class ContainerType);

//protected:
    /**
     * @symbol ?_initRuntimeId@Container@@IEAAXAEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@@Z
     * @hash   1352755865
     */
    MCAPI void _initRuntimeId(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @symbol ?_serverInitId@Container@@IEAAXHAEAVItemStack@@V?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   1329454103
     */
    MCAPI void _serverInitId(int, class ItemStack &, class std::function<void (int, class ItemStack const &)>);

protected:
    /**
     * @symbol ?containerTypeMap@Container@@1V?$BidirectionalUnorderedMap@W4ContainerType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@@B
     * @hash   1235487432
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ContainerType, std::string> const containerTypeMap;

};