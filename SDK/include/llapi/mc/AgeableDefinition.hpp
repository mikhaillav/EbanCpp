/**
 * @file  AgeableDefinition.hpp
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
 * @brief MC class AgeableDefinition.
 *
 */
class AgeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGEABLEDEFINITION
public:
    class AgeableDefinition& operator=(class AgeableDefinition const &) = delete;
    AgeableDefinition(class AgeableDefinition const &) = delete;
    AgeableDefinition() = delete;
#endif

public:
    /**
     * @symbol ?addDropItem@AgeableDefinition@@QEAAXAEBVItemDescriptor@@@Z
     * @hash   -135306658
     */
    MCAPI void addDropItem(class ItemDescriptor const &);
    /**
     * @symbol ?addFeedItem@AgeableDefinition@@QEAAXAEBUActorDefinitionFeedItem@@@Z
     * @hash   1652327260
     */
    MCAPI void addFeedItem(struct ActorDefinitionFeedItem const &);
    /**
     * @symbol ?addFeedItemByName@AgeableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1196907732
     */
    MCAPI void addFeedItemByName(std::string const &);
    /**
     * @symbol ?canGrowUp@AgeableDefinition@@QEBA_NXZ
     * @hash   -1523473002
     */
    MCAPI bool canGrowUp() const;
    /**
     * @symbol ?getTicksAsBaby@AgeableDefinition@@QEBAHXZ
     * @hash   -1800925946
     */
    MCAPI int getTicksAsBaby() const;
    /**
     * @symbol ?initialize@AgeableDefinition@@QEAAXAEAVEntityContext@@AEAVAgeableComponent@@@Z
     * @hash   478914885
     */
    MCAPI void initialize(class EntityContext &, class AgeableComponent &);
    /**
     * @symbol ?buildSchema@AgeableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAgeableDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -2087213558
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AgeableDefinition>> &);

};