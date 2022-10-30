/**
 * @file  PillagerOutpostFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PillagerOutpostFeature.
 *
 */
class PillagerOutpostFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGEROUTPOSTFEATURE
public:
    class PillagerOutpostFeature& operator=(class PillagerOutpostFeature const &) = delete;
    PillagerOutpostFeature(class PillagerOutpostFeature const &) = delete;
    PillagerOutpostFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   646515742
     */
    virtual ~PillagerOutpostFeature();
    /**
     * @vftbl  1
     * @symbol ?shouldAddHardcodedSpawnAreas@PillagerOutpostFeature@@UEBA_NXZ
     * @hash   1727299069
     */
    virtual bool shouldAddHardcodedSpawnAreas() const;
    /**
     * @vftbl  2
     * @symbol ?shouldPostProcessMobs@PillagerOutpostFeature@@UEBA_NXZ
     * @hash   -1583822237
     */
    virtual bool shouldPostProcessMobs() const;
    /**
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@PillagerOutpostFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     * @hash   370992339
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vftbl  4
     * @symbol ?initMobSpawnTypes@PillagerOutpostFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
     * @hash   1834541130
     */
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry &);
    /**
     * @vftbl  5
     * @symbol ?isFeatureChunk@PillagerOutpostFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     * @hash   -1234160524
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @vftbl  6
     * @symbol ?createStructureStart@PillagerOutpostFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     * @hash   1281821357
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol ??0PillagerOutpostFeature@@QEAA@I@Z
     * @hash   73431269
     */
    MCAPI PillagerOutpostFeature(unsigned int);

};