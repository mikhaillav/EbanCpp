// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LabTableContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLECONTAINERMANAGERMODEL
public:
    class LabTableContainerManagerModel& operator=(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel(class LabTableContainerManagerModel const &) = delete;
    LabTableContainerManagerModel() = delete;
#endif


public:
    /*0*/ virtual ~LabTableContainerManagerModel();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool);
    /*8*/ virtual class ItemStack const & getSlot(int) const;
    /*9*/ virtual void setData(int, int);
    /*10*/ virtual void broadcastChanges();
    /*16*/ virtual bool isValid(float);
    /*17*/ virtual class ContainerScreenContext _postInit();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LABTABLECONTAINERMANAGERMODEL
#endif
    MCAPI LabTableContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
    MCAPI static int const INPUT_SLOTS;



};