/**
 * @file  HotbarContainerValidation.hpp
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
 * @brief MC class HotbarContainerValidation.
 *
 */
class HotbarContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOTBARCONTAINERVALIDATION
public:
    class HotbarContainerValidation& operator=(class HotbarContainerValidation const &) = delete;
    HotbarContainerValidation(class HotbarContainerValidation const &) = delete;
    HotbarContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -8947422
     */
    virtual ~HotbarContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   -1603009640
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @hash   -1361872974
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   -1478783749
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?isItemAllowedToRemove@HotbarContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     * @hash   657027746
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @vftbl  6
     * @hash   -1358178890
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   -601432785
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @hash   -1362943528
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@HotbarContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   -1477801620
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOTBARCONTAINERVALIDATION
    /**
     * @symbol ?canItemMoveToContainer@HotbarContainerValidation@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   -1745596645
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
#endif

};