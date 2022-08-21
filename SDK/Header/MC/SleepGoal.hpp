// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SleepGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLEEPGOAL
public:
    class SleepGoal& operator=(class SleepGoal const &) = delete;
    SleepGoal(class SleepGoal const &) = delete;
    SleepGoal() = delete;
#endif


public:
    /*0*/ virtual ~SleepGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*16*/ virtual unsigned __int64 _getRepathTime() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLEEPGOAL
#endif
    MCAPI SleepGoal(class Mob &, float, float, float, bool, float, int, float);

//private:
    MCAPI void _lockPosToBedPos();
    MCAPI void _setSleepVariables();
    MCAPI void _wakeUp();


private:


};