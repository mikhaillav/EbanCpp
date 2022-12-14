/**
 * @file  DiscFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DiscFeature.
 *
 */
class DiscFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISCFEATURE
public:
    class DiscFeature& operator=(class DiscFeature const &) = delete;
    DiscFeature(class DiscFeature const &) = delete;
    DiscFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1917113233
     */
    virtual ~DiscFeature();
    /**
     * @vftbl  3
     * @symbol ?place@DiscFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1685603259
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0DiscFeature@@QEAA@AEBVBlock@@H@Z
     * @hash   -62926027
     */
    MCAPI DiscFeature(class Block const &, int);

};