/**
 * @file  SkeletonHorseTrapGoal.hpp
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
 * @brief MC class SkeletonHorseTrapGoal.
 *
 */
class SkeletonHorseTrapGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONHORSETRAPGOAL
public:
    class SkeletonHorseTrapGoal& operator=(class SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal(class SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   160124510
     */
    virtual ~SkeletonHorseTrapGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SkeletonHorseTrapGoal@@UEAA_NXZ
     * @hash   -1699461744
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1361872974
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   576718691
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SkeletonHorseTrapGoal@@UEAAXXZ
     * @hash   -632112135
     */
    virtual void start();
    /**
     * @vftbl  5
     * @hash   -1401863067
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@SkeletonHorseTrapGoal@@UEAAXXZ
     * @hash   -587706268
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SkeletonHorseTrapGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1727354080
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SkeletonHorseTrapGoal@@QEAA@AEAVHorse@@HM@Z
     * @hash   -646978671
     */
    MCAPI SkeletonHorseTrapGoal(class Horse &, int, float);

//private:
    /**
     * @symbol ?_createSkeleton@SkeletonHorseTrapGoal@@AEAAPEAVSkeleton@@AEBW4Difficulty@@AEBVHorse@@@Z
     * @hash   244485962
     */
    MCAPI class Skeleton * _createSkeleton(enum class Difficulty const &, class Horse const &);

private:

};