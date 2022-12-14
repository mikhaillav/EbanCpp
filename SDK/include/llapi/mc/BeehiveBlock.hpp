/**
 * @file  BeehiveBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FaceDirectionalActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeehiveBlock.
 *
 */
class BeehiveBlock : public FaceDirectionalActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEEHIVEBLOCK
public:
    class BeehiveBlock& operator=(class BeehiveBlock const &) = delete;
    BeehiveBlock(class BeehiveBlock const &) = delete;
    BeehiveBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1067075195
     */
    virtual ~BeehiveBlock();
    /**
     * @vftbl  3
     * @symbol ?getNextBlockPermutation@BeehiveBlock@@UEBAPEBVBlock@@AEBV2@@Z
     * @hash   -1018361545
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
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
     * @vftbl  98
     * @symbol ?playerWillDestroy@BeehiveBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1532559905
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@BeehiveBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   -1579889905
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  118
     * @symbol ?executeEvent@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVActor@@@Z
     * @hash   -1430348273
     */
    virtual void executeEvent(class BlockSource &, class BlockPos const &, class Block const &, std::string const &, class Actor &) const;
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
     * @symbol ?getComparatorSignal@BeehiveBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     * @hash   -481689109
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  146
     * @symbol ?getVariant@BeehiveBlock@@UEBAHAEBVBlock@@@Z
     * @hash   1300836299
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  149
     * @symbol ?getMappedFace@BeehiveBlock@@UEBAEEAEBVBlock@@@Z
     * @hash   -2060703581
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @vftbl  151
     * @symbol ?animateTick@BeehiveBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -415948672
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  156
     * @hash   1479964130
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
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  178
     * @symbol ?use@BeehiveBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -2044837760
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@BeehiveBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1708887001
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEEHIVEBLOCK
    /**
     * @symbol ?canBeSilkTouched@BeehiveBlock@@UEBA_NXZ
     * @hash   1403638195
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?hasComparatorSignal@BeehiveBlock@@UEBA_NXZ
     * @hash   -1528244507
     */
    MCVAPI bool hasComparatorSignal() const;
#endif
    /**
     * @symbol ??0BeehiveBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -72806423
     */
    MCAPI BeehiveBlock(std::string const &, int);
    /**
     * @symbol ?emitHoneyComb@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -251994879
     */
    MCAPI void emitHoneyComb(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?evictAll@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     * @hash   -40276520
     */
    MCAPI void evictAll(class BlockSource &, class BlockPos const &, bool) const;
    /**
     * @symbol ?onPlayerPlace@BeehiveBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   907310797
     */
    MCAPI void onPlayerPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?deliverNectar@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   1413077392
     */
    MCAPI static void deliverNectar(class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?hasHoneyToHarvest@BeehiveBlock@@SA_NAEBVBlock@@@Z
     * @hash   -65035311
     */
    MCAPI static bool hasHoneyToHarvest(class Block const &);
    /**
     * @symbol ?resetHoneyLevel@BeehiveBlock@@SAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   -184706244
     */
    MCAPI static void resetHoneyLevel(class BlockSource &, class Block const &, class BlockPos const &);

//private:
    /**
     * @symbol ?_fillHoneyBottle@BeehiveBlock@@AEBAXAEAVPlayer@@AEAVItemStack@@1AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -50666920
     */
    MCAPI void _fillHoneyBottle(class Player &, class ItemStack &, class ItemStack &, class BlockSource &, class BlockPos const &) const;

private:

};