/**
 * @file  SeamlessChunkBlendingAttenuator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OverworldGeneratorMultinoise.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SeamlessChunkBlendingAttenuator.
 *
 */
class SeamlessChunkBlendingAttenuator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAMLESSCHUNKBLENDINGATTENUATOR
public:
    class SeamlessChunkBlendingAttenuator& operator=(class SeamlessChunkBlendingAttenuator const &) = delete;
    SeamlessChunkBlendingAttenuator(class SeamlessChunkBlendingAttenuator const &) = delete;
    SeamlessChunkBlendingAttenuator() = delete;
#endif

public:
    /**
     * @symbol ??0SeamlessChunkBlendingAttenuator@@QEAA@VChunkPos@@$$QEAV?$vector@V?$array@UAttenuationData@SeamlessChunkBlendingAttenuatorUtil@@$03@std@@V?$allocator@V?$array@UAttenuationData@SeamlessChunkBlendingAttenuatorUtil@@$03@std@@@2@@std@@F@Z
     * @hash   1185170791
     */
    MCAPI SeamlessChunkBlendingAttenuator(class ChunkPos, std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorUtil::AttenuationData, 4>> &&, short);
    /**
     * @symbol ?attenuateDensity@SeamlessChunkBlendingAttenuator@@QEBAMAEBV?$DividedPos2d@$03@@HM@Z
     * @hash   -517159531
     */
    MCAPI float attenuateDensity(class DividedPos2d<4> const &, int, float) const;
    /**
     * @symbol ?attenuateTerrainInfo@SeamlessChunkBlendingAttenuator@@QEBA?AUTerrainInfo@@AEBV?$DividedPos2d@$03@@AEBU2@@Z
     * @hash   -1873463363
     */
    MCAPI struct TerrainInfo attenuateTerrainInfo(class DividedPos2d<4> const &, struct TerrainInfo const &) const;
    /**
     * @symbol ?tryGetAttenuatedBiome@SeamlessChunkBlendingAttenuator@@QEBAPEBVBiome@@AEBV?$DividedPos@$03@@AEBVBiomeRegistry@@AEBV?$NormalNoiseImpl@$0A@V?$MultiOctaveNoiseImpl@$0A@V?$ParityImprovedNoiseImpl@$0A@@@@@@@@Z
     * @hash   925687328
     */
    MCAPI class Biome const * tryGetAttenuatedBiome(class DividedPos<4> const &, class BiomeRegistry const &, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> const &) const;
    /**
     * @symbol ?tryMoveWaterEdges@SeamlessChunkBlendingAttenuator@@QEBA?BUBlockGenerationResult@OverworldGeneratorMultinoise@@AEBVBlockPos@@U23@@Z
     * @hash   128853935
     */
    MCAPI struct OverworldGeneratorMultinoise::BlockGenerationResult const tryMoveWaterEdges(class BlockPos const &, struct OverworldGeneratorMultinoise::BlockGenerationResult) const;
    /**
     * @symbol ??1SeamlessChunkBlendingAttenuator@@QEAA@XZ
     * @hash   -287772524
     */
    MCAPI ~SeamlessChunkBlendingAttenuator();

};