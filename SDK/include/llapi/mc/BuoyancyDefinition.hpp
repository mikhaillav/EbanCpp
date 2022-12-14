/**
 * @file  BuoyancyDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BuoyancyDefinition.
 *
 */
class BuoyancyDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYDEFINITION
public:
    class BuoyancyDefinition& operator=(class BuoyancyDefinition const &) = delete;
    BuoyancyDefinition(class BuoyancyDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0BuoyancyDefinition@@QEAA@XZ
     * @hash   1415678271
     */
    MCAPI BuoyancyDefinition();
    /**
     * @symbol ?initialize@BuoyancyDefinition@@QEBAXAEAVEntityContext@@AEAVBuoyancyComponent@@@Z
     * @hash   -449959799
     */
    MCAPI void initialize(class EntityContext &, class BuoyancyComponent &) const;
    /**
     * @symbol ?uninitialize@BuoyancyDefinition@@QEBAXAEAVEntityContext@@AEAVBuoyancyComponent@@@Z
     * @hash   989061497
     */
    MCAPI void uninitialize(class EntityContext &, class BuoyancyComponent &) const;
    /**
     * @symbol ?buildSchema@BuoyancyDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBuoyancyDefinition@@@JsonUtil@@@std@@@Z
     * @hash   653056742
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BuoyancyDefinition>> &);

//private:
    /**
     * @symbol ?_addLiquidBlockDescriptor@BuoyancyDefinition@@AEAAXAEBVBlockDescriptor@@@Z
     * @hash   -1733811274
     */
    MCAPI void _addLiquidBlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol ?_serialize@BuoyancyDefinition@@AEBA?AVValue@Json@@XZ
     * @hash   1936119305
     */
    MCAPI class Json::Value _serialize() const;

private:

};