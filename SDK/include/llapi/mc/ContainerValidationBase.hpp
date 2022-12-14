/**
 * @file  ContainerValidationBase.hpp
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
 * @brief MC class ContainerValidationBase.
 *
 */
class ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONBASE
public:
    class ContainerValidationBase& operator=(class ContainerValidationBase const &) = delete;
    ContainerValidationBase(class ContainerValidationBase const &) = delete;
    ContainerValidationBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERVALIDATIONBASE
    /**
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   341343334
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   -877019374
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   1977472164
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @symbol ?getContainerOffset@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   -335905569
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @symbol ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   1196899813
     */
    MCVAPI int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /**
     * @symbol ?isItemAllowedInSlot@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   -377247737
     */
    MCVAPI bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @symbol ?isItemAllowedToAdd@ContainerValidationBase@@UEBA_NAEBVItemStack@@@Z
     * @hash   1041602426
     */
    MCVAPI bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @symbol ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     * @hash   -754152917
     */
    MCVAPI bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   -1833258737
     */
    MCVAPI bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
#endif

};