/**
 * @file  NpcSystem.hpp
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
 * @brief MC class NpcSystem.
 *
 */
class NpcSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSYSTEM
public:
    class NpcSystem& operator=(class NpcSystem const &) = delete;
    NpcSystem(class NpcSystem const &) = delete;
    NpcSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   9553470
     */
    virtual ~NpcSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@NpcSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1249251744
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol ?tickCountdown@NpcSystem@@SAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@ULeaveMenuCountdown@NpcComponents@@@@@Z
     * @hash   1298498165
     */
    MCAPI static void tickCountdown(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, struct NpcComponents::LeaveMenuCountdown> &);

};