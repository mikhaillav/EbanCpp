/**
 * @file  Seasons.hpp
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
 * @brief MC class Seasons.
 *
 */
class Seasons {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEASONS
public:
    class Seasons& operator=(class Seasons const &) = delete;
    Seasons(class Seasons const &) = delete;
    Seasons() = delete;
#endif

public:
    /**
     * @symbol ??0Seasons@@QEAA@AEAVDimension@@@Z
     * @hash   -1326101023
     */
    MCAPI Seasons(class Dimension &);
    /**
     * @symbol ?postProcess@Seasons@@QEAAXAEAVLevelChunk@@AEAVBlockSource@@AEBVChunkPos@@@Z
     * @hash   214926758
     */
    MCAPI void postProcess(class LevelChunk &, class BlockSource &, class ChunkPos const &);
    /**
     * @symbol ?tick@Seasons@@QEAAXXZ
     * @hash   1045229613
     */
    MCAPI void tick();
    /**
     * @symbol ??1Seasons@@QEAA@XZ
     * @hash   -2123754196
     */
    MCAPI ~Seasons();

};