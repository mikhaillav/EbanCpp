// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CentralSpikedFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CENTRALSPIKEDFEATURE
public:
    class CentralSpikedFeature& operator=(class CentralSpikedFeature const &) = delete;
    CentralSpikedFeature(class CentralSpikedFeature const &) = delete;
    CentralSpikedFeature() = delete;
#endif


public:
    /*0*/ virtual ~CentralSpikedFeature();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CENTRALSPIKEDFEATURE
#endif
    MCAPI CentralSpikedFeature(class Block const &);



};