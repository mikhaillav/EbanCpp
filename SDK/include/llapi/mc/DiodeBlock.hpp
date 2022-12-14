/**
 * @file  DiodeBlock.hpp
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
 * @brief MC class DiodeBlock.
 *
 */
class DiodeBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIODEBLOCK
public:
    class DiodeBlock& operator=(class DiodeBlock const &) = delete;
    DiodeBlock(class DiodeBlock const &) = delete;
    DiodeBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   849213836
     */
    virtual ~DiodeBlock();
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
     * @symbol ?isSignalSource@DiodeBlock@@UEBA_NXZ
     * @hash   450928787
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  59
     * @symbol ?getDirectSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -918092857
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
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
     * @symbol ?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     * @hash   358720355
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
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
     * @vftbl  92
     * @symbol ?mayPlace@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -500473250
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1088167756
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@DiodeBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   137218049
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
     * @symbol ?getVariant@DiodeBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1880319326
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  147
     * @symbol ?canSpawnOn@DiodeBlock@@UEBA_NPEAVActor@@@Z
     * @hash   -600638831
     */
    virtual bool canSpawnOn(class Actor *) const;
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
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   669986638
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  193
     * @symbol ?getSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -195237408
     */
    virtual int getSignal(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  194
     * @symbol ?isLocked@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -968558192
     */
    virtual bool isLocked(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  195
     * @symbol ?isSameDiode@DiodeBlock@@UEBA_NAEBVBlock@@@Z
     * @hash   -360530647
     */
    virtual bool isSameDiode(class Block const &) const;
    /**
     * @vftbl  196
     * @symbol ?shouldPrioritize@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1720930322
     */
    virtual bool shouldPrioritize(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  197
     * @symbol ?isOn@DiodeBlock@@MEBA_NXZ
     * @hash   -1912844024
     */
    virtual bool isOn() const;
    /**
     * @vftbl  198
     * @symbol ?shouldTurnOn@DiodeBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1440776180
     */
    virtual bool shouldTurnOn(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  199
     * @symbol ?getInputSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1965559860
     */
    virtual int getInputSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  200
     * @symbol ?isAlternateInput@DiodeBlock@@MEBA_NAEBVBlock@@@Z
     * @hash   1460485633
     */
    virtual bool isAlternateInput(class Block const &) const;
    /**
     * @vftbl  201
     * @symbol ?getAlternateSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -163366956
     */
    virtual int getAlternateSignal(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  202
     * @symbol ?getOutputSignal@DiodeBlock@@MEBAHAEBVBlock@@@Z
     * @hash   -1298017735
     */
    virtual int getOutputSignal(class Block const &) const;
    /**
     * @vftbl  203
     * @symbol ?getTurnOffDelay@DiodeBlock@@MEBAHAEBVBlock@@@Z
     * @hash   -1951181247
     */
    virtual int getTurnOffDelay(class Block const &) const;
    /**
     * @vftbl  204
     * @symbol ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
     * @hash   757956690
     */
    virtual int getTurnOnDelay(class Block const &) const = 0;
    /**
     * @vftbl  205
     * @symbol ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
     * @hash   832630566
     */
    virtual class Block const * getOnBlock(class Block const *) const = 0;
    /**
     * @vftbl  206
     * @symbol ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
     * @hash   -3199798
     */
    virtual class Block const * getOffBlock(class Block const *) const = 0;
    /**
     * @symbol ??0DiodeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     * @hash   1153067691
     */
    MCAPI DiodeBlock(std::string const &, int, bool);
    /**
     * @symbol ?isDiode@DiodeBlock@@SA_NAEBVBlock@@@Z
     * @hash   -272264185
     */
    MCAPI static bool isDiode(class Block const &);

//protected:
    /**
     * @symbol ?getAlternateSignalAt@DiodeBlock@@IEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   193684395
     */
    MCAPI int getAlternateSignalAt(class BlockSource &, class BlockPos const &, int) const;

protected:

};