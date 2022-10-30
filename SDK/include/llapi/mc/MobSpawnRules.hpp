/**
 * @file  MobSpawnRules.hpp
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
 * @brief MC class MobSpawnRules.
 *
 */
class MobSpawnRules {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNRULES
public:
    class MobSpawnRules& operator=(class MobSpawnRules const &) = delete;
#endif

public:
    /**
     * @symbol ??0MobSpawnRules@@QEAA@XZ
     * @hash   1778739864
     */
    MCAPI MobSpawnRules();
    /**
     * @symbol ??0MobSpawnRules@@QEAA@$$QEAV0@@Z
     * @hash   -1775160895
     */
    MCAPI MobSpawnRules(class MobSpawnRules &&);
    /**
     * @symbol ??0MobSpawnRules@@QEAA@AEBV0@@Z
     * @hash   967778801
     */
    MCAPI MobSpawnRules(class MobSpawnRules const &);
    /**
     * @symbol ?addHerd@MobSpawnRules@@QEAAAEAV1@HHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   491064904
     */
    MCAPI class MobSpawnRules & addHerd(int, int, std::string const &);
    /**
     * @symbol ?addPermutation@MobSpawnRules@@QEAAAEAV1@HHAEBUActorDefinitionIdentifier@@@Z
     * @hash   -1490136918
     */
    MCAPI class MobSpawnRules & addPermutation(int, int, struct ActorDefinitionIdentifier const &);
    /**
     * @symbol ?canSpawnInConditions@MobSpawnRules@@QEBA_NAEBVSpawnConditions@@AEAVBlockSource@@@Z
     * @hash   -1901959814
     */
    MCAPI bool canSpawnInConditions(class SpawnConditions const &, class BlockSource &) const;
    /**
     * @symbol ?getAboveBlockDistance@MobSpawnRules@@QEBAHXZ
     * @hash   559418398
     */
    MCAPI int getAboveBlockDistance() const;
    /**
     * @symbol ?getDelayRange@MobSpawnRules@@QEBA?BU?$pair@HH@std@@XZ
     * @hash   -2023810577
     */
    MCAPI struct std::pair<int, int> const getDelayRange() const;
    /**
     * @symbol ?getDelaySpawnChance@MobSpawnRules@@QEBAHXZ
     * @hash   -1383485364
     */
    MCAPI int getDelaySpawnChance() const;
    /**
     * @symbol ?getGuaranteedPermutations@MobSpawnRules@@QEBAAEBV?$vector@VMobSpawnerPermutation@@V?$allocator@VMobSpawnerPermutation@@@std@@@std@@XZ
     * @hash   1279792342
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getGuaranteedPermutations() const;
    /**
     * @symbol ?getHerdListMutable@MobSpawnRules@@QEAAAEAV?$vector@UMobSpawnHerdInfo@@V?$allocator@UMobSpawnHerdInfo@@@std@@@std@@XZ
     * @hash   1064064070
     */
    MCAPI std::vector<struct MobSpawnHerdInfo> & getHerdListMutable();
    /**
     * @symbol ?getMobToDelayId@MobSpawnRules@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   723071808
     */
    MCAPI std::string const getMobToDelayId() const;
    /**
     * @symbol ?getPermutations@MobSpawnRules@@QEBAAEBV?$vector@VMobSpawnerPermutation@@V?$allocator@VMobSpawnerPermutation@@@std@@@std@@XZ
     * @hash   2130686646
     */
    MCAPI std::vector<class MobSpawnerPermutation> const & getPermutations() const;
    /**
     * @symbol ?getPersistence@MobSpawnRules@@QEBA_NXZ
     * @hash   -2105198424
     */
    MCAPI bool getPersistence() const;
    /**
     * @symbol ?getPopulationCap@MobSpawnRules@@QEBAHAEBVSpawnConditions@@@Z
     * @hash   -1406186615
     */
    MCAPI int getPopulationCap(class SpawnConditions const &) const;
    /**
     * @symbol ?getSpawnAboveBlockList@MobSpawnRules@@QEBAAEBV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     * @hash   -1321977282
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnAboveBlockList() const;
    /**
     * @symbol ?getSpawnAboveBlockListMutable@MobSpawnRules@@QEAAAEAV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     * @hash   -1105629530
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnAboveBlockListMutable();
    /**
     * @symbol ?getSpawnCount@MobSpawnRules@@QEBAHAEBVSpawnConditions@@AEAVBlockSource@@AEAVRandom@@AEBUMobSpawnHerdInfo@@@Z
     * @hash   -1284133192
     */
    MCAPI int getSpawnCount(class SpawnConditions const &, class BlockSource &, class Random &, struct MobSpawnHerdInfo const &) const;
    /**
     * @symbol ?getSpawnOnBlockList@MobSpawnRules@@QEBAAEBV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     * @hash   -107146984
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockList() const;
    /**
     * @symbol ?getSpawnOnBlockListMutable@MobSpawnRules@@QEAAAEAV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     * @hash   -1563692756
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockListMutable();
    /**
     * @symbol ?getSpawnOnBlockPreventedList@MobSpawnRules@@QEBAAEBV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     * @hash   -1933227376
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const & getSpawnOnBlockPreventedList() const;
    /**
     * @symbol ?getSpawnOnBlockPreventedListMutable@MobSpawnRules@@QEAAAEAV?$unordered_set@PEBVBlockLegacy@@U?$hash@PEBVBlockLegacy@@@std@@U?$equal_to@PEBVBlockLegacy@@@3@V?$allocator@PEBVBlockLegacy@@@3@@std@@XZ
     * @hash   1117244116
     */
    MCAPI class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> & getSpawnOnBlockPreventedListMutable();
    /**
     * @symbol ?isLavaSpawner@MobSpawnRules@@QEBA_NXZ
     * @hash   431000662
     */
    MCAPI bool isLavaSpawner() const;
    /**
     * @symbol ?isUnderwaterSpawner@MobSpawnRules@@QEBA_NXZ
     * @hash   8079894
     */
    MCAPI bool isUnderwaterSpawner() const;
    /**
     * @symbol ?selectRandomHerd@MobSpawnRules@@QEBAAEBUMobSpawnHerdInfo@@AEAVRandom@@@Z
     * @hash   -1480505545
     */
    MCAPI struct MobSpawnHerdInfo const & selectRandomHerd(class Random &) const;
    /**
     * @symbol ?setAboveBlockDistance@MobSpawnRules@@QEAAAEAV1@H@Z
     * @hash   1148257394
     */
    MCAPI class MobSpawnRules & setAboveBlockDistance(int);
    /**
     * @symbol ?setBrightnessRange@MobSpawnRules@@QEAAAEAV1@HH_N@Z
     * @hash   -1208235460
     */
    MCAPI class MobSpawnRules & setBrightnessRange(int, int, bool);
    /**
     * @symbol ?setBubbleSpawner@MobSpawnRules@@QEAAAEAV1@_N@Z
     * @hash   -730754292
     */
    MCAPI class MobSpawnRules & setBubbleSpawner(bool);
    /**
     * @symbol ?setDelayRange@MobSpawnRules@@QEAAAEAV1@HHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1630372904
     */
    MCAPI class MobSpawnRules & setDelayRange(int, int, std::string const &);
    /**
     * @symbol ?setDelaySpawnChance@MobSpawnRules@@QEAAAEAV1@H@Z
     * @hash   -562947230
     */
    MCAPI class MobSpawnRules & setDelaySpawnChance(int);
    /**
     * @symbol ?setDifficultyRange@MobSpawnRules@@QEAAAEAV1@W4Difficulty@@0@Z
     * @hash   608056921
     */
    MCAPI class MobSpawnRules & setDifficultyRange(enum class Difficulty, enum class Difficulty);
    /**
     * @symbol ?setExperimentalGameplay@MobSpawnRules@@QEAAAEAV1@XZ
     * @hash   -1804030711
     */
    MCAPI class MobSpawnRules & setExperimentalGameplay();
    /**
     * @symbol ?setHardcodedSpawnRuleCallback@MobSpawnRules@@QEAAAEAV1@V?$function@$$A6A_NAEBVSpawnConditions@@AEAVBlockSource@@@Z@std@@@Z
     * @hash   1430255497
     */
    MCAPI class MobSpawnRules & setHardcodedSpawnRuleCallback(class std::function<bool (class SpawnConditions const &, class BlockSource &)>);
    /**
     * @symbol ?setHeightRange@MobSpawnRules@@QEAAAEAV1@HH@Z
     * @hash   688982371
     */
    MCAPI class MobSpawnRules & setHeightRange(int, int);
    /**
     * @symbol ?setLavaSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     * @hash   2138431019
     */
    MCAPI class MobSpawnRules & setLavaSpawner();
    /**
     * @symbol ?setMobEventType@MobSpawnRules@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1952640488
     */
    MCAPI class MobSpawnRules & setMobEventType(std::string const &);
    /**
     * @symbol ?setPersistence@MobSpawnRules@@QEAAAEAV1@_N@Z
     * @hash   -1884836698
     */
    MCAPI class MobSpawnRules & setPersistence(bool);
    /**
     * @symbol ?setPlayerInVillageBorderTolerance@MobSpawnRules@@QEAAAEAV1@I@Z
     * @hash   -957095636
     */
    MCAPI class MobSpawnRules & setPlayerInVillageBorderTolerance(unsigned int);
    /**
     * @symbol ?setPlayerInVillageDistance@MobSpawnRules@@QEAAAEAV1@I@Z
     * @hash   48817434
     */
    MCAPI class MobSpawnRules & setPlayerInVillageDistance(unsigned int);
    /**
     * @symbol ?setPopulationCap@MobSpawnRules@@QEAAAEAV1@HH@Z
     * @hash   -290184045
     */
    MCAPI class MobSpawnRules & setPopulationCap(int, int);
    /**
     * @symbol ?setRarity@MobSpawnRules@@QEAAAEAV1@H@Z
     * @hash   1209401650
     */
    MCAPI class MobSpawnRules & setRarity(int);
    /**
     * @symbol ?setSpawnDistanceCap@MobSpawnRules@@QEAAAEAV1@H@Z
     * @hash   -5631966
     */
    MCAPI class MobSpawnRules & setSpawnDistanceCap(int);
    /**
     * @symbol ?setSpawnDistances@MobSpawnRules@@QEAAAEAV1@HH@Z
     * @hash   561339233
     */
    MCAPI class MobSpawnRules & setSpawnDistances(int, int);
    /**
     * @symbol ?setSurfaceSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     * @hash   912323209
     */
    MCAPI class MobSpawnRules & setSurfaceSpawner();
    /**
     * @symbol ?setUndergroundSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     * @hash   1626759897
     */
    MCAPI class MobSpawnRules & setUndergroundSpawner();
    /**
     * @symbol ?setUnderwaterSpawner@MobSpawnRules@@QEAAAEAV1@XZ
     * @hash   -1450287733
     */
    MCAPI class MobSpawnRules & setUnderwaterSpawner();
    /**
     * @symbol ?setWorldAgeRange@MobSpawnRules@@QEAAAEAV1@_K0@Z
     * @hash   -356692055
     */
    MCAPI class MobSpawnRules & setWorldAgeRange(unsigned __int64, unsigned __int64);
    /**
     * @symbol ??1MobSpawnRules@@QEAA@XZ
     * @hash   815648968
     */
    MCAPI ~MobSpawnRules();
    /**
     * @symbol ?LOW_END_MAX_SPAWN_DISTANCE@MobSpawnRules@@2HB
     * @hash   1212982749
     */
    MCAPI static int const LOW_END_MAX_SPAWN_DISTANCE;
    /**
     * @symbol ?MAX_DEFAULT_SPAWN_DISTANCE@MobSpawnRules@@2HB
     * @hash   -154431305
     */
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE;
    /**
     * @symbol ?MAX_WORLD_AGE@MobSpawnRules@@2_KB
     * @hash   1429416092
     */
    MCAPI static unsigned __int64 const MAX_WORLD_AGE;
    /**
     * @symbol ?MIN_DEFAULT_SPAWN_DISTANCE@MobSpawnRules@@2HB
     * @hash   283791959
     */
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE;

};