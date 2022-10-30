/**
 * @file  PlayerEventCoordinator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MinecraftEventing.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerEventCoordinator.
 *
 */
class PlayerEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYEREVENTCOORDINATOR
public:
    class PlayerEventCoordinator& operator=(class PlayerEventCoordinator const &) = delete;
    PlayerEventCoordinator(class PlayerEventCoordinator const &) = delete;
    PlayerEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?registerPlayerGameplayHandler@PlayerEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VPlayerGameplayHandler@@U?$default_delete@VPlayerGameplayHandler@@@std@@@std@@@Z
     * @hash   894944842
     */
    MCAPI void registerPlayerGameplayHandler(std::unique_ptr<class PlayerGameplayHandler> &&);
    /**
     * @symbol ?sendEvent@PlayerEventCoordinator@@QEAA?AW4CoordinatorResult@@AEBV?$EventRef@U?$PlayerGameplayEvent@W4CoordinatorResult@@@@@@@Z
     * @hash   -2009385301
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct PlayerGameplayEvent<enum class CoordinatorResult>> const &);
    /**
     * @symbol ?sendEvent@PlayerEventCoordinator@@QEAAXAEBV?$EventRef@U?$PlayerGameplayEvent@X@@@@@Z
     * @hash   -1846323318
     */
    MCAPI void sendEvent(class EventRef<struct PlayerGameplayEvent<void>> const &);
    /**
     * @symbol ?sendPlayerAwardAchievement@PlayerEventCoordinator@@QEAAXAEAVPlayer@@W4AchievementIds@MinecraftEventing@@@Z
     * @hash   204034857
     */
    MCAPI void sendPlayerAwardAchievement(class Player &, enum class MinecraftEventing::AchievementIds);
    /**
     * @symbol ?sendPlayerCaravanChanged@PlayerEventCoordinator@@QEAAXAEBVActor@@H@Z
     * @hash   1206601197
     */
    MCAPI void sendPlayerCaravanChanged(class Actor const &, int);
    /**
     * @symbol ?sendPlayerDestroyedBlock@PlayerEventCoordinator@@QEAAXAEAVPlayer@@HHH@Z
     * @hash   -142819899
     */
    MCAPI void sendPlayerDestroyedBlock(class Player &, int, int, int);
    /**
     * @symbol ?sendPlayerItemEquipped@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@H@Z
     * @hash   -1285131478
     */
    MCAPI void sendPlayerItemEquipped(class Player &, class ItemInstance const &, int);
    /**
     * @symbol ?sendPlayerItemPlaceInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
     * @hash   670402441
     */
    MCAPI void sendPlayerItemPlaceInteraction(class Player &, class ItemInstance const &);
    /**
     * @symbol ?sendPlayerItemUseInteraction@PlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVItemInstance@@@Z
     * @hash   1495915529
     */
    MCAPI void sendPlayerItemUseInteraction(class Player &, class ItemInstance const &);
    /**
     * @symbol ?sendPlayerMove@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     * @hash   -144044396
     */
    MCAPI void sendPlayerMove(class Player &);
    /**
     * @symbol ?sendPlayerSlide@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     * @hash   -1243772858
     */
    MCAPI void sendPlayerSlide(class Player &);
    /**
     * @symbol ?sendPlayerTeleported@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     * @hash   59535746
     */
    MCAPI void sendPlayerTeleported(class Player &);
    /**
     * @symbol ?sendPlayerTick@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
     * @hash   -169166196
     */
    MCAPI void sendPlayerTick(class Player &);

};