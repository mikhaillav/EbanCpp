/**
 * @file  VibrationDamperDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure VibrationDamperDefinition.
 *
 */
struct VibrationDamperDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONDAMPERDEFINITION
public:
    struct VibrationDamperDefinition& operator=(struct VibrationDamperDefinition const &) = delete;
    VibrationDamperDefinition(struct VibrationDamperDefinition const &) = delete;
    VibrationDamperDefinition() = delete;
#endif

public:
    /**
     * @symbol ?buildSchema@VibrationDamperDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UVibrationDamperDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -877184750
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct VibrationDamperDefinition>> &);

};