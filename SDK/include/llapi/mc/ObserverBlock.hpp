/**
 * @file  ObserverBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ObserverBlock.
 *
 */
class ObserverBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OBSERVERBLOCK
public:
    class ObserverBlock& operator=(class ObserverBlock const &) = delete;
    ObserverBlock(class ObserverBlock const &) = delete;
    ObserverBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   116216997
     */
    virtual ~ObserverBlock();
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
     * @vftbl  51
     * @symbol ?isSignalSource@ObserverBlock@@UEBA_NXZ
     * @hash   -1397486338
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  55
     * @symbol ?isValidAuxValue@ObserverBlock@@UEBA_NH@Z
     * @hash   -2140875555
     */
    virtual bool isValidAuxValue(int) const;
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
     * @vftbl  64
     * @symbol ?shouldConnectToRedstone@ObserverBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -854593008
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  73
     * @symbol ?onRedstoneUpdate@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   -383167106
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  76
     * @symbol ?movedByPiston@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -2012094040
     */
    virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  79
     * @symbol ?setupRedstoneComponent@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1324837663
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1020760439
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@ObserverBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   479682291
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  103
     * @symbol ?spawnResources@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@@Z
     * @hash   606689511
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, struct ResourceDropsContext const &, std::vector<class Item const *> *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@ObserverBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   1326077910
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
     * @vftbl  146
     * @symbol ?getVariant@ObserverBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1636776969
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  149
     * @symbol ?getMappedFace@ObserverBlock@@UEBAEEAEBVBlock@@@Z
     * @hash   1199312119
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @vftbl  150
     * @symbol ?getFaceFlip@ObserverBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
     * @hash   124087691
     */
    virtual enum class Flip getFaceFlip(unsigned char, class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
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
     * @symbol ?onPlace@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1923612157
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1914621165
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
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
     * @symbol ??0ObserverBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1667004677
     */
    MCAPI ObserverBlock(std::string const &, int);

//private:
    /**
     * @symbol ?_installCircuit@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N2@Z
     * @hash   -518546321
     */
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool, bool) const;
    /**
     * @symbol ?_updateState@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVPulseCapacitor@@_N@Z
     * @hash   1907344540
     */
    MCAPI void _updateState(class BlockSource &, class BlockPos const &, class PulseCapacitor &, bool) const;

private:

};