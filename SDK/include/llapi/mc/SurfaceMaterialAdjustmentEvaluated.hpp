/**
 * @file  SurfaceMaterialAdjustmentEvaluated.hpp
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
 * @brief MC structure SurfaceMaterialAdjustmentEvaluated.
 *
 */
struct SurfaceMaterialAdjustmentEvaluated {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEMATERIALADJUSTMENTEVALUATED
public:
    struct SurfaceMaterialAdjustmentEvaluated& operator=(struct SurfaceMaterialAdjustmentEvaluated const &) = delete;
    SurfaceMaterialAdjustmentEvaluated(struct SurfaceMaterialAdjustmentEvaluated const &) = delete;
    SurfaceMaterialAdjustmentEvaluated() = delete;
#endif

public:
    /**
     * @symbol ?empty@SurfaceMaterialAdjustmentEvaluated@@QEBA_NXZ
     * @hash   -2138444650
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?makeAdjustments@SurfaceMaterialAdjustmentEvaluated@@QEBAXAEAUSurfaceMaterialBlocks@@H@Z
     * @hash   -2078900291
     */
    MCAPI void makeAdjustments(struct SurfaceMaterialBlocks &, int) const;
    /**
     * @symbol ??1SurfaceMaterialAdjustmentEvaluated@@QEAA@XZ
     * @hash   -1128634540
     */
    MCAPI ~SurfaceMaterialAdjustmentEvaluated();

};