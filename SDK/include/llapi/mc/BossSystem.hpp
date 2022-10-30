/**
 * @file  BossSystem.hpp
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
 * @brief MC class BossSystem.
 *
 */
class BossSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSSYSTEM
public:
    class BossSystem& operator=(class BossSystem const &) = delete;
    BossSystem(class BossSystem const &) = delete;
    BossSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1859699654
     */
    virtual ~BossSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@BossSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -149968740
     */
    virtual void tick(class EntityRegistry &);

};