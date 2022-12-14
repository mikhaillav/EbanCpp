/**
 * @file  BreakBlocksDescription.hpp
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
 * @brief MC class BreakBlocksDescription.
 *
 */
class BreakBlocksDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSDESCRIPTION
public:
    class BreakBlocksDescription& operator=(class BreakBlocksDescription const &) = delete;
    BreakBlocksDescription(class BreakBlocksDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@BreakBlocksDescription@@UEBAPEBDXZ
     * @hash   -182865875
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   516538529
     */
    virtual ~BreakBlocksDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@BreakBlocksDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -1273222474
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@BreakBlocksDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   -1860818384
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @symbol ??0BreakBlocksDescription@@QEAA@XZ
     * @hash   -412374269
     */
    MCAPI BreakBlocksDescription();

};