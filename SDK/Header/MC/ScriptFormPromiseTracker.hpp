// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptFormPromiseTracker {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTFORMPROMISETRACKER
public:
    ScriptFormPromiseTracker(class ScriptFormPromiseTracker const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTFORMPROMISETRACKER
    MCVAPI enum EventResult onEvent(struct PlayerFormCloseEvent const &);
    MCVAPI enum EventResult onEvent(struct PlayerFormResponseEvent const &);
#endif
    MCAPI ScriptFormPromiseTracker();
    MCAPI void handleFormClose(struct PlayerFormCloseEvent const &);
    MCAPI void handleFormResponse(unsigned int, class Json::Value const &);
    MCAPI void handlePlayerQuit(class NetworkIdentifier const &);
    MCAPI class ScriptFormPromiseTracker & operator=(class ScriptFormPromiseTracker const &);
    MCAPI void rejectAllForShutdown();



};