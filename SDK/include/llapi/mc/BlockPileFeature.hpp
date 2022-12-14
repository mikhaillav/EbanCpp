/**
 * @file  BlockPileFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockPileFeature.
 *
 */
class BlockPileFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPILEFEATURE
public:
    class BlockPileFeature& operator=(class BlockPileFeature const &) = delete;
    BlockPileFeature(class BlockPileFeature const &) = delete;
    BlockPileFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1412167071
     */
    virtual ~BlockPileFeature();
    /**
     * @vftbl  3
     * @symbol ?place@BlockPileFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   125339601
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  4
     * @symbol ?getBlockToPlace@BlockPileFeature@@MEBAAEBVBlock@@AEAVRandom@@@Z
     * @hash   -95852880
     */
    virtual class Block const & getBlockToPlace(class Random &) const;
    /**
     * @symbol ??0BlockPileFeature@@QEAA@AEBVBlock@@@Z
     * @hash   -645438136
     */
    MCAPI BlockPileFeature(class Block const &);

};