/**
 * @file  PropertiesSettings.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertiesSettings.
 *
 */
class PropertiesSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTIESSETTINGS
public:
    class PropertiesSettings& operator=(class PropertiesSettings const &) = delete;
    PropertiesSettings(class PropertiesSettings const &) = delete;
    PropertiesSettings() = delete;
#endif

public:
    /**
     * @symbol ??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1791083489
     */
    MCAPI PropertiesSettings(std::string const &);
    /**
     * @symbol ?allowCheats@PropertiesSettings@@QEBA_NXZ
     * @hash   2064770230
     */
    MCAPI bool allowCheats() const;
    /**
     * @symbol ?areCustomSkinsDisabled@PropertiesSettings@@QEBA_NXZ
     * @hash   -1864255700
     */
    MCAPI bool areCustomSkinsDisabled() const;
    /**
     * @symbol ?canEmitTelemetryEvents@PropertiesSettings@@QEBA_NXZ
     * @hash   1119588864
     */
    MCAPI bool canEmitTelemetryEvents() const;
    /**
     * @symbol ?disablePlayerInteractions@PropertiesSettings@@QEBA_NXZ
     * @hash   773352456
     */
    MCAPI bool disablePlayerInteractions() const;
    /**
     * @symbol ?enableItemStackNetManager@PropertiesSettings@@QEBA_NXZ
     * @hash   -527179896
     */
    MCAPI bool enableItemStackNetManager() const;
    /**
     * @symbol ?forceGamemode@PropertiesSettings@@QEBA_NXZ
     * @hash   -470936556
     */
    MCAPI bool forceGamemode() const;
    /**
     * @symbol ?getChatRestrictionLevel@PropertiesSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
     * @hash   1718371736
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @symbol ?getCompressionAlgorithm@PropertiesSettings@@QEBA?AW4PacketCompressionAlgorithm@@XZ
     * @hash   -816437800
     */
    MCAPI enum class PacketCompressionAlgorithm getCompressionAlgorithm() const;
    /**
     * @symbol ?getCompressionThresholdBytesize@PropertiesSettings@@QEBAGXZ
     * @hash   -1373338603
     */
    MCAPI unsigned short getCompressionThresholdBytesize() const;
    /**
     * @symbol ?getCustomProperty@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   1201193243
     */
    MCAPI std::string const & getCustomProperty(std::string const &) const;
    /**
     * @symbol ?getDefaultPlayerPermissionLevel@PropertiesSettings@@QEBA?BW4PlayerPermissionLevel@@XZ
     * @hash   -128045394
     */
    MCAPI enum class PlayerPermissionLevel const getDefaultPlayerPermissionLevel() const;
    /**
     * @symbol ?getDesiredHttpImplementation@PropertiesSettings@@QEBA?AW4Implementation@Http@Bedrock@@XZ
     * @hash   943338606
     */
    MCAPI enum class Bedrock::Http::Implementation getDesiredHttpImplementation() const;
    /**
     * @symbol ?getDifficulty@PropertiesSettings@@QEBA?AW4Difficulty@@XZ
     * @hash   -2054136360
     */
    MCAPI enum class Difficulty getDifficulty() const;
    /**
     * @symbol ?getExtraTrustedKeys@PropertiesSettings@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1024893413
     */
    MCAPI std::vector<std::string> const & getExtraTrustedKeys() const;
    /**
     * @symbol ?getGameMode@PropertiesSettings@@QEBA?AW4GameType@@XZ
     * @hash   -10288630
     */
    MCAPI enum class GameType getGameMode() const;
    /**
     * @symbol ?getLanguage@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -405481236
     */
    MCAPI std::string const & getLanguage() const;
    /**
     * @symbol ?getLevelName@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2007781186
     */
    MCAPI std::string const & getLevelName() const;
    /**
     * @symbol ?getLevelSeed@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1458584898
     */
    MCAPI std::string const & getLevelSeed() const;
    /**
     * @symbol ?getLevelType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1785215058
     */
    MCAPI std::string const & getLevelType() const;
    /**
     * @symbol ?getMaxPlayerIdleTime@PropertiesSettings@@QEBA?AV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@XZ
     * @hash   1782985995
     */
    MCAPI class std::chrono::duration<int, struct std::ratio<60, 1>> getMaxPlayerIdleTime() const;
    /**
     * @symbol ?getMaxPlayers@PropertiesSettings@@QEBAHXZ
     * @hash   -1497212122
     */
    MCAPI int getMaxPlayers() const;
    /**
     * @symbol ?getMaxThreads@PropertiesSettings@@QEBAIXZ
     * @hash   1173874048
     */
    MCAPI unsigned int getMaxThreads() const;
    /**
     * @symbol ?getMaxViewDistanceChunks@PropertiesSettings@@QEBAHXZ
     * @hash   -244785624
     */
    MCAPI int getMaxViewDistanceChunks() const;
    /**
     * @symbol ?getMotd@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1904564764
     */
    MCAPI std::string const & getMotd() const;
    /**
     * @symbol ?getOpPermissionLevel@PropertiesSettings@@QEBA?AW4CommandPermissionLevel@@XZ
     * @hash   1065218786
     */
    MCAPI enum class CommandPermissionLevel getOpPermissionLevel() const;
    /**
     * @symbol ?getPlayerMovementSettings@PropertiesSettings@@QEBAAEBUPlayerMovementSettings@@XZ
     * @hash   971609962
     */
    MCAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    /**
     * @symbol ?getRemoteServerCommunicationEndpoint@PropertiesSettings@@QEBA?AUNetworkAddress@@XZ
     * @hash   -1319970590
     */
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;
    /**
     * @symbol ?getScriptSettings@PropertiesSettings@@QEBAAEBUScriptSettings@@XZ
     * @hash   -1274042438
     */
    MCAPI struct ScriptSettings const & getScriptSettings() const;
    /**
     * @symbol ?getServerId@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1580839780
     */
    MCAPI std::string const & getServerId() const;
    /**
     * @symbol ?getServerPort@PropertiesSettings@@QEBAGXZ
     * @hash   -902653339
     */
    MCAPI unsigned short getServerPort() const;
    /**
     * @symbol ?getServerPortv6@PropertiesSettings@@QEBAGXZ
     * @hash   -576425291
     */
    MCAPI unsigned short getServerPortv6() const;
    /**
     * @symbol ?getServerTickRange@PropertiesSettings@@QEBAHXZ
     * @hash   -787990072
     */
    MCAPI int getServerTickRange() const;
    /**
     * @symbol ?getServerType@PropertiesSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -256296452
     */
    MCAPI std::string const & getServerType() const;
    /**
     * @symbol ?getServerWakeupFrequency@PropertiesSettings@@QEBAHXZ
     * @hash   778238920
     */
    MCAPI int getServerWakeupFrequency() const;
    /**
     * @symbol ?getTransportLayerType@PropertiesSettings@@QEBA?AW4TransportLayer@@XZ
     * @hash   -1520167220
     */
    MCAPI enum class TransportLayer getTransportLayerType() const;
    /**
     * @symbol ?isContentLogFileEnabled@PropertiesSettings@@QEBA_NXZ
     * @hash   1554410004
     */
    MCAPI bool isContentLogFileEnabled() const;
    /**
     * @symbol ?isItemTransactionManagerLoggingEnabled@PropertiesSettings@@QEBA_NXZ
     * @hash   -1984225154
     */
    MCAPI bool isItemTransactionManagerLoggingEnabled() const;
    /**
     * @symbol ?isPropertiesFileLoaded@PropertiesSettings@@QEBA?B_NXZ
     * @hash   1208119560
     */
    MCAPI bool const isPropertiesFileLoaded() const;
    /**
     * @symbol ?texturePackRequired@PropertiesSettings@@QEBA_NXZ
     * @hash   -1414258870
     */
    MCAPI bool texturePackRequired() const;
    /**
     * @symbol ?useAllowList@PropertiesSettings@@QEBA_NXZ
     * @hash   -1728575406
     */
    MCAPI bool useAllowList() const;
    /**
     * @symbol ?useMsaGamertagsOnly@PropertiesSettings@@QEBA_NXZ
     * @hash   403130598
     */
    MCAPI bool useMsaGamertagsOnly() const;
    /**
     * @symbol ?useOnlineAuthentication@PropertiesSettings@@QEBA_NXZ
     * @hash   -422250568
     */
    MCAPI bool useOnlineAuthentication() const;
    /**
     * @symbol ?useWebsocketEncryption@PropertiesSettings@@QEBA_NXZ
     * @hash   -1888687928
     */
    MCAPI bool useWebsocketEncryption() const;
    /**
     * @symbol ?websocketRetryTime@PropertiesSettings@@QEBAMXZ
     * @hash   -1072099978
     */
    MCAPI float websocketRetryTime() const;
    /**
     * @symbol ??1PropertiesSettings@@QEAA@XZ
     * @hash   1486421728
     */
    MCAPI ~PropertiesSettings();
    /**
     * @symbol ?parseBoolValue@PropertiesSettings@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   606308065
     */
    MCAPI static bool parseBoolValue(std::string const &);
    /**
     * @symbol ?parseGameMode@PropertiesSettings@@SA?AW4GameType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1392229223
     */
    MCAPI static enum class GameType parseGameMode(std::string const &);
    /**
     * @symbol ?parseInt32Value@PropertiesSettings@@SAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -306784225
     */
    MCAPI static int parseInt32Value(std::string const &);

};