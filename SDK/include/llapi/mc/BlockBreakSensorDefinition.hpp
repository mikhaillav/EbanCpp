/**
 * @file  BlockBreakSensorDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockBreakSensorDefinition.
 *
 */
class BlockBreakSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREAKSENSORDEFINITION
public:
    class BlockBreakSensorDefinition& operator=(class BlockBreakSensorDefinition const &) = delete;
    BlockBreakSensorDefinition(class BlockBreakSensorDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockBreakSensorDefinition@@QEAA@XZ
     * @hash   -1723036917
     */
    MCAPI BlockBreakSensorDefinition();
    /**
     * @symbol ?initialize@BlockBreakSensorDefinition@@QEAAXAEAVEntityContext@@AEAVBlockBreakSensorComponent@@@Z
     * @hash   -1545979901
     */
    MCAPI void initialize(class EntityContext &, class BlockBreakSensorComponent &);
    /**
     * @symbol ?buildSchema@BlockBreakSensorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBlockBreakSensorDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -35713706
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BlockBreakSensorDefinition>> &);

};