// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BehaviorTreeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEDEFINITION
public:
    class BehaviorTreeDefinition& operator=(class BehaviorTreeDefinition const &) = delete;
    BehaviorTreeDefinition(class BehaviorTreeDefinition const &) = delete;
    BehaviorTreeDefinition() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORTREEDEFINITION
#endif
    MCAPI class BehaviorDefinition const * getRoot() const;



};