/**
 * @file  Hopper.hpp
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
 * @brief MC class Hopper.
 *
 */
class Hopper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPER
public:
    class Hopper& operator=(class Hopper const &) = delete;
    Hopper(class Hopper const &) = delete;
    Hopper() = delete;
#endif

public:
    /**
     * @symbol ??0Hopper@@QEAA@H_N@Z
     * @hash   996519846
     */
    MCAPI Hopper(int, bool);
    /**
     * @symbol ?getCooldownTime@Hopper@@QEBAHXZ
     * @hash   205250598
     */
    MCAPI int getCooldownTime() const;
    /**
     * @symbol ?isOnCooldown@Hopper@@QEBA_NXZ
     * @hash   -1319337634
     */
    MCAPI bool isOnCooldown() const;
    /**
     * @symbol ?setCooldownTime@Hopper@@QEAAXH@Z
     * @hash   -2078118696
     */
    MCAPI void setCooldownTime(int);

//protected:
    /**
     * @symbol ?_addItem@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEAVItemStack@@HH@Z
     * @hash   -1018822526
     */
    MCAPI bool _addItem(class BlockSource &, class Container &, class ItemStack &, int, int);
    /**
     * @symbol ?_addItem@Hopper@@IEAA_NAEAVContainer@@AEAVItemActor@@@Z
     * @hash   768465149
     */
    MCAPI bool _addItem(class Container &, class ItemActor &);
    /**
     * @symbol ?_getAttachedContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@H@Z
     * @hash   -1625732949
     */
    MCAPI class Container * _getAttachedContainerInBlock(class BlockSource &, class Vec3 const &, int);
    /**
     * @symbol ?_getAttachedContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@H@Z
     * @hash   1185568716
     */
    MCAPI std::vector<class Container *> _getAttachedContainers(class BlockSource &, class Vec3 const &, int);
    /**
     * @symbol ?_getContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   -432599360
     */
    MCAPI class Container * _getContainerInBlock(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_getContainersAt@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   -701631662
     */
    MCAPI std::vector<class Container *> _getContainersAt(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_getItemAt@Hopper@@IEAAPEAVItemActor@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   -92115346
     */
    MCAPI class ItemActor * _getItemAt(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_getSourceContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   2067958618
     */
    MCAPI std::vector<class Container *> _getSourceContainers(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?_isEmptyContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
     * @hash   -874270838
     */
    MCAPI bool _isEmptyContainer(class Container &, int);
    /**
     * @symbol ?_isFullContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@H@Z
     * @hash   -1196800186
     */
    MCAPI bool _isFullContainer(class BlockSource &, class Container &, int);
    /**
     * @symbol ?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z
     * @hash   -751320368
     */
    MCAPI bool _pushOutItems(class BlockSource &, class Container &, class Vec3 const &, int);
    /**
     * @symbol ?_tryMoveItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H_N@Z
     * @hash   -1935699268
     */
    MCAPI bool _tryMoveItems(class BlockSource &, class Container &, class Vec3 const &, int, bool);
    /**
     * @symbol ?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z
     * @hash   -2129242142
     */
    MCAPI bool _tryPullInItemsFromAboveContainer(class BlockSource &, class Container &, class Vec3 const &);
    /**
     * @symbol ?_tryPushToComposter@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@VBlockPos@@H@Z
     * @hash   -1132758528
     */
    MCAPI bool _tryPushToComposter(class BlockSource &, class Container &, class BlockPos, int);
    /**
     * @symbol ?_tryTakeInItemFromSlot@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@1HH@Z
     * @hash   -1134579928
     */
    MCAPI bool _tryTakeInItemFromSlot(class BlockSource &, class Container &, class Container &, int, int);

protected:

};