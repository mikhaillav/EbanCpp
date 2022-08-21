// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetPropertyResponse {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPROPERTYRESPONSE
public:
    class SetPropertyResponse& operator=(class SetPropertyResponse const &) = delete;
    SetPropertyResponse(class SetPropertyResponse const &) = delete;
    SetPropertyResponse() = delete;
#endif


public:
    /*0*/ virtual ~SetPropertyResponse();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void executeAction(class RenderParams &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>> &, class Factory<class ActorEventResponse> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETPROPERTYRESPONSE
#endif
    MCAPI static std::string const NameID;



};