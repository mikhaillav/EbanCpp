/**
 * @file  PermissionsHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PermissionsHandler.
 *
 */
class PermissionsHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONSHANDLER
public:
    class PermissionsHandler& operator=(class PermissionsHandler const &) = delete;
#endif

public:
    /**
     * @symbol ??0PermissionsHandler@@QEAA@XZ
     * @hash   -685864510
     */
    MCAPI PermissionsHandler();
    /**
     * @symbol ??0PermissionsHandler@@QEAA@AEBV0@@Z
     * @hash   84640945
     */
    MCAPI PermissionsHandler(class PermissionsHandler const &);
    /**
     * @symbol ?addSaveData@PermissionsHandler@@QEBAXAEAVCompoundTag@@@Z
     * @hash   1239814920
     */
    MCAPI void addSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getCommandPermissions@PermissionsHandler@@QEBA?AW4CommandPermissionLevel@@XZ
     * @hash   1153878470
     */
    MCAPI enum class CommandPermissionLevel getCommandPermissions() const;
    /**
     * @symbol ?getPlayerPermissions@PermissionsHandler@@QEBA?AW4PlayerPermissionLevel@@XZ
     * @hash   -1511011470
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissions() const;
    /**
     * @symbol ?loadSaveData@PermissionsHandler@@QEAA_NAEBVCompoundTag@@@Z
     * @hash   1956712059
     */
    MCAPI bool loadSaveData(class CompoundTag const &);
    /**
     * @symbol ??8PermissionsHandler@@QEBA_NAEBV0@@Z
     * @hash   -248853247
     */
    MCAPI bool operator==(class PermissionsHandler const &) const;
    /**
     * @symbol ?setCommandPermissions@PermissionsHandler@@QEAAXW4CommandPermissionLevel@@@Z
     * @hash   2046297896
     */
    MCAPI void setCommandPermissions(enum class CommandPermissionLevel);
    /**
     * @symbol ?setPlayerPermissions@PermissionsHandler@@QEAAXW4PlayerPermissionLevel@@@Z
     * @hash   618925774
     */
    MCAPI void setPlayerPermissions(enum class PlayerPermissionLevel);
    /**
     * @symbol ?playerPermissionLevelFromString@PermissionsHandler@@SA?AW4PlayerPermissionLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   611020773
     */
    MCAPI static enum class PlayerPermissionLevel playerPermissionLevelFromString(std::string const &);
    /**
     * @symbol ?playerPermissionLevelToString@PermissionsHandler@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBW4PlayerPermissionLevel@@@Z
     * @hash   1976796787
     */
    MCAPI static std::string playerPermissionLevelToString(enum class PlayerPermissionLevel const &);

};