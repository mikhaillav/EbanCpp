/**
 * @file  GiveableDefinition.hpp
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
 * @brief MC class GiveableDefinition.
 *
 */
class GiveableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLEDEFINITION
public:
    class GiveableDefinition& operator=(class GiveableDefinition const &) = delete;
    GiveableDefinition(class GiveableDefinition const &) = delete;
    GiveableDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addGiveableTrigger@GiveableDefinition@@QEAAXAEBUGiveableTrigger@@@Z
     * @hash   -1780933960
     */
    MCAPI void addGiveableTrigger(struct GiveableTrigger const &);
    /**
     * @symbol ?initialize@GiveableDefinition@@QEAAXAEAVEntityContext@@AEAVGiveableComponent@@@Z
     * @hash   2071014545
     */
    MCAPI void initialize(class EntityContext &, class GiveableComponent &);
    /**
     * @symbol ?buildSchema@GiveableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGiveableDefinition@@@JsonUtil@@@std@@@Z
     * @hash   1883017990
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GiveableDefinition>> &);

};