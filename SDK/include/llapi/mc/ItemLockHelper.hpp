/**
 * @file  ItemLockHelper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemLockHelper.
 *
 */
class ItemLockHelper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMLOCKHELPER
public:
    class ItemLockHelper& operator=(class ItemLockHelper const &) = delete;
    ItemLockHelper(class ItemLockHelper const &) = delete;
    ItemLockHelper() = delete;
#endif

public:
    /**
     * @symbol ?addItemLockMode@ItemLockHelper@@SA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
     * @hash   276536984
     */
    MCAPI static bool addItemLockMode(class ItemStackBase &, class Json::Value const &);
    /**
     * @symbol ?addKeepOnDeath@ItemLockHelper@@SA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
     * @hash   -1495513510
     */
    MCAPI static bool addKeepOnDeath(class ItemStackBase &, class Json::Value const &);
    /**
     * @symbol ?canMoveItemSlots@ItemLockHelper@@SA_NAEBVActor@@AEBVItemStackBase@@@Z
     * @hash   -288852120
     */
    MCAPI static bool canMoveItemSlots(class Actor const &, class ItemStackBase const &);
    /**
     * @symbol ?getItemLockMode@ItemLockHelper@@SA?AW4ItemLockMode@@AEBVItemStackBase@@@Z
     * @hash   -631321209
     */
    MCAPI static enum class ItemLockMode getItemLockMode(class ItemStackBase const &);
    /**
     * @symbol ?isItemLocked@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
     * @hash   2020598463
     */
    MCAPI static bool isItemLocked(class ItemStackBase const &);
    /**
     * @symbol ?isItemLockedInSlot@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
     * @hash   1903025369
     */
    MCAPI static bool isItemLockedInSlot(class ItemStackBase const &);
    /**
     * @symbol ?shouldKeepOnDeath@ItemLockHelper@@SA_NAEBVActor@@AEBVItemStackBase@@@Z
     * @hash   1331319346
     */
    MCAPI static bool shouldKeepOnDeath(class Actor const &, class ItemStackBase const &);
    /**
     * @symbol ?shouldKeepOnDeath@ItemLockHelper@@SA_NAEBVItemStackBase@@@Z
     * @hash   -854371855
     */
    MCAPI static bool shouldKeepOnDeath(class ItemStackBase const &);

//private:
    /**
     * @symbol ?_parseItemLockMode@ItemLockHelper@@CA_NAEAVItemStackBase@@AEBVValue@Json@@@Z
     * @hash   721871837
     */
    MCAPI static bool _parseItemLockMode(class ItemStackBase &, class Json::Value const &);

private:

};