/**
 * @file  UpdateEntityAfterFallOnActorProxy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateEntityAfterFallOnActorProxy.
 *
 */
class UpdateEntityAfterFallOnActorProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEENTITYAFTERFALLONACTORPROXY
public:
    class UpdateEntityAfterFallOnActorProxy& operator=(class UpdateEntityAfterFallOnActorProxy const &) = delete;
    UpdateEntityAfterFallOnActorProxy(class UpdateEntityAfterFallOnActorProxy const &) = delete;
    UpdateEntityAfterFallOnActorProxy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getPosDeltaNonConst@UpdateEntityAfterFallOnActorProxy@@UEAAAEAVVec3@@XZ
     * @hash   -875478433
     */
    virtual class Vec3 & getPosDeltaNonConst();
    /**
     * @vftbl  1
     * @symbol ?isSneaking@UpdateEntityAfterFallOnActorProxy@@UEBA_NXZ
     * @hash   194052845
     */
    virtual bool isSneaking() const;
    /**
     * @vftbl  2
     * @symbol ?onBounceStarted@UpdateEntityAfterFallOnActorProxy@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   2116130032
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @vftbl  3
     * @symbol ?getPosition@UpdateEntityAfterFallOnActorProxy@@UEBA?AVVec3@@XZ
     * @hash   -1437868180
     */
    virtual class Vec3 getPosition() const;
    /**
     * @vftbl  4
     * @symbol ?getRegion@UpdateEntityAfterFallOnActorProxy@@UEBAAEBVIConstBlockSource@@XZ
     * @hash   -668633570
     */
    virtual class IConstBlockSource const & getRegion() const;
    /**
     * @symbol ??0UpdateEntityAfterFallOnActorProxy@@QEAA@AEAUIActorMovementProxy@@@Z
     * @hash   1377765894
     */
    MCAPI UpdateEntityAfterFallOnActorProxy(struct IActorMovementProxy &);

};