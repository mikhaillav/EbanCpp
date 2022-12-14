/**
 * @file  TopSnowBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TopSnowBlock.
 *
 */
class TopSnowBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOPSNOWBLOCK
public:
    class TopSnowBlock& operator=(class TopSnowBlock const &) = delete;
    TopSnowBlock(class TopSnowBlock const &) = delete;
    TopSnowBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2073893185
     */
    virtual ~TopSnowBlock();
    /**
     * @vftbl  5
     * @symbol ?getCollisionShape@TopSnowBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   -1011022437
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@TopSnowBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1426875019
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -295155765
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -274838303
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -272991261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -272067740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -271144219
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?isWaterBlocking@TopSnowBlock@@UEBA_NXZ
     * @hash   290989765
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  36
     * @hash   -269297177
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -268373656
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -267450135
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -266526614
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -245285631
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -244362110
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -242515068
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -241591547
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -240668026
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -239744505
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -238820984
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -237897463
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -188950850
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -195238673
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@TopSnowBlock@@UEBA_NXZ
     * @hash   -1549019101
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  69
     * @symbol ?checkIsPathable@TopSnowBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   399653865
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  84
     * @symbol ?isPreservingMediumWhenPlaced@TopSnowBlock@@UEBA_NPEBVBlockLegacy@@@Z
     * @hash   315190251
     */
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -982049989
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  94
     * @symbol ?tryToPlace@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEBUActorBlockSyncMessage@@@Z
     * @hash   -1832418638
     */
    virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /**
     * @vftbl  96
     * @symbol ?breaksFallingBlocks@TopSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   -1489418730
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  98
     * @symbol ?playerWillDestroy@TopSnowBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1015223321
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -924174425
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@TopSnowBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   2093548245
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@TopSnowBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   427085924
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  114
     * @symbol ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlockItem@@@Z
     * @hash   2144154063
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /**
     * @vftbl  115
     * @symbol ?canBeBuiltOver@TopSnowBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   854229960
     */
    virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  122
     * @symbol ?shouldStopFalling@TopSnowBlock@@UEBA_NAEAVActor@@@Z
     * @hash   296748944
     */
    virtual bool shouldStopFalling(class Actor &) const;
    /**
     * @vftbl  123
     * @hash   1391306114
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  124
     * @symbol ?calcGroundFriction@TopSnowBlock@@UEBAMAEBUIMobMovementProxy@@AEBVBlockPos@@@Z
     * @hash   1125261253
     */
    virtual float calcGroundFriction(struct IMobMovementProxy const &, class BlockPos const &) const;
    /**
     * @vftbl  125
     * @hash   1393153156
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1386865333
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  143
     * @symbol ?getVisualShape@TopSnowBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   2132353615
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  156
     * @hash   1479964130
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  165
     * @symbol ?onExploded@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     * @hash   -1234004392
     */
    virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /**
     * @vftbl  167
     * @hash   1459544802
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1460468323
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1461391844
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol ?onPlace@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -248424305
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @symbol ?playerDestroy@TopSnowBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1818618743
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -447136677
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol ?randomTick@TopSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   48930216
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  188
     * @symbol ?getResourceCount@TopSnowBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1536887957
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@TopSnowBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1712002307
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  193
     * @symbol ?getDustColor@TopSnowBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     * @hash   -502541471
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @vftbl  194
     * @symbol ?getDustParticleName@TopSnowBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   -64340596
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl  195
     * @hash   1593557213
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  197
     * @symbol ?isFreeToFall@TopSnowBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   257097838
     */
    virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  198
     * @symbol ?startFalling@TopSnowBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
     * @hash   -331817227
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TOPSNOWBLOCK
    /**
     * @symbol ?canBeDestroyedByWaterSpread@TopSnowBlock@@UEBA_NXZ
     * @hash   -1481707456
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const;
    /**
     * @symbol ?canBeSilkTouched@TopSnowBlock@@MEBA_NXZ
     * @hash   -611419662
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?canHaveExtraData@TopSnowBlock@@UEBA_NXZ
     * @hash   641382837
     */
    MCVAPI bool canHaveExtraData() const;
    /**
     * @symbol ?waterSpreadCausesSpawn@TopSnowBlock@@UEBA_NXZ
     * @hash   -2038989014
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0TopSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   95967219
     */
    MCAPI TopSnowBlock(std::string const &, int);
    /**
     * @symbol ?getResourceItemFromFalling@TopSnowBlock@@QEBA?AVItemInstance@@XZ
     * @hash   -1716408320
     */
    MCAPI class ItemInstance getResourceItemFromFalling() const;
    /**
     * @symbol ?melt@TopSnowBlock@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -667287979
     */
    MCAPI bool melt(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?startFallingIfLostSupport@TopSnowBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -351133198
     */
    MCAPI void startFallingIfLostSupport(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?buildSnowBlock@TopSnowBlock@@SAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -1494270134
     */
    MCAPI static class Block const & buildSnowBlock(class BlockSource &, class BlockPos const &, int, bool);
    /**
     * @symbol ?getCoveredBlock@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1495514784
     */
    MCAPI static class Block const & getCoveredBlock(class BlockSource const &, class BlockPos const &);
    /**
     * @symbol ?getSnowBlockToBuild@TopSnowBlock@@SAAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -637156484
     */
    MCAPI static class Block const & getSnowBlockToBuild(class BlockSource const &, class BlockPos const &, int, bool);

//private:
    /**
     * @symbol ?_canBeBuiltOver@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@PEBVBlockItem@@@Z
     * @hash   -681919609
     */
    MCAPI bool _canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const *) const;
    /**
     * @symbol ?_canSurvive@TopSnowBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   615763887
     */
    MCAPI bool _canSurvive(class BlockSource &, class BlockPos const &) const;

private:

};