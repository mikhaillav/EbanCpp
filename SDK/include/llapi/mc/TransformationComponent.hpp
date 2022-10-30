/**
 * @file  TransformationComponent.hpp
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
 * @brief MC class TransformationComponent.
 *
 */
class TransformationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMATIONCOMPONENT
public:
    class TransformationComponent& operator=(class TransformationComponent const &) = delete;
    TransformationComponent(class TransformationComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0TransformationComponent@@QEAA@XZ
     * @hash   971435856
     */
    MCAPI TransformationComponent();
    /**
     * @symbol ?getDelayTicks@TransformationComponent@@QEBAHXZ
     * @hash   -1934997222
     */
    MCAPI int getDelayTicks() const;
    /**
     * @symbol ?initFromDefinition@TransformationComponent@@QEAAXAEAVActor@@@Z
     * @hash   1156568802
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?maintainOldData@TransformationComponent@@QEAAXAEAVActor@@0AEBUTransformationDescription@@AEBUActorUniqueID@@AEBVLevel@@@Z
     * @hash   -594066932
     */
    MCAPI void maintainOldData(class Actor &, class Actor &, struct TransformationDescription const &, struct ActorUniqueID const &, class Level const &);
    /**
     * @symbol ?reloadComponent@TransformationComponent@@QEAAXAEAVActor@@@Z
     * @hash   185137698
     */
    MCAPI void reloadComponent(class Actor &);
    /**
     * @symbol ?setDelayTicks@TransformationComponent@@QEAAXH@Z
     * @hash   1009022412
     */
    MCAPI void setDelayTicks(int);
    /**
     * @symbol ?transformIfAble@TransformationComponent@@QEAAXAEAVActor@@_N@Z
     * @hash   -942204003
     */
    MCAPI void transformIfAble(class Actor &, bool);

};