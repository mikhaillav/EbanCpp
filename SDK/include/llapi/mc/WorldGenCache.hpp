/**
 * @file  WorldGenCache.hpp
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
 * @brief MC class WorldGenCache.
 *
 */
class WorldGenCache {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENCACHE
public:
    class WorldGenCache& operator=(class WorldGenCache const &) = delete;
    WorldGenCache(class WorldGenCache const &) = delete;
    WorldGenCache() = delete;
#endif

public:
    /**
     * @symbol ??0WorldGenCache@@QEAA@VChunkLocalNoiseCache@@VSurfaceLevelCache@@@Z
     * @hash   -992101038
     */
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache);
    /**
     * @symbol ?getChunkLocalNoiseCache@WorldGenCache@@QEBAAEBVChunkLocalNoiseCache@@XZ
     * @hash   -1875849994
     */
    MCAPI class ChunkLocalNoiseCache const & getChunkLocalNoiseCache() const;
    /**
     * @symbol ?getSurfaceLevelCache@WorldGenCache@@QEBAAEBVSurfaceLevelCache@@XZ
     * @hash   -2137909644
     */
    MCAPI class SurfaceLevelCache const & getSurfaceLevelCache() const;
    /**
     * @symbol ??1WorldGenCache@@QEAA@XZ
     * @hash   -861963008
     */
    MCAPI ~WorldGenCache();

};