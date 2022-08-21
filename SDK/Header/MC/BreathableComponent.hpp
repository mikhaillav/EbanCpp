// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BreathableComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum BreathableState;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHABLECOMPONENT
public:
    class BreathableComponent& operator=(class BreathableComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREATHABLECOMPONENT
#endif
    MCAPI BreathableComponent(class BreathableComponent const &);
    MCAPI BreathableComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI bool canBreathe(class Actor const &) const;
    MCAPI bool generatesBubbles() const;
    MCAPI int getAirRegenPerTick() const;
    MCAPI short getAirSupply() const;
    MCAPI enum BreathableComponent::BreathableState & getBreathableState();
    MCAPI float getInhaleTime() const;
    MCAPI short getMaxAirSupply() const;
    MCAPI int getSuffocateTime() const;
    MCAPI class BreathableComponent & operator=(class BreathableComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void setAirSupply(short);
    MCAPI void updateBreathableState(class Actor &);
    MCAPI ~BreathableComponent();



};