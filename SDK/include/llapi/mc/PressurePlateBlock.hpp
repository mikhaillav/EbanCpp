/**
 * @file  PressurePlateBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BasePressurePlateBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PressurePlateBlock.
 *
 */
class PressurePlateBlock : public BasePressurePlateBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRESSUREPLATEBLOCK
public:
    class PressurePlateBlock& operator=(class PressurePlateBlock const &) = delete;
    PressurePlateBlock(class PressurePlateBlock const &) = delete;
    PressurePlateBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1065855238
     */
    virtual ~PressurePlateBlock();
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
     * @vftbl  102
     * @symbol ?asItemInstance@PressurePlateBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   1547014542
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
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@PressurePlateBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1179128454
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  194
     * @symbol ?getSignalStrength@PressurePlateBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   700819885
     */
    virtual int getSignalStrength(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  195
     * @symbol ?getSignalForData@PressurePlateBlock@@MEBAHH@Z
     * @hash   -12590176
     */
    virtual int getSignalForData(int) const;
    /**
     * @vftbl  196
     * @symbol ?getRedstoneSignal@PressurePlateBlock@@MEBAHH@Z
     * @hash   1712330547
     */
    virtual int getRedstoneSignal(int) const;
    /**
     * @symbol ??0PressurePlateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@W4Sensitivity@0@@Z
     * @hash   752315186
     */
    MCAPI PressurePlateBlock(std::string const &, int, class Material const &, enum class PressurePlateBlock::Sensitivity);

};