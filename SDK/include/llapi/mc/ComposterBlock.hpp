/**
 * @file  ComposterBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MinecraftEventing.hpp"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComposterBlock.
 *
 */
class ComposterBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There
public:

inline void emitBoneMeal(class Level& a1, class BlockSource& a2, class BlockPos const& a3) {
    return _emitBoneMeal(a1,a2,a3);
}

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSTERBLOCK
public:
    class ComposterBlock& operator=(class ComposterBlock const &) = delete;
    ComposterBlock(class ComposterBlock const &) = delete;
    ComposterBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1575090793
     */
    virtual ~ComposterBlock();
    /**
     * @vftbl  9
     * @symbol ?addAABBs@ComposterBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     * @hash   -977068929
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl  11
     * @symbol ?addCollisionShapes@ComposterBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   828370350
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@ComposterBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -1241730434
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
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
     * @hash   -188027329
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@ComposterBlock@@UEBA_NXZ
     * @hash   1646192169
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  74
     * @symbol ?onMove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1564019805
     */
    virtual void onMove(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
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
     * @vftbl  96
     * @symbol ?breaksFallingBlocks@ComposterBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   1422435836
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1391306114
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1385941812
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1394076677
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol ?getComparatorSignal@ComposterBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     * @hash   -198177721
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  146
     * @symbol ?getVariant@ComposterBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1904264369
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  164
     * @symbol ?onRemove@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   914082816
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
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
     * @symbol ?onPlace@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -604400187
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@ComposterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -578264715
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@ComposterBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -126525052
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  193
     * @hash   1575088715
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  194
     * @hash   1359695084
     */
    virtual void __unk_vfn_194();
    /**
     * @vftbl  195
     * @hash   1360572477
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  196
     * @hash   1361465246
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  197
     * @hash   1362388767
     */
    virtual void __unk_vfn_197();
    /**
     * @symbol ?getDescriptionId@BlockLegacy@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -374507947
     */
    MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSTERBLOCK
    /**
     * @symbol ?hasComparatorSignal@ComposterBlock@@UEBA_NXZ
     * @hash   -675778687
     */
    MCVAPI bool hasComparatorSignal() const;
#endif
    /**
     * @symbol ??0ComposterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   568540365
     */
    MCAPI ComposterBlock(std::string const &, int);
    /**
     * @symbol ?addItem@ComposterBlock@@SA_NAEAVContainer@@HAEAVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -1363392944
     */
    MCAPI static bool addItem(class Container &, int, class ItemStack &, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?addItems@ComposterBlock@@SAHAEBVItemStack@@HAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   214685933
     */
    MCAPI static int addItems(class ItemStack const &, int, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?addItems@ComposterBlock@@SA_NAEAVContainer@@HAEAVItemStack@@HAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   307604801
     */
    MCAPI static bool addItems(class Container &, int, class ItemStack &, int, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?empty@ComposterBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -1803675094
     */
    MCAPI static void empty(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?extractItem@ComposterBlock@@SA?AVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -1588004913
     */
    MCAPI static class ItemStack extractItem(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?getComposterAt@ComposterBlock@@SAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1267201135
     */
    MCAPI static class Block const * getComposterAt(class BlockSource &, class BlockPos const &);

//private:
    /**
     * @symbol ?_emitBoneMeal@ComposterBlock@@AEBAXAEAVLevel@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   806066735
     */
    MCAPI void _emitBoneMeal(class Level &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_notifyClientComposterUsed@ComposterBlock@@AEBAXAEBVPlayer@@FW4POIBlockInteractionType@MinecraftEventing@@@Z
     * @hash   -730196424
     */
    MCAPI void _notifyClientComposterUsed(class Player const &, short, enum class MinecraftEventing::POIBlockInteractionType) const;
    /**
     * @symbol ?_getCompostableItems@ComposterBlock@@CAAEBV?$vector@U?$pair@HC@std@@V?$allocator@U?$pair@HC@std@@@2@@std@@AEBVExperiments@@@Z
     * @hash   -475112099
     */
    MCAPI static std::vector<struct std::pair<int, signed char>> const & _getCompostableItems(class Experiments const &);

private:
    /**
     * @symbol ?COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION@ComposterBlock@@0VBaseGameVersion@@B
     * @hash   1337892235
     */
    MCAPI static class BaseGameVersion const COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    /**
     * @symbol ?PARTICLE_OFFSET@ComposterBlock@@0VVec3@@B
     * @hash   477434402
     */
    MCAPI static class Vec3 const PARTICLE_OFFSET;

};