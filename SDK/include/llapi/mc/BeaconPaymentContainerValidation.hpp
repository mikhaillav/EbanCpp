/**
 * @file  BeaconPaymentContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeaconPaymentContainerValidation.
 *
 */
class BeaconPaymentContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONPAYMENTCONTAINERVALIDATION
public:
    class BeaconPaymentContainerValidation& operator=(class BeaconPaymentContainerValidation const &) = delete;
    BeaconPaymentContainerValidation(class BeaconPaymentContainerValidation const &) = delete;
    BeaconPaymentContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1996041566
     */
    virtual ~BeaconPaymentContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   -1769473572
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@BeaconPaymentContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   -700456278
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @hash   -1152650781
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isItemAllowedToAdd@BeaconPaymentContainerValidation@@UEBA_NAEBVItemStack@@@Z
     * @hash   1292632503
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @vftbl  5
     * @hash   -1359102411
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   267179807
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @hash   -1357255369
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol ?getContainerOffset@BeaconPaymentContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   -1883462596
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEACONPAYMENTCONTAINERVALIDATION
    /**
     * @symbol ?canDestroy@BeaconPaymentContainerValidation@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   -1310676861
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @symbol ?getAvailableSetCount@BeaconPaymentContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   1751581511
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const &) const;
#endif

};