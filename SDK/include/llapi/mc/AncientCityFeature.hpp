/**
 * @file  AncientCityFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AncientCityFeature.
 *
 */
class AncientCityFeature : public StructureFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANCIENTCITYFEATURE
public:
    class AncientCityFeature& operator=(class AncientCityFeature const &) = delete;
    AncientCityFeature(class AncientCityFeature const &) = delete;
    AncientCityFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   923745149
     */
    virtual ~AncientCityFeature();
    /**
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@AncientCityFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     * @hash   -789057340
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @vftbl  5
     * @symbol ?isFeatureChunk@AncientCityFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     * @hash   -380180411
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @vftbl  6
     * @symbol ?createStructureStart@AncientCityFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     * @hash   -178351796
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol ??0AncientCityFeature@@QEAA@IAEBVBaseGameVersion@@@Z
     * @hash   -2102728227
     */
    MCAPI AncientCityFeature(unsigned int, class BaseGameVersion const &);

};