// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlyNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYNODE
public:
    class FlyNode& operator=(class FlyNode const &) = delete;
    FlyNode(class FlyNode const &) = delete;
#endif


public:
    /*0*/ virtual ~FlyNode();
    /*1*/ virtual enum BehaviorStatus tick(class Actor &);
    /*2*/ virtual void initializeFromDefinition(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLYNODE
#endif
    MCAPI FlyNode();



};