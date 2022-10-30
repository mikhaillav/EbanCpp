/**
 * @file  FlockingComponent.hpp
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
 * @brief MC class FlockingComponent.
 *
 */
class FlockingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOCKINGCOMPONENT
public:
    class FlockingComponent& operator=(class FlockingComponent const &) = delete;
    FlockingComponent(class FlockingComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0FlockingComponent@@QEAA@XZ
     * @hash   1723061592
     */
    MCAPI FlockingComponent();
    /**
     * @symbol ??0FlockingComponent@@QEAA@$$QEAV0@@Z
     * @hash   -1319873999
     */
    MCAPI FlockingComponent(class FlockingComponent &&);
    /**
     * @symbol ?addFlockMember@FlockingComponent@@QEAAXUActorUniqueID@@@Z
     * @hash   1729699624
     */
    MCAPI void addFlockMember(struct ActorUniqueID);
    /**
     * @symbol ?breakFlock@FlockingComponent@@QEAAXAEBVActor@@@Z
     * @hash   1858415652
     */
    MCAPI void breakFlock(class Actor const &);
    /**
     * @symbol ?calculateFlockVector@FlockingComponent@@QEAAXAEBVActor@@@Z
     * @hash   301947804
     */
    MCAPI void calculateFlockVector(class Actor const &);
    /**
     * @symbol ?calculateGoalHeading@FlockingComponent@@QEAAXAEAVMob@@@Z
     * @hash   -194804428
     */
    MCAPI void calculateGoalHeading(class Mob &);
    /**
     * @symbol ?canJoinFlock@FlockingComponent@@QEBA_NAEAVActor@@@Z
     * @hash   -1817930315
     */
    MCAPI bool canJoinFlock(class Actor &) const;
    /**
     * @symbol ?joinFlock@FlockingComponent@@QEAAXAEAVActor@@@Z
     * @hash   718543836
     */
    MCAPI void joinFlock(class Actor &);
    /**
     * @symbol ?manageNeighborhood@FlockingComponent@@QEAAXAEAVActor@@@Z
     * @hash   1139298566
     */
    MCAPI void manageNeighborhood(class Actor &);
    /**
     * @symbol ?mergeNeighborhoods@FlockingComponent@@QEAAXAEAVActor@@@Z
     * @hash   -501404910
     */
    MCAPI void mergeNeighborhoods(class Actor &);
    /**
     * @symbol ??4FlockingComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -598855252
     */
    MCAPI class FlockingComponent & operator=(class FlockingComponent &&);
    /**
     * @symbol ?updateNeighborhoodData@FlockingComponent@@QEAAXAEBVActor@@@Z
     * @hash   1481251078
     */
    MCAPI void updateNeighborhoodData(class Actor const &);
    /**
     * @symbol ?validateVariantEntityTypes@FlockingComponent@@QEBA_NAEBVActor@@0@Z
     * @hash   -1501706291
     */
    MCAPI bool validateVariantEntityTypes(class Actor const &, class Actor const &) const;

};