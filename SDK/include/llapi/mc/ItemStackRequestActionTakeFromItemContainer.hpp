/**
 * @file  ItemStackRequestActionTakeFromItemContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionTakeFromItemContainer.
 *
 */
class ItemStackRequestActionTakeFromItemContainer : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTAKEFROMITEMCONTAINER
public:
    class ItemStackRequestActionTakeFromItemContainer& operator=(class ItemStackRequestActionTakeFromItemContainer const &) = delete;
    ItemStackRequestActionTakeFromItemContainer(class ItemStackRequestActionTakeFromItemContainer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1933673883
     */
    virtual ~ItemStackRequestActionTakeFromItemContainer();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   2096281682
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1367561133
     */
    virtual void __unk_vfn_3();
    /**
     * @symbol ??0ItemStackRequestActionTakeFromItemContainer@@QEAA@XZ
     * @hash   -842451575
     */
    MCAPI ItemStackRequestActionTakeFromItemContainer();

};