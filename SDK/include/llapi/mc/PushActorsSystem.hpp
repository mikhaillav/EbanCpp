/**
 * @file  PushActorsSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PushActorsSystem.
 *
 */
class PushActorsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHACTORSSYSTEM
public:
    class PushActorsSystem& operator=(class PushActorsSystem const &) = delete;
    PushActorsSystem(class PushActorsSystem const &) = delete;
    PushActorsSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@PushActorsSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1923287084
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?pushActors@PushActorsSystem@@SAXAEAVStrictEntityContext@@AEAVActorMovementProxyComponent@@@Z
     * @hash   -1261588869
     */
    MCAPI static void pushActors(class StrictEntityContext &, class ActorMovementProxyComponent &);

};