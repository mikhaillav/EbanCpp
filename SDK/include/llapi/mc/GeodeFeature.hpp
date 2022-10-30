/**
 * @file  GeodeFeature.hpp
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
 * @brief MC class GeodeFeature.
 *
 */
class GeodeFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GEODEFEATURE
public:
    class GeodeFeature& operator=(class GeodeFeature const &) = delete;
    GeodeFeature(class GeodeFeature const &) = delete;
    GeodeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1053746354
     */
    virtual ~GeodeFeature();
    /**
     * @vftbl  1
     * @symbol ?place@GeodeFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   1125205993
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol ?canSupportGeode@GeodeFeature@@SA_NAEBVBlock@@@Z
     * @hash   -1339705209
     */
    MCAPI static bool canSupportGeode(class Block const &);

};