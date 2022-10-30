/**
 * @file  RotationUtil.hpp
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
 * @brief MC namespace RotationUtil.
 *
 */
namespace RotationUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?getRandomRotation@RotationUtil@@YA?AW4Rotation@@AEAVRandom@@@Z
     * @hash   1956379200
     */
    MCAPI enum class Rotation getRandomRotation(class Random &);
    /**
     * @symbol ?getRotated@RotationUtil@@YA?AW4Rotation@@W42@0@Z
     * @hash   987119114
     */
    MCAPI enum class Rotation getRotated(enum class Rotation, enum class Rotation);
    /**
     * @symbol ?getShuffledRotations@RotationUtil@@YA?AV?$vector@W4Rotation@@V?$allocator@W4Rotation@@@std@@@std@@AEAVRandom@@@Z
     * @hash   396083802
     */
    MCAPI std::vector<enum class Rotation> getShuffledRotations(class Random &);
    /**
     * @symbol ?rotate@RotationUtil@@YA?AVBlockPos@@AEBV2@W4Rotation@@@Z
     * @hash   -1050912704
     */
    MCAPI class BlockPos rotate(class BlockPos const &, enum class Rotation);
    /**
     * @symbol ?rotate@RotationUtil@@YAEW4Rotation@@E@Z
     * @hash   856605647
     */
    MCAPI unsigned char rotate(enum class Rotation, unsigned char);

};