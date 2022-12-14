/**
 * @file  HopperBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HopperBlock.
 *
 */
class HopperBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERBLOCK
public:
    class HopperBlock& operator=(class HopperBlock const &) = delete;
    HopperBlock(class HopperBlock const &) = delete;
    HopperBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1102584441
     */
    virtual ~HopperBlock();
    /**
     * @vftbl  9
     * @symbol ?addAABBs@HopperBlock@@UEBAXAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
     * @hash   -771559431
     */
    virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /**
     * @vftbl  11
     * @symbol ?addCollisionShapes@HopperBlock@@UEBA_NAEBVBlock@@AEBVBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   715480148
     */
    virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@HopperBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -767460904
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
     * @hash   -279279084
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
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   372342300
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -936140049
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  80
     * @symbol ?getRedstoneProperty@HopperBlock@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1703466672
     */
    virtual enum class BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  96
     * @symbol ?breaksFallingBlocks@HopperBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   -715903966
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@HopperBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   57355905
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@HopperBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   1746756536
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
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
     * @symbol ?getComparatorSignal@HopperBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     * @hash   1627646381
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  156
     * @hash   1479964130
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  164
     * @symbol ?onRemove@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1682150150
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
     * @symbol ?onPlace@HopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -38553333
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  176
     * @hash   1530011088
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  177
     * @symbol ?clip@HopperBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     * @hash   -987434005
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @vftbl  178
     * @symbol ?use@HopperBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -1310269746
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@HopperBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   223928615
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERBLOCK
    /**
     * @symbol ?hasComparatorSignal@HopperBlock@@UEBA_NXZ
     * @hash   -235756569
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @symbol ?isContainerBlock@HopperBlock@@UEBA_NXZ
     * @hash   -2121619739
     */
    MCVAPI bool isContainerBlock() const;
    /**
     * @symbol ?isInteractiveBlock@HopperBlock@@UEBA_NXZ
     * @hash   -829878524
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0HopperBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -207554185
     */
    MCAPI HopperBlock(std::string const &, int);
    /**
     * @symbol ?getAttachedOffset@HopperBlock@@SA?AVBlockPos@@E@Z
     * @hash   -1839553324
     */
    MCAPI static class BlockPos getAttachedOffset(unsigned char);

//private:
    /**
     * @symbol ?_getSpoutAABB@HopperBlock@@AEBA?AVAABB@@AEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1156707878
     */
    MCAPI class AABB _getSpoutAABB(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol ?_installCircuit@HopperBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1304778637
     */
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &) const;

private:
    /**
     * @symbol ?HOPPER_DOESNT_BREAK_FALLING_BLOCK_VERSION@HopperBlock@@0VBaseGameVersion@@B
     * @hash   -1473681269
     */
    MCAPI static class BaseGameVersion const HOPPER_DOESNT_BREAK_FALLING_BLOCK_VERSION;

};