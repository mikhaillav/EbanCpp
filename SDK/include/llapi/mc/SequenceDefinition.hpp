/**
 * @file  SequenceDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SequenceDefinition.
 *
 */
class SequenceDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEQUENCEDEFINITION
public:
    class SequenceDefinition& operator=(class SequenceDefinition const &) = delete;
    SequenceDefinition(class SequenceDefinition const &) = delete;
    SequenceDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1644691902
     */
    virtual ~SequenceDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@SequenceDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   -230821856
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};