/**
 * @file  EnderChestContainer.hpp
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
 * @brief MC class EnderChestContainer.
 *
 */
class EnderChestContainer : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCHESTCONTAINER
public:
    class EnderChestContainer& operator=(class EnderChestContainer const &) = delete;
    EnderChestContainer(class EnderChestContainer const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -454387018
     */
    virtual ~EnderChestContainer();
    /**
     * @vftbl  16
     * @symbol ?startOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   472055720
     */
    virtual void startOpen(class Player &);
    /**
     * @vftbl  17
     * @symbol ?stopOpen@EnderChestContainer@@UEAAXAEAVPlayer@@@Z
     * @hash   -1986990952
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
     * @symbol ??0EnderChestContainer@@QEAA@XZ
     * @hash   -637832620
     */
    MCAPI EnderChestContainer();
    /**
     * @symbol ?ITEMS_SIZE@EnderChestContainer@@2HB
     * @hash   798027551
     */
    MCAPI static int const ITEMS_SIZE;

};