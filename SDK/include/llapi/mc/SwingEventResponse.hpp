/**
 * @file  SwingEventResponse.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwingEventResponse.
 *
 */
class SwingEventResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWINGEVENTRESPONSE
public:
    class SwingEventResponse& operator=(class SwingEventResponse const &) = delete;
    SwingEventResponse(class SwingEventResponse const &) = delete;
    SwingEventResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1188206617
     */
    virtual ~SwingEventResponse();
    /**
     * @vftbl  1
     * @symbol ?getName@SwingEventResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1519825636
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?executeAction@SwingEventResponse@@UEBAXAEAVRenderParams@@@Z
     * @hash   -202515054
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@SwingEventResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VEventResponse@@$$V@@@Z
     * @hash   -1596519158
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @symbol ?NameID@SwingEventResponse@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -30542235
     */
    MCAPI static std::string const NameID;

};