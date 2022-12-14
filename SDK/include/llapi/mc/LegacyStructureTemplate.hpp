/**
 * @file  LegacyStructureTemplate.hpp
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
 * @brief MC class LegacyStructureTemplate.
 *
 */
class LegacyStructureTemplate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURETEMPLATE
public:
    class LegacyStructureTemplate& operator=(class LegacyStructureTemplate const &) = delete;
    LegacyStructureTemplate(class LegacyStructureTemplate const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getMarkers@LegacyStructureTemplate@@UEBA?AV?$unordered_map@VBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEBVBlockPos@@AEAVLegacyStructureSettings@@@Z
     * @hash   -143844678
     */
    virtual class std::unordered_map<class BlockPos, std::string, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, std::string>>> getMarkers(class BlockPos const &, class LegacyStructureSettings &) const;
    /**
     * @vftbl  1
     * @symbol ?placeInWorld@LegacyStructureTemplate@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVLegacyStructureSettings@@AEAVRandom@@@Z
     * @hash   418963680
     */
    virtual void placeInWorld(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &) const;
    /**
     * @symbol ??0LegacyStructureTemplate@@QEAA@XZ
     * @hash   -987452816
     */
    MCAPI LegacyStructureTemplate();
    /**
     * @symbol ?calculateConnectedPosition@LegacyStructureTemplate@@QEBA?AVBlockPos@@AEBVLegacyStructureSettings@@AEBV2@01@Z
     * @hash   -2094272990
     */
    MCAPI class BlockPos calculateConnectedPosition(class LegacyStructureSettings const &, class BlockPos const &, class LegacyStructureSettings const &, class BlockPos const &) const;
    /**
     * @symbol ?getJigsawMarkers@LegacyStructureTemplate@@QEBA?AV?$vector@VJigsawStructureBlockInfo@@V?$allocator@VJigsawStructureBlockInfo@@@std@@@std@@XZ
     * @hash   -1791905788
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    /**
     * @symbol ?getSize@LegacyStructureTemplate@@QEBA?AVBlockPos@@W4Rotation@@@Z
     * @hash   889019485
     */
    MCAPI class BlockPos getSize(enum class Rotation) const;
    /**
     * @symbol ?load@LegacyStructureTemplate@@QEAAXAEBVCompoundTag@@@Z
     * @hash   -262299976
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol ?placeInWorldChunk@LegacyStructureTemplate@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEAVLegacyStructureSettings@@AEAVRandom@@@Z
     * @hash   -1001017551
     */
    MCAPI void placeInWorldChunk(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &);
    /**
     * @symbol ?AUTHOR_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -293453819
     */
    MCAPI static std::string const AUTHOR_TAG;
    /**
     * @symbol ?BLOCKS_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1574758907
     */
    MCAPI static std::string const BLOCKS_TAG;
    /**
     * @symbol ?BLOCK_TAG_NBT@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   722278275
     */
    MCAPI static std::string const BLOCK_TAG_NBT;
    /**
     * @symbol ?BLOCK_TAG_POS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -184086333
     */
    MCAPI static std::string const BLOCK_TAG_POS;
    /**
     * @symbol ?BLOCK_TAG_STATE@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -816889725
     */
    MCAPI static std::string const BLOCK_TAG_STATE;
    /**
     * @symbol ?CHUNK_SIZE@LegacyStructureTemplate@@2HB
     * @hash   1483440661
     */
    MCAPI static int const CHUNK_SIZE;
    /**
     * @symbol ?ENTITIES_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   665491429
     */
    MCAPI static std::string const ENTITIES_TAG;
    /**
     * @symbol ?ENTITY_TAG_BLOCKPOS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -779216445
     */
    MCAPI static std::string const ENTITY_TAG_BLOCKPOS;
    /**
     * @symbol ?ENTITY_TAG_NBT@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1222750373
     */
    MCAPI static std::string const ENTITY_TAG_NBT;
    /**
     * @symbol ?ENTITY_TAG_POS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   316385765
     */
    MCAPI static std::string const ENTITY_TAG_POS;
    /**
     * @symbol ?MINECRAFT_PREFIX@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1660413669
     */
    MCAPI static std::string const MINECRAFT_PREFIX;
    /**
     * @symbol ?PALETTE_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -561208285
     */
    MCAPI static std::string const PALETTE_TAG;
    /**
     * @symbol ?SIZE_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1882007397
     */
    MCAPI static std::string const SIZE_TAG;
    /**
     * @symbol ?STRUCTURE_VERSION@LegacyStructureTemplate@@2HB
     * @hash   -1560329307
     */
    MCAPI static int const STRUCTURE_VERSION;
    /**
     * @symbol ?VERSION_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   233266019
     */
    MCAPI static std::string const VERSION_TAG;
    /**
     * @symbol ?_mapPropertyToExtraBlock@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   1910779870
     */
    MCAPI static class Block const * _mapPropertyToExtraBlock(std::string const &, std::string const &);
    /**
     * @symbol ?_mapToBlock@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1826782214
     */
    MCAPI static class Block const * _mapToBlock(std::string const &);
    /**
     * @symbol ?_mapToData@LegacyStructureTemplate@@SAAEBVBlock@@AEBV2@AEBVLegacyStructureSettings@@@Z
     * @hash   1012976343
     */
    MCAPI static class Block const & _mapToData(class Block const &, class LegacyStructureSettings const &);
    /**
     * @symbol ?_mapToProperty@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBV2@@Z
     * @hash   1717334004
     */
    MCAPI static class Block const * _mapToProperty(std::string const &, std::string const &, class Block const &);
    /**
     * @symbol ?defaultSettings@LegacyStructureTemplate@@2VLegacyStructureSettings@@B
     * @hash   -1318865503
     */
    MCAPI static class LegacyStructureSettings const defaultSettings;
    /**
     * @symbol ?getZeroPositionWithTransform@LegacyStructureTemplate@@SA?AVBlockPos@@AEBV2@W4Mirror@@W4Rotation@@HH@Z
     * @hash   -624263302
     */
    MCAPI static class BlockPos getZeroPositionWithTransform(class BlockPos const &, enum class Mirror, enum class Rotation, int, int);
    /**
     * @symbol ?transform@LegacyStructureTemplate@@SA?AVBlockPos@@V2@W4Mirror@@W4Rotation@@@Z
     * @hash   -1223246656
     */
    MCAPI static class BlockPos transform(class BlockPos, enum class Mirror, enum class Rotation);

//private:
    /**
     * @symbol ?_mapPropertiesToTags@LegacyStructureTemplate@@CAXAEAVCompoundTag@@AEBV2@@Z
     * @hash   -813131427
     */
    MCAPI static void _mapPropertiesToTags(class CompoundTag &, class CompoundTag const &);
    /**
     * @symbol ?_mapPropertyToTag@LegacyStructureTemplate@@CAXAEAVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   1432273912
     */
    MCAPI static void _mapPropertyToTag(class CompoundTag &, std::string const &, std::string const &);
    /**
     * @symbol ?_mapTag@LegacyStructureTemplate@@CA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   701627259
     */
    MCAPI static std::unique_ptr<class CompoundTag> _mapTag(std::unique_ptr<class CompoundTag>, std::string const &);

private:

};