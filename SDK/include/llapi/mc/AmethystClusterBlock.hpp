/**
 * @file  AmethystClusterBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AmethystBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AmethystClusterBlock.
 *
 */
class AmethystClusterBlock : public AmethystBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMETHYSTCLUSTERBLOCK
public:
    class AmethystClusterBlock& operator=(class AmethystClusterBlock const &) = delete;
    AmethystClusterBlock(class AmethystClusterBlock const &) = delete;
    AmethystClusterBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   791337770
     */
    virtual ~AmethystClusterBlock();
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@AmethystClusterBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   394118463
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
     * @hash   -221097261
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
     * @vftbl  69
     * @symbol ?checkIsPathable@AmethystClusterBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   654888036
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
     * @vftbl  91
     * @symbol ?mayPlace@AmethystClusterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   1040202651
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@AmethystClusterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1762821488
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@AmethystClusterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   1068143058
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@AmethystClusterBlock@@EEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   430558044
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  103
     * @symbol ?spawnResources@AmethystClusterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     * @hash   1256109822
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &, std::vector<class Item const *> *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@AmethystClusterBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   1463840287
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  123
     * @hash   1391306114
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1393153156
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1394076677
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  143
     * @symbol ?getVisualShape@AmethystClusterBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -2090870326
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  152
     * @symbol ?init@AmethystClusterBlock@@UEAAAEAVBlockLegacy@@XZ
     * @hash   1686637603
     */
    virtual class BlockLegacy & init();
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  157
     * @symbol ?getSilkTouchItemInstance@AmethystClusterBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -372410265
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
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
     * @vftbl  172
     * @symbol ?playerDestroy@AmethystClusterBlock@@EEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -305575966
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@AmethystClusterBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1656658358
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@AmethystClusterBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -353079520
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@AmethystClusterBlock@@EEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1430693076
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @symbol ??0AmethystClusterBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
     * @hash   1289800174
     */
    MCAPI AmethystClusterBlock(std::string const &, int, int, int);

//private:
    /**
     * @symbol ?_shapeFromDirection@AmethystClusterBlock@@AEBA?AVAABB@@H@Z
     * @hash   1327565606
     */
    MCAPI class AABB _shapeFromDirection(int) const;

private:

};