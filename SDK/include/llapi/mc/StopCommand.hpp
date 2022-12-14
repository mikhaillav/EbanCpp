/**
 * @file  StopCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StopCommand.
 *
 */
class StopCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPCOMMAND
public:
    class StopCommand& operator=(class StopCommand const &) = delete;
    StopCommand(class StopCommand const &) = delete;
    StopCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -277443145
     */
    virtual ~StopCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@StopCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1259691542
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@StopCommand@@SAXAEAVCommandRegistry@@AEAVDedicatedServer@@@Z
     * @hash   933399169
     */
    MCAPI static void setup(class CommandRegistry &, class DedicatedServer &);

//private:

private:
    /**
     * @symbol ?mServer@StopCommand@@0PEAVDedicatedServer@@EA
     * @hash   675127053
     */
    MCAPI static class DedicatedServer * mServer;

};