/**
 * @file  BambooSapling.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Sapling.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BambooSapling.
 *
 */
class BambooSapling : public Sapling {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BAMBOOSAPLING
public:
    class BambooSapling& operator=(class BambooSapling const &) = delete;
    BambooSapling(class BambooSapling const &) = delete;
    BambooSapling() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   320284690
     */
    virtual ~BambooSapling();
    /**
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@BambooSapling@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   572752137
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
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
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  55
     * @symbol ?isValidAuxValue@BambooSapling@@UEBA_NH@Z
     * @hash   -297527638
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -188027329
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  62
     * @symbol ?canContainLiquid@BambooSapling@@UEBA_NXZ
     * @hash   634545428
     */
    virtual bool canContainLiquid() const;
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
     * @vftbl  86
     * @symbol ?onFertilized@BambooSapling@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     * @hash   974522946
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl  88
     * @symbol ?canBeFertilized@BambooSapling@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1206258839
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@BambooSapling@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   419643132
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@BambooSapling@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1698953066
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@BambooSapling@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   311144918
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
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
     * @vftbl  134
     * @symbol ?isAuxValueRelevantForPicking@BambooSapling@@UEBA_NXZ
     * @hash   586808736
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl  146
     * @symbol ?getVariant@BambooSapling@@UEBAHAEBVBlock@@@Z
     * @hash   1265823124
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  157
     * @symbol ?getSilkTouchItemInstance@BambooSapling@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -1547586757
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
     * @symbol ?playerDestroy@BambooSapling@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -689987064
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  174
     * @symbol ?randomTick@BambooSapling@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -842231481
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@BambooSapling@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -2033931860
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@BambooSapling@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1102185070
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @symbol ??0BambooSapling@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   282828530
     */
    MCAPI BambooSapling(std::string const &, int);

//private:
    /**
     * @symbol ?_grow@BambooSapling@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   229252449
     */
    MCAPI bool _grow(class BlockSource &, class BlockPos const &) const;

private:

};