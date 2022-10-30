/**
 * @file  OreVeinifier.hpp
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
 * @brief MC class OreVeinifier.
 *
 */
class OreVeinifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREVEINIFIER
public:
    class OreVeinifier& operator=(class OreVeinifier const &) = delete;
    OreVeinifier(class OreVeinifier const &) = delete;
    OreVeinifier() = delete;
#endif

public:
    /**
     * @symbol ??0OreVeinifier@@QEAA@AEBVOreVeinifierNoises@@@Z
     * @hash   207262540
     */
    MCAPI OreVeinifier(class OreVeinifierNoises const &);
    /**
     * @symbol ?fillNoiseAtPos@OreVeinifier@@QEAAXAEBVVec3@@HM@Z
     * @hash   -685439588
     */
    MCAPI void fillNoiseAtPos(class Vec3 const &, int, float);
    /**
     * @symbol ?getVeinBlockOrFallback@OreVeinifier@@QEBAPEBVBlock@@VVec3@@PEBV2@@Z
     * @hash   -255766145
     */
    MCAPI class Block const * getVeinBlockOrFallback(class Vec3, class Block const *) const;
    /**
     * @symbol ?resetAndGetInterpolators@OreVeinifier@@QEAA?AV?$array@PEAVNoiseCellInterpolator@@$02@std@@XZ
     * @hash   454095864
     */
    MCAPI class std::array<class NoiseCellInterpolator *, 3> resetAndGetInterpolators();

};