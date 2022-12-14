/**
 * @file  IsShakingDefinition.hpp
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
 * @brief MC structure IsShakingDefinition.
 *
 */
struct IsShakingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSHAKINGDEFINITION
public:
    struct IsShakingDefinition& operator=(struct IsShakingDefinition const &) = delete;
    IsShakingDefinition(struct IsShakingDefinition const &) = delete;
    IsShakingDefinition() = delete;
#endif

public:
    /**
     * @symbol ?initialize@IsShakingDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   1166086222
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@IsShakingDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   -575134788
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@IsShakingDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsShakingDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -2145938218
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsShakingDefinition>> &);

};