/**
 * @file  SimpleContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Container.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimpleContainer.
 *
 */
class SimpleContainer : public Container {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLECONTAINER
public:
    class SimpleContainer& operator=(class SimpleContainer const &) = delete;
    SimpleContainer(class SimpleContainer const &) = delete;
    SimpleContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1677937731
     */
    virtual ~SimpleContainer();
    /**
     * @vftbl  2
     * @symbol ?serverInitItemStackIds@SimpleContainer@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   -1005349544
     */
    virtual void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @vftbl  5
     * @symbol ?getItem@SimpleContainer@@UEBAAEBVItemStack@@H@Z
     * @hash   1385721059
     */
    virtual class ItemStack const & getItem(int) const;
    /**
     * @vftbl  9
     * @symbol ?setItem@SimpleContainer@@UEAAXHAEBVItemStack@@@Z
     * @hash   1298578210
     */
    virtual void setItem(int, class ItemStack const &);
    /**
     * @vftbl  14
     * @symbol ?getContainerSize@SimpleContainer@@UEBAHXZ
     * @hash   107598744
     */
    virtual int getContainerSize() const;
    /**
     * @vftbl  15
     * @symbol ?getMaxStackSize@SimpleContainer@@UEBAHXZ
     * @hash   -1716301897
     */
    virtual int getMaxStackSize() const;
    /**
     * @vftbl  16
     * @symbol ?startOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   -1820869905
     */
    virtual void startOpen(class Player &);
    /**
     * @vftbl  17
     * @symbol ?stopOpen@SimpleContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   2011601807
     */
    virtual void stopOpen(class Player &);
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
     * @symbol ??0SimpleContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHW4ContainerType@@@Z
     * @hash   1722420785
     */
    MCAPI SimpleContainer(std::string const &, bool, int, enum class ContainerType);

};