/**
 * @file  OverworldGeneratorMultinoise.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldGeneratorMultinoise.
 *
 */
class OverworldGeneratorMultinoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATORMULTINOISE
public:
    class OverworldGeneratorMultinoise& operator=(class OverworldGeneratorMultinoise const &) = delete;
    OverworldGeneratorMultinoise(class OverworldGeneratorMultinoise const &) = delete;
    OverworldGeneratorMultinoise() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATORMULTINOISE
    /**
     * @symbol ?_prepareHeights@OverworldGeneratorMultinoise@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z
     * @hash   -762018208
     */
    MCVAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, class WorldGenCache const &, class Aquifer *, class std::function<void (class BlockPos const &, class Block const &, int)> &&, bool, std::vector<short> *, int);
    /**
     * @symbol ?createNoiseCache@OverworldGeneratorMultinoise@@EEBA?AVChunkLocalNoiseCache@@VChunkPos@@@Z
     * @hash   -762190895
     */
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;
    /**
     * @symbol ?decorateWorldGenPostProcess@OverworldGeneratorMultinoise@@EEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
     * @hash   1141382818
     */
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    /**
     * @symbol ?findSpawnPosition@OverworldGeneratorMultinoise@@UEBA?AVBlockPos@@XZ
     * @hash   1470882797
     */
    MCVAPI class BlockPos findSpawnPosition() const;
    /**
     * @symbol ?generateDensityCellsForChunk@OverworldGeneratorMultinoise@@UEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@@Z
     * @hash   1051956339
     */
    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41> generateDensityCellsForChunk(class ChunkPos const &) const;
    /**
     * @symbol ?getBiomeSource@OverworldGeneratorMultinoise@@UEBAAEBVBiomeSource@@XZ
     * @hash   -1281751239
     */
    MCVAPI class BiomeSource const & getBiomeSource() const;
    /**
     * @symbol ?getLevelGenHeight@OverworldGeneratorMultinoise@@UEBAHXZ
     * @hash   -1082656754
     */
    MCVAPI int getLevelGenHeight() const;
    /**
     * @symbol ?getMaterialAdjNoise@OverworldGeneratorMultinoise@@MEBAAEBV?$unique_ptr@VPerlinSimplexNoise@@U?$default_delete@VPerlinSimplexNoise@@@std@@@std@@XZ
     * @hash   845940650
     */
    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const & getMaterialAdjNoise() const;
    /**
     * @symbol ?getPreliminarySurfaceLevel@OverworldGeneratorMultinoise@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
     * @hash   -913300191
     */
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    /**
     * @symbol ?getSurfaceNoise@OverworldGeneratorMultinoise@@MEAAAEBVPerlinSimplexNoise@@XZ
     * @hash   578648844
     */
    MCVAPI class PerlinSimplexNoise const & getSurfaceNoise();
    /**
     * @symbol ?getXoroshiroPositionalRandomFactory@OverworldGeneratorMultinoise@@EEBA?AV?$optional@VXoroshiroPositionalRandomFactory@@@std@@XZ
     * @hash   -1977696592
     */
    MCVAPI class std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;
    /**
     * @symbol ?tryMakeAquifer@OverworldGeneratorMultinoise@@EEBA?AV?$unique_ptr@VAquifer@@U?$default_delete@VAquifer@@@std@@@std@@AEBVChunkPos@@AEBVSurfaceLevelCache@@FFF@Z
     * @hash   993350113
     */
    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(class ChunkPos const &, class SurfaceLevelCache const &, short, short, short) const;
    /**
     * @symbol ??1OverworldGeneratorMultinoise@@UEAA@XZ
     * @hash   1939537860
     */
    MCVAPI ~OverworldGeneratorMultinoise();
#endif
    /**
     * @symbol ??0OverworldGeneratorMultinoise@@QEAA@AEAVDimension@@VLevelSeed64@@PEBVBiome@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
     * @hash   2012647945
     */
    MCAPI OverworldGeneratorMultinoise(class Dimension &, class LevelSeed64, class Biome const *, std::unique_ptr<class StructureFeatureRegistry>);
    /**
     * @symbol ?_applySlides@OverworldGeneratorMultinoise@@SAMAEBVDimensionHeightRange@@ME@Z
     * @hash   -1319246204
     */
    MCAPI static float _applySlides(class DimensionHeightRange const &, float, unsigned char);

//private:
    /**
     * @symbol ?_attenuateOffsetAndFactor@OverworldGeneratorMultinoise@@AEBA?AUTerrainInfo@@V?$DividedPos2d@$03@@U2@@Z
     * @hash   606057092
     */
    MCAPI struct TerrainInfo _attenuateOffsetAndFactor(class DividedPos2d<4>, struct TerrainInfo) const;
    /**
     * @symbol ?_generateDensityCellsForChunk@OverworldGeneratorMultinoise@@AEBA?AV?$MultidimensionalArray@M$04$04$0CJ@@Util@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVNoodleCavifier@@PEAVOreVeinifier@@@Z
     * @hash   1491649201
     */
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(class ChunkPos const &, class WorldGenCache const &, class NoodleCavifier *, class OreVeinifier *) const;
    /**
     * @symbol ?_makeBiomeSource@OverworldGeneratorMultinoise@@AEAA?AV?$unique_ptr@VBiomeSource@@U?$default_delete@VBiomeSource@@@std@@@std@@AEBVXoroshiroPositionalRandomFactory@@AEBVBiomeRegistry@@PEBVBiome@@@Z
     * @hash   -2063429307
     */
    MCAPI std::unique_ptr<class BiomeSource> _makeBiomeSource(class XoroshiroPositionalRandomFactory const &, class BiomeRegistry const &, class Biome const *);

private:

};