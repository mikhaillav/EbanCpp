/**
 * @file  BreakDoorAnnotationDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreakDoorAnnotationDescription.
 *
 */
class BreakDoorAnnotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONDESCRIPTION
public:
    class BreakDoorAnnotationDescription& operator=(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription(class BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@BreakDoorAnnotationDescription@@UEBAPEBDXZ
     * @hash   1811551204
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   1138870474
     */
    virtual ~BreakDoorAnnotationDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@BreakDoorAnnotationDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   397959935
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@BreakDoorAnnotationDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   894954089
     */
    virtual void serializeData(class Json::Value &) const;

};