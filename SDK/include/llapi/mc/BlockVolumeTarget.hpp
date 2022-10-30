/**
 * @file  BlockVolumeTarget.hpp
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
 * @brief MC class BlockVolumeTarget.
 *
 */
class BlockVolumeTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKVOLUMETARGET
public:
    class BlockVolumeTarget& operator=(class BlockVolumeTarget const &) = delete;
    BlockVolumeTarget(class BlockVolumeTarget const &) = delete;
    BlockVolumeTarget() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1363761734
     */
    virtual ~BlockVolumeTarget();
    /**
     * @vftbl  1
     * @hash   -1355585151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?getMinHeight@BlockVolumeTarget@@UEBAFXZ
     * @hash   2079986937
     */
    virtual short getMinHeight() const;
    /**
     * @vftbl  3
     * @symbol ?tryGetLiquidBlock@BlockVolumeTarget@@UEBAPEBVBlock@@AEBVBlockPos@@@Z
     * @hash   307824550
     */
    virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  4
     * @hash   -1344719020
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1343795499
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?getExtraBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   608054613
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol ?fetchBlocksInBox@BlockVolumeTarget@@UEAA?AV?$span@$$CBV?$BlockDataFetchResult@VBlock@@@@$0?0@gsl@@AEBVBoundingBox@@V?$function@$$A6A_NAEBVBlock@@@Z@std@@@Z
     * @hash   -1771269257
     */
    virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /**
     * @vftbl  8
     * @symbol ?hasBiomeTag@BlockVolumeTarget@@UEBA_N_KAEBVBlockPos@@@Z
     * @hash   1909868378
     */
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /**
     * @vftbl  9
     * @symbol ?setBlock@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@H@Z
     * @hash   -1626719487
     */
    virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /**
     * @vftbl  10
     * @symbol ?setBlockSimple@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1220051984
     */
    virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /**
     * @vftbl  11
     * @hash   -338384428
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -337460907
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -329326042
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @hash   -335613865
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol ?getMaxHeight@BlockVolumeTarget@@UEBAFXZ
     * @hash   -1616536485
     */
    virtual short getMaxHeight() const;
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @hash   -339454982
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  18
     * @symbol ?getHeightmap@BlockVolumeTarget@@UEAAFHH@Z
     * @hash   -677439786
     */
    virtual short getHeightmap(int, int);
    /**
     * @vftbl  19
     * @symbol ?isLegacyLevel@BlockVolumeTarget@@UEAA_NXZ
     * @hash   -1507594654
     */
    virtual bool isLegacyLevel();
    /**
     * @vftbl  20
     * @symbol ?getBiome@BlockVolumeTarget@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     * @hash   1096023621
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @vftbl  21
     * @symbol ?isInBounds@BlockVolumeTarget@@UEBA_NAEBVPos@@@Z
     * @hash   1343859183
     */
    virtual bool isInBounds(class Pos const &) const;
    /**
     * @vftbl  22
     * @symbol ?getLocalWaterLevel@BlockVolumeTarget@@UEBAFAEBVBlockPos@@@Z
     * @hash   -806756304
     */
    virtual short getLocalWaterLevel(class BlockPos const &) const;
    /**
     * @vftbl  23
     * @symbol ?getLevelData@BlockVolumeTarget@@UEBAAEBVLevelData@@XZ
     * @hash   -1682872345
     */
    virtual class LevelData const & getLevelData() const;
    /**
     * @vftbl  24
     * @symbol ?getContext@BlockVolumeTarget@@UEAAAEBUWorldGenContext@@XZ
     * @hash   -1539768951
     */
    virtual struct WorldGenContext const & getContext();
    /**
     * @vftbl  25
     * @symbol ?disableBlockSimple@BlockVolumeTarget@@UEAAXXZ
     * @hash   -660708250
     */
    virtual void disableBlockSimple();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKVOLUMETARGET
    /**
     * @symbol ?apply@BlockVolumeTarget@@UEBA_NXZ
     * @hash   -525752642
     */
    MCVAPI bool apply() const;
    /**
     * @symbol ?canSurvive@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1072539948
     */
    MCVAPI bool canSurvive(class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?getBlock@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -1680382239
     */
    MCVAPI class Block const & getBlock(class BlockPos const &) const;
    /**
     * @symbol ?getBlockNoBoundsCheck@BlockVolumeTarget@@UEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   977946173
     */
    MCVAPI class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /**
     * @symbol ?mayPlace@BlockVolumeTarget@@UEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   229592180
     */
    MCVAPI bool mayPlace(class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?placeStructure@BlockVolumeTarget@@UEAA_NAEBVBlockPos@@AEAVStructureTemplate@@AEAVStructureSettings@@@Z
     * @hash   -502747676
     */
    MCVAPI bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /**
     * @symbol ?shimPlaceForOldFeatures@BlockVolumeTarget@@UEBA_NAEBVFeature@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1157763249
     */
    MCVAPI bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
#endif
    /**
     * @symbol ??0BlockVolumeTarget@@QEAA@AEAVBlockVolume@@AEAVLevel@@AEBVBiomeSource@@V?$AutomaticID@VDimension@@H@@AEBUWorldGenContext@@@Z
     * @hash   1690550437
     */
    MCAPI BlockVolumeTarget(class BlockVolume &, class Level &, class BiomeSource const &, class AutomaticID<class Dimension, int>, struct WorldGenContext const &);

};