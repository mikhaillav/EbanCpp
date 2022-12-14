/**
 * @file  CappedSurfaceAttributes.hpp
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
 * @brief MC structure CappedSurfaceAttributes.
 *
 */
struct CappedSurfaceAttributes {

#define AFTER_EXTRA
// Add Member There
struct MaterialLayer {
    MaterialLayer() = delete;
    MaterialLayer(MaterialLayer const&) = delete;
    MaterialLayer(MaterialLayer const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPPEDSURFACEATTRIBUTES
public:
    struct CappedSurfaceAttributes& operator=(struct CappedSurfaceAttributes const &) = delete;
    CappedSurfaceAttributes(struct CappedSurfaceAttributes const &) = delete;
    CappedSurfaceAttributes() = delete;
#endif

public:
    /**
     * @symbol ?getCeilingMaterial@CappedSurfaceAttributes@@QEBAPEBVBlock@@AEBVVec3@@@Z
     * @hash   1709166636
     */
    MCAPI class Block const * getCeilingMaterial(class Vec3 const &) const;
    /**
     * @symbol ?getFloorMaterial@CappedSurfaceAttributes@@QEBAPEBVBlock@@AEBVVec3@@@Z
     * @hash   230172700
     */
    MCAPI class Block const * getFloorMaterial(class Vec3 const &) const;
    /**
     * @symbol ?initializeNoise@CappedSurfaceAttributes@@QEAAXI@Z
     * @hash   39140156
     */
    MCAPI void initializeNoise(unsigned int);
    /**
     * @symbol ??4CappedSurfaceAttributes@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -1784745282
     */
    MCAPI struct CappedSurfaceAttributes & operator=(struct CappedSurfaceAttributes &&);
    /**
     * @symbol ??1CappedSurfaceAttributes@@QEAA@XZ
     * @hash   -581321117
     */
    MCAPI ~CappedSurfaceAttributes();
    /**
     * @symbol ?getRandomBlock@CappedSurfaceAttributes@@SAPEBVBlock@@AEBV?$vector@UMaterialLayer@CappedSurfaceAttributes@@V?$allocator@UMaterialLayer@CappedSurfaceAttributes@@@std@@@std@@AEBVVec3@@@Z
     * @hash   -1284960283
     */
    MCAPI static class Block const * getRandomBlock(std::vector<struct CappedSurfaceAttributes::MaterialLayer> const &, class Vec3 const &);

};