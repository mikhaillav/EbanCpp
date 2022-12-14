/**
 * @file  ComparatorBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComparatorBlockActor.
 *
 */
class ComparatorBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORBLOCKACTOR
public:
    class ComparatorBlockActor& operator=(class ComparatorBlockActor const &) = delete;
    ComparatorBlockActor(class ComparatorBlockActor const &) = delete;
    ComparatorBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   895433768
     */
    virtual ~ComparatorBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@ComparatorBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   194113173
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@ComparatorBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -149978396
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@ComparatorBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1875966798
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -380221563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @hash   -376527479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  28
     * @hash   -346051286
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -308978789
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -288661327
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -322963261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -322039740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -321116219
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  38
     * @symbol ?getOutputSignal@ComparatorBlockActor@@UEAAHXZ
     * @hash   -1878205619
     */
    virtual int getOutputSignal();
    /**
     * @vftbl  39
     * @symbol ?setOutputSignal@ComparatorBlockActor@@UEAAXH@Z
     * @hash   1661445643
     */
    virtual void setOutputSignal(int);
    /**
     * @symbol ??0ComparatorBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -1558383455
     */
    MCAPI ComparatorBlockActor(class BlockPos const &);

};