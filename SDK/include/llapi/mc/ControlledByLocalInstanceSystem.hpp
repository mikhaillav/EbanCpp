/**
 * @file  ControlledByLocalInstanceSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ControlledByLocalInstanceSystem.
 *
 */
class ControlledByLocalInstanceSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYLOCALINSTANCESYSTEM
public:
    class ControlledByLocalInstanceSystem& operator=(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem(class ControlledByLocalInstanceSystem const &) = delete;
    ControlledByLocalInstanceSystem() = delete;
#endif

public:
    /**
     * @symbol ?createRecalculateControlledByLocalInstanceSystemClient@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   46884122
     */
    MCAPI static struct TickingSystemWithInfo createRecalculateControlledByLocalInstanceSystemClient();
    /**
     * @symbol ?createRecalculateControlledByLocalInstanceSystemServer@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1239144730
     */
    MCAPI static struct TickingSystemWithInfo createRecalculateControlledByLocalInstanceSystemServer();
    /**
     * @symbol ?createWasControlledByLocalInstanceSystem@ControlledByLocalInstanceSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1088144070
     */
    MCAPI static struct TickingSystemWithInfo createWasControlledByLocalInstanceSystem();

};