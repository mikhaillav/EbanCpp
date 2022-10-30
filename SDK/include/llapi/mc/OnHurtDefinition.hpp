/**
 * @file  OnHurtDefinition.hpp
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
 * @brief MC structure OnHurtDefinition.
 *
 */
struct OnHurtDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONHURTDEFINITION
public:
    struct OnHurtDefinition& operator=(struct OnHurtDefinition const &) = delete;
    OnHurtDefinition(struct OnHurtDefinition const &) = delete;
    OnHurtDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@OnHurtDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnHurtDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -1088394518
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnHurtDefinition>> &);

};