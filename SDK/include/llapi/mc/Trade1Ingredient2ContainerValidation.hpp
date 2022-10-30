/**
 * @file  Trade1Ingredient2ContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class Trade1Ingredient2ContainerValidation.
 *
 */
class Trade1Ingredient2ContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE1INGREDIENT2CONTAINERVALIDATION
public:
    class Trade1Ingredient2ContainerValidation& operator=(class Trade1Ingredient2ContainerValidation const &) = delete;
    Trade1Ingredient2ContainerValidation(class Trade1Ingredient2ContainerValidation const &) = delete;
    Trade1Ingredient2ContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1565015440
     */
    virtual ~Trade1Ingredient2ContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   1624485066
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@Trade1Ingredient2ContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   -1102427668
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   287896969
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1359102411
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   -238785139
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   979577569
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol ?getContainerOffset@Trade1Ingredient2ContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   1804229898
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   -492675382
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /**
     * @symbol ??0Trade1Ingredient2ContainerValidation@@QEAA@_N@Z
     * @hash   804165819
     */
    MCAPI Trade1Ingredient2ContainerValidation(bool);

};