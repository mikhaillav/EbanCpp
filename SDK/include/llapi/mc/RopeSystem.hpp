/**
 * @file  RopeSystem.hpp
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
 * @brief MC class RopeSystem.
 *
 */
class RopeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPESYSTEM
public:
    class RopeSystem& operator=(class RopeSystem const &) = delete;
    RopeSystem(class RopeSystem const &) = delete;
#endif

public:
    /**
     * @symbol ??0RopeSystem@@QEAA@XZ
     * @hash   -1522455251
     */
    MCAPI RopeSystem();
    /**
     * @symbol ?_initializePins@RopeSystem@@QEAAXAEBVVec3@@0@Z
     * @hash   1050104724
     */
    MCAPI void _initializePins(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol ?cutAtPercent@RopeSystem@@QEAAXM@Z
     * @hash   -1895432444
     */
    MCAPI void cutAtPercent(float);
    /**
     * @symbol ?initialize@RopeSystem@@QEAAXAEBURopeParams@@@Z
     * @hash   -1034014422
     */
    MCAPI void initialize(struct RopeParams const &);
    /**
     * @symbol ?isCut@RopeSystem@@QEBA_NXZ
     * @hash   -858882658
     */
    MCAPI bool isCut() const;
    /**
     * @symbol ?isDestroyed@RopeSystem@@QEBA_NXZ
     * @hash   1193721084
     */
    MCAPI bool isDestroyed() const;
    /**
     * @symbol ?queueTick@RopeSystem@@QEAAXAEAVBlockSource@@AEAV?$shared_ptr@VRopeSystem@@@std@@@Z
     * @hash   253930940
     */
    MCAPI void queueTick(class BlockSource &, class std::shared_ptr<class RopeSystem> &);
    /**
     * @symbol ??1RopeSystem@@QEAA@XZ
     * @hash   273997147
     */
    MCAPI ~RopeSystem();
    /**
     * @symbol ?sBucketLength@RopeSystem@@2MB
     * @hash   1629575431
     */
    MCAPI static float const sBucketLength;
    /**
     * @symbol ?sEnabled@RopeSystem@@2_NA
     * @hash   1154007621
     */
    MCAPI static bool sEnabled;
    /**
     * @symbol ?sEpsilon@RopeSystem@@2MB
     * @hash   1632764709
     */
    MCAPI static float const sEpsilon;

//private:
    /**
     * @symbol ?_cacheColliders@RopeSystem@@AEAA_NAEAVBlockSource@@@Z
     * @hash   1514181923
     */
    MCAPI bool _cacheColliders(class BlockSource &);
    /**
     * @symbol ?_finalizeBucket@RopeSystem@@AEAAXAEAUAABBBucket@@@Z
     * @hash   1111844877
     */
    MCAPI void _finalizeBucket(struct AABBBucket &);
    /**
     * @symbol ?_initializePins@RopeSystem@@AEAAXXZ
     * @hash   -1307556056
     */
    MCAPI void _initializePins();
    /**
     * @symbol ?_integrate@RopeSystem@@AEAAXXZ
     * @hash   1118399501
     */
    MCAPI void _integrate();
    /**
     * @symbol ?_prepareAABBBuckets@RopeSystem@@AEAAXXZ
     * @hash   871037404
     */
    MCAPI void _prepareAABBBuckets();
    /**
     * @symbol ?_propagateDistanceConstraint@RopeSystem@@AEAAMAEBVVec3@@AEAV2@M@Z
     * @hash   447396624
     */
    MCAPI float _propagateDistanceConstraint(class Vec3 const &, class Vec3 &, float);
    /**
     * @symbol ?_pruneDenyList@RopeSystem@@AEAAXXZ
     * @hash   2118859456
     */
    MCAPI void _pruneDenyList();
    /**
     * @symbol ?_pushRange@RopeSystem@@AEAAX_K0@Z
     * @hash   1378521711
     */
    MCAPI void _pushRange(unsigned __int64, unsigned __int64);
    /**
     * @symbol ?_resizeRope@RopeSystem@@AEAAXXZ
     * @hash   1224034224
     */
    MCAPI void _resizeRope();
    /**
     * @symbol ?_solveCollisions@RopeSystem@@AEAAM_N@Z
     * @hash   2118344096
     */
    MCAPI float _solveCollisions(bool);
    /**
     * @symbol ?_solveDistanceConstraint@RopeSystem@@AEAAMAEAVVec3@@0M@Z
     * @hash   -1526610595
     */
    MCAPI float _solveDistanceConstraint(class Vec3 &, class Vec3 &, float);
    /**
     * @symbol ?_solveDistanceConstraintBlock@RopeSystem@@AEAAMAEAVVec3@@000M@Z
     * @hash   -1793088988
     */
    MCAPI float _solveDistanceConstraintBlock(class Vec3 &, class Vec3 &, class Vec3 &, class Vec3 &, float);
    /**
     * @symbol ?_solveDistanceConstraints3@RopeSystem@@AEAAMXZ
     * @hash   1236797861
     */
    MCAPI float _solveDistanceConstraints3();
    /**
     * @symbol ?_tick@RopeSystem@@AEAAXXZ
     * @hash   -916158089
     */
    MCAPI void _tick();
    /**
     * @symbol ?_tickWaves@RopeSystem@@AEAAXXZ
     * @hash   -673162359
     */
    MCAPI void _tickWaves();

private:

};