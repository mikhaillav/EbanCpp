/**
 * @file  SpinAttackSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SpinAttackSystem.
 *
 */
class SpinAttackSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPINATTACKSYSTEM
public:
    class SpinAttackSystem& operator=(class SpinAttackSystem const &) = delete;
    SpinAttackSystem(class SpinAttackSystem const &) = delete;
    SpinAttackSystem() = delete;
#endif

public:
    /**
     * @symbol ?_spinAttack@SpinAttackSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     * @hash   499677409
     */
    MCAPI static void _spinAttack(class StrictEntityContext &, class ActorOwnerComponent &);
    /**
     * @symbol ?createSystem@SpinAttackSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -2042773936
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};