/**
 * @file  VanillaLevelChunkUpgrade.hpp
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
 * @brief MC namespace VanillaLevelChunkUpgrade.
 *
 */
namespace VanillaLevelChunkUpgrade {

#define AFTER_EXTRA
// Add Member There
enum class Axis;

#undef AFTER_EXTRA
    /**
     * @symbol ?_updateBelowZero@VanillaLevelChunkUpgrade@@YA_NAEAVLevelChunk@@0AEAVBlockSource@@@Z
     * @hash   -25275524
     */
    MCAPI bool _updateBelowZero(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?_upgradeLevelChunkLegacy@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     * @hash   1487723958
     */
    MCAPI void _upgradeLevelChunkLegacy(class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?_upgradeLevelChunkViaMetaData@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     * @hash   -1759504401
     */
    MCAPI void _upgradeLevelChunkViaMetaData(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?addBiomeSpecificVillageSkins@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   540410171
     */
    MCAPI bool addBiomeSpecificVillageSkins(class CompoundTag &, class BlockSource &);
    /**
     * @symbol ?convertOcelotTagToCat@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     * @hash   -865334442
     */
    MCAPI bool convertOcelotTagToCat(class CompoundTag &);
    /**
     * @symbol ?convertVillagerV1TagToV2@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     * @hash   -1940780714
     */
    MCAPI bool convertVillagerV1TagToV2(class CompoundTag &);
    /**
     * @symbol ?convertVillagerV2TagToV1@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     * @hash   1547793338
     */
    MCAPI bool convertVillagerV2TagToV1(class CompoundTag &);
    /**
     * @symbol ?convertZombieVillagerV1TagToV2@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     * @hash   -450990590
     */
    MCAPI bool convertZombieVillagerV1TagToV2(class CompoundTag &);
    /**
     * @symbol ?convertZombieVillagerV2TagToV1@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     * @hash   -1258675418
     */
    MCAPI bool convertZombieVillagerV2TagToV1(class CompoundTag &);
    /**
     * @symbol ?fillNegativeSubChunksWithAir@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     * @hash   -972447116
     */
    MCAPI void fillNegativeSubChunksWithAir(class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?fillNegativeSubChunksWithGeneration@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0@Z
     * @hash   586209744
     */
    MCAPI void fillNegativeSubChunksWithGeneration(class LevelChunk &, class LevelChunk &);
    /**
     * @symbol ?fillNegativeSubChunksWithGenerationOrAir@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     * @hash   -231178615
     */
    MCAPI void fillNegativeSubChunksWithGenerationOrAir(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?fixBlockStatesOnChunkBorderAxis@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@AEBVLevelChunk@@EVBlockPos@@W4Axis@1@@Z
     * @hash   834181671
     */
    MCAPI void fixBlockStatesOnChunkBorderAxis(class BlockSource &, class LevelChunk const &, unsigned char, class BlockPos, enum class VanillaLevelChunkUpgrade::Axis);
    /**
     * @symbol ?fixStemBlockStates@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@VBlockPos@@AEBVBlock@@@Z
     * @hash   799739927
     */
    MCAPI void fixStemBlockStates(class BlockSource &, class BlockPos, class Block const &);
    /**
     * @symbol ?fixUselessDynamicWater@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     * @hash   -1623517458
     */
    MCAPI void fixUselessDynamicWater(class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?fixWallBlockStates@VanillaLevelChunkUpgrade@@YAXAEAVBlockSource@@VBlockPos@@@Z
     * @hash   310178256
     */
    MCAPI void fixWallBlockStates(class BlockSource &, class BlockPos);
    /**
     * @symbol ?fixWallChunk@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@AEAVBlockSource@@@Z
     * @hash   -977985324
     */
    MCAPI void fixWallChunk(class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?getV1CareerFromDefinitionsList@VanillaLevelChunkUpgrade@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVListTag@@@Z
     * @hash   338599797
     */
    MCAPI std::string const & getV1CareerFromDefinitionsList(class ListTag const *);
    /**
     * @symbol ?isWallBlock@VanillaLevelChunkUpgrade@@YA_NAEBVBlock@@@Z
     * @hash   -791993780
     */
    MCAPI bool isWallBlock(class Block const &);
    /**
     * @symbol ?levelChunkNeedsUpgrade@VanillaLevelChunkUpgrade@@YA_NAEBVLevelChunk@@@Z
     * @hash   2045515464
     */
    MCAPI bool levelChunkNeedsUpgrade(class LevelChunk const &);
    /**
     * @symbol ?upgradeArmorStandComponents@VanillaLevelChunkUpgrade@@YA_NAEAVCompoundTag@@@Z
     * @hash   -1620404596
     */
    MCAPI bool upgradeArmorStandComponents(class CompoundTag &);
    /**
     * @symbol ?upgradeLevelChunk@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     * @hash   2132383475
     */
    MCAPI void upgradeLevelChunk(class LevelChunk &, class LevelChunk &, class BlockSource &);
    /**
     * @symbol ?upgradeOldLimboEntity@VanillaLevelChunkUpgrade@@YAXAEAVCompoundTag@@W4LimboEntitiesVersion@@_N@Z
     * @hash   615808671
     */
    MCAPI void upgradeOldLimboEntity(class CompoundTag &, enum class LimboEntitiesVersion, bool);
    /**
     * @symbol ?upgradeWorldHeight@VanillaLevelChunkUpgrade@@YAXAEAVLevelChunk@@0AEAVBlockSource@@@Z
     * @hash   1462160325
     */
    MCAPI void upgradeWorldHeight(class LevelChunk &, class LevelChunk &, class BlockSource &);

};