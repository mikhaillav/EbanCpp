// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptActorGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTACTORGAMEPLAYHANDLER
public:
    class ScriptActorGameplayHandler& operator=(class ScriptActorGameplayHandler const &) = delete;
    ScriptActorGameplayHandler(class ScriptActorGameplayHandler const &) = delete;
    ScriptActorGameplayHandler() = delete;
#endif


public:
    /*0*/ virtual ~ScriptActorGameplayHandler();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ActorDefinitionStartedEvent &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTACTORGAMEPLAYHANDLER
#endif

//private:
    MCAPI bool _handleActorDefinitionStartedEvent(struct ActorDefinitionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;


private:


};