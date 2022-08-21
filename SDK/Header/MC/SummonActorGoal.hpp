// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SummonActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONACTORGOAL
public:
    class SummonActorGoal& operator=(class SummonActorGoal const &) = delete;
    SummonActorGoal(class SummonActorGoal const &) = delete;
    SummonActorGoal() = delete;
#endif


public:
    /*0*/ virtual ~SummonActorGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUMMONACTORGOAL
#endif
    MCAPI SummonActorGoal(class Mob &, std::vector<struct SummonSpellData> const &);

//private:
    MCAPI void _createSpellEntity(float, float, float, float, float, int, struct ActorDefinitionIdentifier) const;
    MCAPI int _selectBestSpell(class Actor &) const;


private:


};