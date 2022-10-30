/**
 * @file  PillagerOutpostStart.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PillagerOutpostStart.
 *
 */
class PillagerOutpostStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGEROUTPOSTSTART
public:
    class PillagerOutpostStart& operator=(class PillagerOutpostStart const &) = delete;
    PillagerOutpostStart(class PillagerOutpostStart const &) = delete;
    PillagerOutpostStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   679358090
     */
    virtual ~PillagerOutpostStart();
    /**
     * @vftbl  1
     * @symbol ?postProcess@PillagerOutpostStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   390678125
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};