/**
 * @file  CoralFeature.hpp
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
 * @brief MC class CoralFeature.
 *
 */
class CoralFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALFEATURE
public:
    class CoralFeature& operator=(class CoralFeature const &) = delete;
    CoralFeature(class CoralFeature const &) = delete;
    CoralFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -848848561
     */
    virtual ~CoralFeature();
    /**
     * @vftbl  3
     * @symbol ?place@CoralFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1933499681
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol ?_buildHand@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
     * @hash   -349458677
     */
    MCAPI void _buildHand(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @symbol ?_buildPlantArm@CoralFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@8@E_N@Z
     * @hash   -1867690806
     */
    MCAPI void _buildPlantArm(class BlockSource &, class Random &, class BlockPos const &, class gsl::not_null<class Block const *>, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, unsigned char, bool) const;
    /**
     * @symbol ?_buildPlantLike@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
     * @hash   -169805968
     */
    MCAPI void _buildPlantLike(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @symbol ?_buildSmallClump@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
     * @hash   -1838343292
     */
    MCAPI void _buildSmallClump(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @symbol ?_buildSpire@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@AEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEAV?$vector@U?$pair@VBlockPos@@E@std@@V?$allocator@U?$pair@VBlockPos@@E@std@@@2@@6@V?$not_null@PEBVBlock@@@gsl@@@Z
     * @hash   323618541
     */
    MCAPI void _buildSpire(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, class gsl::not_null<class Block const *>) const;
    /**
     * @symbol ?_placeSideDecorations@CoralFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@E@Z
     * @hash   784965548
     */
    MCAPI void _placeSideDecorations(class BlockSource &, class BlockPos const &, class Random &, unsigned char) const;
    /**
     * @symbol ?_randomDirectionExcept@CoralFeature@@AEBAEAEAVRandom@@E@Z
     * @hash   -1193973613
     */
    MCAPI unsigned char _randomDirectionExcept(class Random &, unsigned char) const;
    /**
     * @symbol ?_setBlock@CoralFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@H@Z
     * @hash   792715305
     */
    MCAPI bool _setBlock(class BlockSource &, class BlockPos const &, class gsl::not_null<class Block const *>, int) const;
    /**
     * @symbol ?_setBlockOnSolid@CoralFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@H@Z
     * @hash   -1295969567
     */
    MCAPI bool _setBlockOnSolid(class BlockSource &, class BlockPos const &, class gsl::not_null<class Block const *>, int) const;
    /**
     * @symbol ?_starCorners@CoralFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@MH_N@Z
     * @hash   2119780417
     */
    MCAPI void _starCorners(class BlockSource &, class Random &, class BlockPos const &, class gsl::not_null<class Block const *>, float, int, bool) const;
    /**
     * @symbol ?_starFormation@CoralFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@V?$not_null@PEBVBlock@@@gsl@@MH_N@Z
     * @hash   907936558
     */
    MCAPI void _starFormation(class BlockSource &, class Random &, class BlockPos const &, class gsl::not_null<class Block const *>, float, int, bool) const;

private:

};