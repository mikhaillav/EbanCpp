// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InspectBookshelfGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSPECTBOOKSHELFGOAL
public:
    class InspectBookshelfGoal& operator=(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal(class InspectBookshelfGoal const &) = delete;
    InspectBookshelfGoal() = delete;
#endif


public:
    /*0*/ virtual ~InspectBookshelfGoal();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /*13*/ virtual bool _canReach(class BlockPos const &);
    /*17*/ virtual bool findTargetBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSPECTBOOKSHELFGOAL
#endif
    MCAPI InspectBookshelfGoal(class Mob &, float, int, int, int, float);



};