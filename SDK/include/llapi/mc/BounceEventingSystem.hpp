/**
 * @file  BounceEventingSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BounceEventingSystem.
 *
 */
class BounceEventingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNCEEVENTINGSYSTEM
public:
    class BounceEventingSystem& operator=(class BounceEventingSystem const &) = delete;
    BounceEventingSystem(class BounceEventingSystem const &) = delete;
    BounceEventingSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@BounceEventingSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   967042484
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doBounceEventingSystem@BounceEventingSystem@@CAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEBUActorUniqueIDComponent@@AEBUEventingDispatcherComponent@@AEAUBounceComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@UEventingRequestQueueComponent@@@@@Z
     * @hash   -1830225929
     */
    MCAPI static void _doBounceEventingSystem(class StrictEntityContext const &, struct StateVectorComponent const &, struct ActorUniqueIDComponent const &, struct EventingDispatcherComponent const &, struct BounceComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>);

private:

};