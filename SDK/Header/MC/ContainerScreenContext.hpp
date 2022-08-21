// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContainerScreenContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENCONTEXT
public:
    class ContainerScreenContext& operator=(class ContainerScreenContext const &) = delete;
    ContainerScreenContext(class ContainerScreenContext const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSCREENCONTEXT
#endif
    MCAPI ContainerScreenContext(class Player &, enum ContainerType, struct ActorUniqueID const &);
    MCAPI ContainerScreenContext(class Player &, enum ContainerType, class BlockPos const &);
    MCAPI ContainerScreenContext();
    MCAPI class Player & getPlayer() const;
    MCAPI enum ContainerType getScreenContainerType() const;
    MCAPI class Actor * tryGetActor() const;
    MCAPI class BlockActor * tryGetBlockActor() const;



};