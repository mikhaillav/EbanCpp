/**
 * @file  FullPlayerInventoryWrapper.hpp
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
 * @brief MC class FullPlayerInventoryWrapper.
 *
 */
class FullPlayerInventoryWrapper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FULLPLAYERINVENTORYWRAPPER
public:
    class FullPlayerInventoryWrapper& operator=(class FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper(class FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper() = delete;
#endif

public:
    /**
     * @symbol ??0FullPlayerInventoryWrapper@@QEAA@AEAVPlayerInventory@@AEAVSimpleContainer@@1PEAVInventoryTransactionManager@@PEAVPlayer@@@Z
     * @hash   -1551974397
     */
    MCAPI FullPlayerInventoryWrapper(class PlayerInventory &, class SimpleContainer &, class SimpleContainer &, class InventoryTransactionManager *, class Player *);
    /**
     * @symbol ?clearAllItems@FullPlayerInventoryWrapper@@QEAAHXZ
     * @hash   1548300552
     */
    MCAPI int clearAllItems();
    /**
     * @symbol ?getItemCount@FullPlayerInventoryWrapper@@QEAAHV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
     * @hash   -1312136171
     */
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol ?removeResource@FullPlayerInventoryWrapper@@QEAAHAEBVItemStack@@V?$function@$$A6A_NAEBVItemStack@@@Z@std@@_NH@Z
     * @hash   1126814436
     */
    MCAPI int removeResource(class ItemStack const &, class std::function<bool (class ItemStack const &)>, bool, int);

//private:
    /**
     * @symbol ?_clearSimpleContainerItem@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@W4ContainerID@@H@Z
     * @hash   -1149790496
     */
    MCAPI int _clearSimpleContainerItem(class SimpleContainer &, enum class ContainerID, int);
    /**
     * @symbol ?_getSimpleContainerItemCount@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@HV?$function@$$A6A_NAEBVItemStack@@@Z@std@@@Z
     * @hash   -296884341
     */
    MCAPI int _getSimpleContainerItemCount(class SimpleContainer &, int, class std::function<bool (class ItemStack const &)>);
    /**
     * @symbol ?_removeCursorItem@FullPlayerInventoryWrapper@@AEAAHAEBVItemStack@@_NH@Z
     * @hash   -827793479
     */
    MCAPI int _removeCursorItem(class ItemStack const &, bool, int);
    /**
     * @symbol ?_removeSimpleContainerItem@FullPlayerInventoryWrapper@@AEAAHAEAVSimpleContainer@@W4ContainerID@@HAEBVItemStack@@_NH@Z
     * @hash   1432128426
     */
    MCAPI int _removeSimpleContainerItem(class SimpleContainer &, enum class ContainerID, int, class ItemStack const &, bool, int);
    /**
     * @symbol ?_sendCursorSlotPacket@FullPlayerInventoryWrapper@@AEBAXXZ
     * @hash   1509531719
     */
    MCAPI void _sendCursorSlotPacket() const;

private:

};