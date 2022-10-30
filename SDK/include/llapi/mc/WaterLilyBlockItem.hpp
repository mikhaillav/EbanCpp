/**
 * @file  WaterLilyBlockItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaterLilyBlockItem.
 *
 */
class WaterLilyBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERLILYBLOCKITEM
public:
    class WaterLilyBlockItem& operator=(class WaterLilyBlockItem const &) = delete;
    WaterLilyBlockItem(class WaterLilyBlockItem const &) = delete;
    WaterLilyBlockItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1729755401
     */
    virtual ~WaterLilyBlockItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  57
     * @symbol ?isLiquidClipItem@WaterLilyBlockItem@@UEBA_NH@Z
     * @hash   -815149605
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -158474657
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  131
     * @symbol ?_calculatePlacePos@WaterLilyBlockItem@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     * @hash   -282294944
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@WaterLilyBlockItem@@UEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   -2005578465
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0WaterLilyBlockItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   756726429
     */
    MCAPI WaterLilyBlockItem(std::string const &, int);

};