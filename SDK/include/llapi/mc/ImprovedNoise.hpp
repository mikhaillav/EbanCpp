/**
 * @file  ImprovedNoise.hpp
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
 * @brief MC class ImprovedNoise.
 *
 */
class ImprovedNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPROVEDNOISE
public:
    class ImprovedNoise& operator=(class ImprovedNoise const &) = delete;
    ImprovedNoise(class ImprovedNoise const &) = delete;
    ImprovedNoise() = delete;
#endif

public:
    /**
     * @symbol ??0ImprovedNoise@@QEAA@AEAVIRandom@@UYBlendingBugSettings@@@Z
     * @hash   1144450646
     */
    MCAPI ImprovedNoise(class IRandom &, struct YBlendingBugSettings);
    /**
     * @symbol ?_getValue@ImprovedNoise@@QEBAMAEBVVec3@@@Z
     * @hash   -898646759
     */
    MCAPI float _getValue(class Vec3 const &) const;
    /**
     * @symbol ?_readArea@ImprovedNoise@@QEBAXPEAMAEBVVec3@@HHH1M@Z
     * @hash   1008230752
     */
    MCAPI void _readArea(float *, class Vec3 const &, int, int, int, class Vec3 const &, float) const;

//private:
    /**
     * @symbol ?_blendCubeCorners@ImprovedNoise@@AEBAXAEBVVec3@@HHHMAEAM111@Z
     * @hash   1005776871
     */
    MCAPI void _blendCubeCorners(class Vec3 const &, int, int, int, float, float &, float &, float &, float &) const;
    /**
     * @symbol ?_init@ImprovedNoise@@AEAAXAEBVVec3@@AEAVIRandom@@UYBlendingBugSettings@@@Z
     * @hash   -171150032
     */
    MCAPI void _init(class Vec3 const &, class IRandom &, struct YBlendingBugSettings);

private:

};