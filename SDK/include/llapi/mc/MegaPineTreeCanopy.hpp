/**
 * @file  MegaPineTreeCanopy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MegaPineTreeCanopy.
 *
 */
class MegaPineTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEGAPINETREECANOPY
public:
    class MegaPineTreeCanopy& operator=(class MegaPineTreeCanopy const &) = delete;
    MegaPineTreeCanopy(class MegaPineTreeCanopy const &) = delete;
    MegaPineTreeCanopy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   544439442
     */
    virtual ~MegaPineTreeCanopy();
    /**
     * @vftbl  1
     * @symbol ?placeCanopy@MegaPineTreeCanopy@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@AEBUTreeParams@TreeHelper@@AEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@3@@Z
     * @hash   -302226434
     */
    virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &, struct TreeHelper::TreeParams const &, std::vector<class BlockPos> const &) const;

};