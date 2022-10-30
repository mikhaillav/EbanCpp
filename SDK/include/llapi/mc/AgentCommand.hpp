/**
 * @file  AgentCommand.hpp
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
 * @brief MC class AgentCommand.
 *
 */
class AgentCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMAND
public:
    class AgentCommand& operator=(class AgentCommand const &) = delete;
    AgentCommand(class AgentCommand const &) = delete;
    AgentCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -591855664
     */
    virtual ~AgentCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@AgentCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   2034161325
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@AgentCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   199238172
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?collect@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -357457769
     */
    MCAPI void collect(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?createAgent@AgentCommand@@AEBAXAEAVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1304846243
     */
    MCAPI void createAgent(class Player &, class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?createAgentOutputSuccess@AgentCommand@@AEBAXAEAVCommandOutput@@_N@Z
     * @hash   908360354
     */
    MCAPI void createAgentOutputSuccess(class CommandOutput &, bool) const;
    /**
     * @symbol ?directionCommand@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -376548279
     */
    MCAPI void directionCommand(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?getPosition@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -2050160020
     */
    MCAPI void getPosition(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?itemCommand@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -2076136875
     */
    MCAPI void itemCommand(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?place@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1125989140
     */
    MCAPI void place(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?reportSuccess@AgentCommand@@AEBAX_NAEAVCommandOutput@@@Z
     * @hash   -1522669376
     */
    MCAPI void reportSuccess(bool, class CommandOutput &) const;
    /**
     * @symbol ?setAgentOwner@AgentCommand@@AEBAXAEAVAgent@@AEAVPlayer@@@Z
     * @hash   -1963580999
     */
    MCAPI void setAgentOwner(class Agent &, class Player &) const;
    /**
     * @symbol ?setItem@AgentCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   156380434
     */
    MCAPI void setItem(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?tpAgent@AgentCommand@@AEBAXAEAVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1220007373
     */
    MCAPI void tpAgent(class Player &, class CommandOrigin const &, class CommandOutput &) const;

private:

};