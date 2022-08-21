// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FollowFlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWFLOCKGOAL
public:
    class FollowFlockGoal& operator=(class FollowFlockGoal const &) = delete;
    FollowFlockGoal(class FollowFlockGoal const &) = delete;
    FollowFlockGoal() = delete;
#endif


public:
    /*0*/ virtual ~FollowFlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool canBeInterrupted();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOLLOWFLOCKGOAL
#endif
    MCAPI FollowFlockGoal(class Mob &, float);



};