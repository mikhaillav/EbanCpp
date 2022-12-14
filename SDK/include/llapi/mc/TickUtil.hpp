/**
 * @file  TickUtil.hpp
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
 * @brief MC namespace TickUtil.
 *
 */
namespace TickUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?chunkBoundsToGridBounds@TickUtil@@YA?AU?$pair@VBlockPos@@V1@@std@@AEBVPos@@0@Z
     * @hash   124695010
     */
    MCAPI struct std::pair<class BlockPos, class BlockPos> chunkBoundsToGridBounds(class Pos const &, class Pos const &);
    /**
     * @symbol ?forRandomOffset@TickUtil@@YAXEEAEAVRandom@@V?$function@$$A6AXAEBVPos@@@Z@std@@@Z
     * @hash   339541695
     */
    MCAPI void forRandomOffset(unsigned char, unsigned char, class Random &, class std::function<void (class Pos const &)>);
    /**
     * @symbol ?getDeterministicBounds@TickUtil@@YA?AUBounds@@AEBU2@@Z
     * @hash   -327975773
     */
    MCAPI struct Bounds getDeterministicBounds(struct Bounds const &);
    /**
     * @symbol ?getLoadedChunkNeighborBounds@TickUtil@@YA?AUBounds@@AEBU2@@Z
     * @hash   1903116627
     */
    MCAPI struct Bounds getLoadedChunkNeighborBounds(struct Bounds const &);
    /**
     * @symbol ?getLoadedChunkNeighborPos@TickUtil@@YA?AVChunkPos@@AEBVPos@@_N1@Z
     * @hash   -451469950
     */
    MCAPI class ChunkPos getLoadedChunkNeighborPos(class Pos const &, bool, bool);
    /**
     * @symbol ?getRandomInBounds@TickUtil@@YA?AVChunkPos@@AEBUBounds@@AEAVRandom@@@Z
     * @hash   -286460365
     */
    MCAPI class ChunkPos getRandomInBounds(struct Bounds const &, class Random &);

};