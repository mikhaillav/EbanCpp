/**
 * @file  InstantDespawnComponent.hpp
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
 * @brief MC class InstantDespawnComponent.
 *
 */
class InstantDespawnComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTDESPAWNCOMPONENT
public:
    class InstantDespawnComponent& operator=(class InstantDespawnComponent const &) = delete;
    InstantDespawnComponent(class InstantDespawnComponent const &) = delete;
    InstantDespawnComponent() = delete;
#endif

public:
    /**
     * @symbol ?onDespawn@InstantDespawnComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1198802348
     */
    MCAPI void onDespawn(class Actor &);
    /**
     * @symbol ?tick@InstantDespawnComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1955557374
     */
    MCAPI void tick(class Actor &);

};