// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TransformItemResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMITEMRESPONSE
public:
    class TransformItemResponse& operator=(class TransformItemResponse const &) = delete;
    TransformItemResponse(class TransformItemResponse const &) = delete;
    TransformItemResponse() = delete;
#endif


public:
    /*0*/ virtual ~TransformItemResponse();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void executeAction(class RenderParams &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRANSFORMITEMRESPONSE
#endif
    MCAPI static std::string const NameID;



};