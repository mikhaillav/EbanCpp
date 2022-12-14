/**
 * @file  NpcCommandAction.hpp
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
 * @brief MC class NpcCommandAction.
 *
 */
class NpcCommandAction {

#define AFTER_EXTRA
// Add Member There
public:
struct SavedCommand {
    SavedCommand() = delete;
    SavedCommand(SavedCommand const&) = delete;
    SavedCommand(SavedCommand const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCCOMMANDACTION
public:
    class NpcCommandAction& operator=(class NpcCommandAction const &) = delete;
    NpcCommandAction(class NpcCommandAction const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1959780170
     */
    virtual ~NpcCommandAction();
    /**
     * @vftbl  1
     * @symbol ?toJson@NpcCommandAction@@UEAA?AVValue@Json@@XZ
     * @hash   -2118212294
     */
    virtual class Json::Value toJson();
    /**
     * @vftbl  2
     * @symbol ?fromJson@NpcCommandAction@@UEAA_NAEBVValue@Json@@@Z
     * @hash   -656672947
     */
    virtual bool fromJson(class Json::Value const &);
    /**
     * @symbol ??0NpcCommandAction@@QEAA@XZ
     * @hash   -1035798020
     */
    MCAPI NpcCommandAction();
    /**
     * @symbol ?getCommands@NpcCommandAction@@QEAAAEAV?$vector@USavedCommand@NpcCommandAction@@V?$allocator@USavedCommand@NpcCommandAction@@@std@@@std@@XZ
     * @hash   1983021788
     */
    MCAPI std::vector<struct NpcCommandAction::SavedCommand> & getCommands();
    /**
     * @symbol ?setCommands@NpcCommandAction@@QEAAX$$QEAV?$vector@USavedCommand@NpcCommandAction@@V?$allocator@USavedCommand@NpcCommandAction@@@std@@@std@@@Z
     * @hash   2133119774
     */
    MCAPI void setCommands(std::vector<struct NpcCommandAction::SavedCommand> &&);
    /**
     * @symbol ?COMMAND_DELIMITER@NpcCommandAction@@2DB
     * @hash   -941286808
     */
    MCAPI static char const COMMAND_DELIMITER;

//private:

private:
    /**
     * @symbol ?COMMAND_LINE_KEY@NpcCommandAction@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -375678213
     */
    MCAPI static std::string const COMMAND_LINE_KEY;
    /**
     * @symbol ?COMMAND_VERSION_KEY@NpcCommandAction@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   673103479
     */
    MCAPI static std::string const COMMAND_VERSION_KEY;

};