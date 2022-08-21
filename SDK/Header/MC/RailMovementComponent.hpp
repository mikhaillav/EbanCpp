// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RailMovementComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAILMOVEMENTCOMPONENT
public:
    class RailMovementComponent& operator=(class RailMovementComponent const &) = delete;
    RailMovementComponent(class RailMovementComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAILMOVEMENTCOMPONENT
#endif
    MCAPI RailMovementComponent();
    MCAPI void comeOffTrack(class Actor &);
    MCAPI void moveAlongTrack(class Actor &, class BlockPos const &);
    MCAPI bool operator==(class RailMovementComponent const &) const;



};