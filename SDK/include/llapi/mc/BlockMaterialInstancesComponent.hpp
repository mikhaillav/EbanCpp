/**
 * @file  BlockMaterialInstancesComponent.hpp
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
 * @brief MC structure BlockMaterialInstancesComponent.
 *
 */
struct BlockMaterialInstancesComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCESCOMPONENT
public:
    struct BlockMaterialInstancesComponent& operator=(struct BlockMaterialInstancesComponent const &) = delete;
    BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent const &) = delete;
    BlockMaterialInstancesComponent() = delete;
#endif

public:
    /**
     * @symbol ??0BlockMaterialInstancesComponent@@QEAA@$$QEAU0@@Z
     * @hash   -856653203
     */
    MCAPI BlockMaterialInstancesComponent(struct BlockMaterialInstancesComponent &&);
    /**
     * @symbol ?getRenderLayer@BlockMaterialInstancesComponent@@QEBA?AW4BlockRenderLayer@@XZ
     * @hash   -1650106042
     */
    MCAPI enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @symbol ??4BlockMaterialInstancesComponent@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -1697587034
     */
    MCAPI struct BlockMaterialInstancesComponent & operator=(struct BlockMaterialInstancesComponent &&);
    /**
     * @symbol ??1BlockMaterialInstancesComponent@@QEAA@XZ
     * @hash   -1898458529
     */
    MCAPI ~BlockMaterialInstancesComponent();

};