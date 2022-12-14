/**
 * @file  Village.hpp
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
 * @brief MC class Village.
 *
 */
class Village {

#define AFTER_EXTRA
// Add Member There
public:
struct DwellerData {
    DwellerData() = delete;
    DwellerData(DwellerData const&) = delete;
    DwellerData(DwellerData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGE
public:
    class Village& operator=(class Village const &) = delete;
    Village(class Village const &) = delete;
    Village() = delete;
#endif

public:
    /**
     * @symbol ??0Village@@QEAA@AEAVDimension@@VUUID@mce@@AEBVBlockPos@@@Z
     * @hash   1796194889
     */
    MCAPI Village(class Dimension &, class mce::UUID, class BlockPos const &);
    /**
     * @symbol ?addActorToVillage@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   -1529488181
     */
    MCAPI void addActorToVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol ?addAggressor@Village@@QEAAXAEBVMob@@@Z
     * @hash   -581527210
     */
    MCAPI void addAggressor(class Mob const &);
    /**
     * @symbol ?addPOI@Village@@QEAA_NV?$weak_ptr@VPOIInstance@@@std@@@Z
     * @hash   -750529410
     */
    MCAPI bool addPOI(class std::weak_ptr<class POIInstance>);
    /**
     * @symbol ?addVillager@Village@@QEAAXAEBUActorUniqueID@@@Z
     * @hash   -739946030
     */
    MCAPI void addVillager(struct ActorUniqueID const &);
    /**
     * @symbol ?alwaysTickRaid@Village@@QEBA_NXZ
     * @hash   -2003075016
     */
    MCAPI bool alwaysTickRaid() const;
    /**
     * @symbol ?canRemove@Village@@QEBA_NXZ
     * @hash   1789211894
     */
    MCAPI bool canRemove() const;
    /**
     * @symbol ?checkNeedMoreVillagers@Village@@QEBA_NXZ
     * @hash   1909796760
     */
    MCAPI bool checkNeedMoreVillagers() const;
    /**
     * @symbol ?clearOwnedPOIs@Village@@QEAAXXZ
     * @hash   1469801525
     */
    MCAPI void clearOwnedPOIs();
    /**
     * @symbol ?debugDraw@Village@@QEAAXXZ
     * @hash   1013176771
     */
    MCAPI void debugDraw();
    /**
     * @symbol ?fetchOwnedPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@AEBUActorUniqueID@@W4POIType@@@Z
     * @hash   1463139445
     */
    MCAPI class std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const &, enum class POIType);
    /**
     * @symbol ?fireSoundTheAlarm@Village@@QEAAXXZ
     * @hash   1472566503
     */
    MCAPI void fireSoundTheAlarm();
    /**
     * @symbol ?getApproximateRadius@Village@@QEBAMXZ
     * @hash   -856081596
     */
    MCAPI float getApproximateRadius() const;
    /**
     * @symbol ?getBedPOICount@Village@@QEBA_KXZ
     * @hash   331103523
     */
    MCAPI unsigned __int64 getBedPOICount() const;
    /**
     * @symbol ?getBounds@Village@@QEBAAEBVAABB@@XZ
     * @hash   1392162546
     */
    MCAPI class AABB const & getBounds() const;
    /**
     * @symbol ?getCenter@Village@@QEBA?AVVec3@@XZ
     * @hash   -1429324632
     */
    MCAPI class Vec3 getCenter() const;
    /**
     * @symbol ?getClosestAggressor@Village@@QEAAPEAVActor@@PEAV2@@Z
     * @hash   -2041777824
     */
    MCAPI class Actor * getClosestAggressor(class Actor *);
    /**
     * @symbol ?getClosestBadStandingPlayer@Village@@QEAAPEAVPlayer@@AEAVActor@@@Z
     * @hash   -125479598
     */
    MCAPI class Player * getClosestBadStandingPlayer(class Actor &);
    /**
     * @symbol ?getClosestPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@AEBVBlockPos@@@Z
     * @hash   1453198501
     */
    MCAPI class std::weak_ptr<class POIInstance> getClosestPOI(enum class POIType, class BlockPos const &);
    /**
     * @symbol ?getRaid@Village@@QEBAPEBVRaid@@XZ
     * @hash   346477401
     */
    MCAPI class Raid const * getRaid() const;
    /**
     * @symbol ?getRaidBounds@Village@@QEBAAEBVAABB@@XZ
     * @hash   -1535574766
     */
    MCAPI class AABB const & getRaidBounds() const;
    /**
     * @symbol ?getRaidMutable@Village@@QEAAPEAVRaid@@XZ
     * @hash   -43534403
     */
    MCAPI class Raid * getRaidMutable();
    /**
     * @symbol ?getStanding@Village@@QEAAHAEBUActorUniqueID@@@Z
     * @hash   -1206869033
     */
    MCAPI int getStanding(struct ActorUniqueID const &);
    /**
     * @symbol ?getUnclaimedPOIs@Village@@QEBAAEBV?$array@V?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@$02@std@@XZ
     * @hash   -589773619
     */
    MCAPI class std::array<std::vector<class std::weak_ptr<class POIInstance>>, 3> const & getUnclaimedPOIs() const;
    /**
     * @symbol ?getUniqueID@Village@@QEBA?AVUUID@mce@@XZ
     * @hash   -32977712
     */
    MCAPI class mce::UUID getUniqueID() const;
    /**
     * @symbol ?hasInvalidRole@Village@@QEAA_NAEBUActorUniqueID@@AEBW4DwellerRole@@@Z
     * @hash   1478487198
     */
    MCAPI bool hasInvalidRole(struct ActorUniqueID const &, enum class DwellerRole const &);
    /**
     * @symbol ?hasRaid@Village@@QEBA_NXZ
     * @hash   482514998
     */
    MCAPI bool hasRaid() const;
    /**
     * @symbol ?hasSpecificDweller@Village@@QEBA_NW4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   -1031148876
     */
    MCAPI bool hasSpecificDweller(enum class DwellerRole, struct ActorUniqueID const &) const;
    /**
     * @symbol ?loadDataByKey@Village@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     * @hash   1413710291
     */
    MCAPI void loadDataByKey(std::string const &, class CompoundTag const &);
    /**
     * @symbol ?modifyStanding@Village@@QEAAHAEBUActorUniqueID@@H@Z
     * @hash   1522955426
     */
    MCAPI int modifyStanding(struct ActorUniqueID const &, int);
    /**
     * @symbol ?removeActorFromVillage@Village@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUActorUniqueID@@UDwellerData@Village@@@std@@@std@@@std@@@std@@W4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   -199775830
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>> removeActorFromVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol ?removeAllInstancesofActorFromVillage@Village@@QEAAXAEBUActorUniqueID@@@Z
     * @hash   -1467899272
     */
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const &);
    /**
     * @symbol ?removeVillageSavedData@Village@@QEAAXXZ
     * @hash   954440613
     */
    MCAPI void removeVillageSavedData();
    /**
     * @symbol ?resetDwellerTimer@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
     * @hash   43033451
     */
    MCAPI void resetDwellerTimer(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol ?resetNoBreedTimer@Village@@QEAAXXZ
     * @hash   -1480339129
     */
    MCAPI void resetNoBreedTimer();
    /**
     * @symbol ?rewardAllPlayers@Village@@QEAAXH@Z
     * @hash   639544936
     */
    MCAPI void rewardAllPlayers(int);
    /**
     * @symbol ?saveEntireVillage@Village@@QEAAXXZ
     * @hash   -487473791
     */
    MCAPI void saveEntireVillage();
    /**
     * @symbol ?setSavedDwellerPosition@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@VBlockPos@@@Z
     * @hash   1120161332
     */
    MCAPI void setSavedDwellerPosition(enum class DwellerRole, struct ActorUniqueID const &, class BlockPos);
    /**
     * @symbol ?tick@Village@@QEAAXUTick@@AEAVBlockSource@@@Z
     * @hash   906205321
     */
    MCAPI void tick(struct Tick, class BlockSource &);
    /**
     * @symbol ?tickRaid@Village@@QEAAXUTick@@@Z
     * @hash   949774564
     */
    MCAPI void tickRaid(struct Tick);
    /**
     * @symbol ?triggerRaid@Village@@QEAAXXZ
     * @hash   -35774583
     */
    MCAPI void triggerRaid();
    /**
     * @symbol ?trySetVillagerWorkTimestamp@Village@@QEAAXAEBUActorUniqueID@@@Z
     * @hash   -2014150448
     */
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const &);
    /**
     * @symbol ?unlinkMismatchedJobsites@Village@@QEAAXAEBVActor@@@Z
     * @hash   909224186
     */
    MCAPI void unlinkMismatchedJobsites(class Actor const &);
    /**
     * @symbol ?villagerLivesHere@Village@@QEBA_NAEBUActorUniqueID@@@Z
     * @hash   192524989
     */
    MCAPI bool villagerLivesHere(struct ActorUniqueID const &) const;
    /**
     * @symbol ?withinVillageBounds@Village@@QEBA_NAEBVVec3@@M@Z
     * @hash   355552298
     */
    MCAPI bool withinVillageBounds(class Vec3 const &, float) const;
    /**
     * @symbol ??1Village@@QEAA@XZ
     * @hash   -113032632
     */
    MCAPI ~Village();
    /**
     * @symbol ?DEBUG_DRAWING@Village@@2_NA
     * @hash   1454442139
     */
    MCAPI static bool DEBUG_DRAWING;
    /**
     * @symbol ?DWELLER_REMOVAL_TOLERANCE@Village@@2MB
     * @hash   -2080337895
     */
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE;
    /**
     * @symbol ?MAX_VILLAGE_STANDING@Village@@2HB
     * @hash   -1924903369
     */
    MCAPI static int const MAX_VILLAGE_STANDING;
    /**
     * @symbol ?MIN_VILLAGE_STANDING@Village@@2HB
     * @hash   980631135
     */
    MCAPI static int const MIN_VILLAGE_STANDING;
    /**
     * @symbol ?STORAGE_KEY_PREFIX@Village@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1705327117
     */
    MCAPI static std::string const STORAGE_KEY_PREFIX;
    /**
     * @symbol ?VILLAGE_START_XZ_BOUNDS@Village@@2HB
     * @hash   -941840091
     */
    MCAPI static int const VILLAGE_START_XZ_BOUNDS;
    /**
     * @symbol ?isValidRegisteredPOI@Village@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1528408682
     */
    MCAPI static bool isValidRegisteredPOI(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?isVillagePOI@Village@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1674267604
     */
    MCAPI static bool isVillagePOI(class BlockSource const &, class BlockPos const &);
    /**
     * @symbol ?isVillagePOI@Village@@SA_NAEBVVillageManager@@AEBVBlock@@@Z
     * @hash   743619090
     */
    MCAPI static bool isVillagePOI(class VillageManager const &, class Block const &);

//private:
    /**
     * @symbol ?_addPoiToVillage@Village@@AEAAXAEBUActorUniqueID@@V?$weak_ptr@VPOIInstance@@@std@@@Z
     * @hash   585882456
     */
    MCAPI void _addPoiToVillage(struct ActorUniqueID const &, class std::weak_ptr<class POIInstance>);
    /**
     * @symbol ?_calcPOIDist@Village@@AEAAXXZ
     * @hash   -561698340
     */
    MCAPI void _calcPOIDist();
    /**
     * @symbol ?_claimUnclaimedPOIs@Village@@AEAAXXZ
     * @hash   1312951470
     */
    MCAPI void _claimUnclaimedPOIs();
    /**
     * @symbol ?_clearVillagerPOIs@Village@@AEAAXAEBUActorUniqueID@@@Z
     * @hash   -1973703522
     */
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const &);
    /**
     * @symbol ?_createRaid@Village@@AEAAXXZ
     * @hash   68317221
     */
    MCAPI void _createRaid();
    /**
     * @symbol ?_findAvailablePOI@Village@@AEAA_N_KAEAVLevel@@AEAVRandom@@UActorUniqueID@@@Z
     * @hash   -601349989
     */
    MCAPI bool _findAvailablePOI(unsigned __int64, class Level &, class Random &, struct ActorUniqueID);
    /**
     * @symbol ?_findPlayerCentricSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@_N@Z
     * @hash   1356636563
     */
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3 &, bool) const;
    /**
     * @symbol ?_findPreferredPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEBVHashedString@@UActorUniqueID@@@Z
     * @hash   769876707
     */
    MCAPI void _findPreferredPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class HashedString const &, struct ActorUniqueID);
    /**
     * @symbol ?_findSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@MM_N1@Z
     * @hash   1930268700
     */
    MCAPI bool _findSpawnPointForRaid(class Vec3 &, float, float, bool, bool) const;
    /**
     * @symbol ?_findSpawnableRegion@Village@@AEBAPEAVBlockSource@@VVec3@@HAEA_N@Z
     * @hash   -1869660937
     */
    MCAPI class BlockSource * _findSpawnableRegion(class Vec3, int, bool &) const;
    /**
     * @symbol ?_findWeightedPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEAVRandom@@UActorUniqueID@@@Z
     * @hash   -1258699525
     */
    MCAPI void _findWeightedPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class Random &, struct ActorUniqueID);
    /**
     * @symbol ?_helpLocateRaiders@Village@@AEAAXAEBVRaid@@@Z
     * @hash   218680437
     */
    MCAPI void _helpLocateRaiders(class Raid const &);
    /**
     * @symbol ?_loadVillageData@Village@@AEAAXAEBVCompoundTag@@@Z
     * @hash   751753881
     */
    MCAPI void _loadVillageData(class CompoundTag const &);
    /**
     * @symbol ?_loadVillageDwellers@Village@@AEAAXAEBVCompoundTag@@@Z
     * @hash   -1995768993
     */
    MCAPI void _loadVillageDwellers(class CompoundTag const &);
    /**
     * @symbol ?_loadVillagePOIs@Village@@AEAAXAEBVCompoundTag@@@Z
     * @hash   1687430506
     */
    MCAPI void _loadVillagePOIs(class CompoundTag const &);
    /**
     * @symbol ?_playSoundFrom@Village@@AEAAXAEBVVec3@@W4LevelSoundEvent@@@Z
     * @hash   1805506743
     */
    MCAPI void _playSoundFrom(class Vec3 const &, enum class LevelSoundEvent);
    /**
     * @symbol ?_readyRaidGroup@Village@@AEAAXAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
     * @hash   -750607569
     */
    MCAPI void _readyRaidGroup(class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &);
    /**
     * @symbol ?_ringBells@Village@@AEBAXAEAVBlockSource@@AEAVRandom@@@Z
     * @hash   2009596661
     */
    MCAPI void _ringBells(class BlockSource &, class Random &) const;
    /**
     * @symbol ?_saveVillageData@Village@@AEBAXXZ
     * @hash   -1143262887
     */
    MCAPI void _saveVillageData() const;
    /**
     * @symbol ?_saveVillageDwellers@Village@@AEBAXXZ
     * @hash   525474739
     */
    MCAPI void _saveVillageDwellers() const;
    /**
     * @symbol ?_saveVillagePOIs@Village@@AEBAXXZ
     * @hash   667171496
     */
    MCAPI void _saveVillagePOIs() const;
    /**
     * @symbol ?_saveVillagePlayerStanding@Village@@AEBAXXZ
     * @hash   -249630980
     */
    MCAPI void _saveVillagePlayerStanding() const;
    /**
     * @symbol ?_saveVillageRaid@Village@@AEBAXXZ
     * @hash   1343648105
     */
    MCAPI void _saveVillageRaid() const;
    /**
     * @symbol ?_spawnPassiveDwellers@Village@@AEAAXAEAVBlockSource@@H@Z
     * @hash   -1305356038
     */
    MCAPI void _spawnPassiveDwellers(class BlockSource &, int);
    /**
     * @symbol ?_spawnRaidGroup@Village@@AEBA_NVVec3@@EAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
     * @hash   523376899
     */
    MCAPI bool _spawnRaidGroup(class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &) const;
    /**
     * @symbol ?_tryShiftStandingsTowardNeutral@Village@@AEAAXAEAUTick@@_K_N@Z
     * @hash   1596841557
     */
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick &, unsigned __int64, bool);
    /**
     * @symbol ?_trySpawnDefenderDwellers@Village@@AEAAXAEAVBlockSource@@_K@Z
     * @hash   -514530050
     */
    MCAPI void _trySpawnDefenderDwellers(class BlockSource &, unsigned __int64);
    /**
     * @symbol ?_updateAndRemoveInactiveDwellers@Village@@AEAAX_KM@Z
     * @hash   -2085375848
     */
    MCAPI void _updateAndRemoveInactiveDwellers(unsigned __int64, float);
    /**
     * @symbol ?_updateClaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
     * @hash   184957464
     */
    MCAPI void _updateClaimedPOIs(class BlockSource &);
    /**
     * @symbol ?_updateUnclaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
     * @hash   -325186575
     */
    MCAPI void _updateUnclaimedPOIs(class BlockSource &);

private:
    /**
     * @symbol ?ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE@Village@@0MB
     * @hash   -1382893088
     */
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;
    /**
     * @symbol ?CELEBRATION_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   638574676
     */
    MCAPI static std::string const CELEBRATION_EVENT;
    /**
     * @symbol ?RAID_BOUNDS_PADDING@Village@@0VVec3@@B
     * @hash   -1255017723
     */
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING;
    /**
     * @symbol ?RAID_EXPIRY_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   737040242
     */
    MCAPI static std::string const RAID_EXPIRY_EVENT;
    /**
     * @symbol ?RAID_FINISHED_DELAY_IN_TICKS@Village@@0HB
     * @hash   1519313780
     */
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS;
    /**
     * @symbol ?RAID_GROUP_COMPLETE_DELAY_IN_TICKS@Village@@0HB
     * @hash   -1501220859
     */
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS;
    /**
     * @symbol ?RAID_LOCATION_HELP_DELAY_IN_TICKS@Village@@0HB
     * @hash   -1040702047
     */
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS;
    /**
     * @symbol ?RAID_MAX_SPAWN_FAILURES@Village@@0EB
     * @hash   269848980
     */
    MCAPI static unsigned char const RAID_MAX_SPAWN_FAILURES;
    /**
     * @symbol ?RAID_PREP_TIME_IN_TICKS@Village@@0HB
     * @hash   -2035126807
     */
    MCAPI static int const RAID_PREP_TIME_IN_TICKS;
    /**
     * @symbol ?RAID_TIMEOUT_IN_TICKS@Village@@0UTick@@B
     * @hash   1751498311
     */
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS;
    /**
     * @symbol ?STANDING_DECAY_INTERVAL_BAD@Village@@0_KB
     * @hash   -377060560
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_BAD;
    /**
     * @symbol ?STANDING_DECAY_INTERVAL_GOOD@Village@@0_KB
     * @hash   -698522284
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_GOOD;
    /**
     * @symbol ?STORAGE_KEY_DWELLERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1826603783
     */
    MCAPI static std::string const STORAGE_KEY_DWELLERS;
    /**
     * @symbol ?STORAGE_KEY_PLAYERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1724342211
     */
    MCAPI static std::string const STORAGE_KEY_PLAYERS;
    /**
     * @symbol ?STORAGE_KEY_POI@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1663237653
     */
    MCAPI static std::string const STORAGE_KEY_POI;
    /**
     * @symbol ?STORAGE_KEY_RAID@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -12149859
     */
    MCAPI static std::string const STORAGE_KEY_RAID;
    /**
     * @symbol ?STORAGE_KEY_VILLAGE@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   150621527
     */
    MCAPI static std::string const STORAGE_KEY_VILLAGE;
    /**
     * @symbol ?UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS@Village@@0HB
     * @hash   -1920303428
     */
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;
    /**
     * @symbol ?VILLAGER_EXPECTED_WORK_INTERVAL@Village@@0_JB
     * @hash   -1720233641
     */
    MCAPI static __int64 const VILLAGER_EXPECTED_WORK_INTERVAL;
    /**
     * @symbol ?VILLAGE_HERO_BESTOW_TIME@Village@@0HB
     * @hash   -1840366890
     */
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME;
    /**
     * @symbol ?VILLAGE_POI_PURGE_TIME@Village@@0_KB
     * @hash   -405801730
     */
    MCAPI static unsigned __int64 const VILLAGE_POI_PURGE_TIME;
    /**
     * @symbol ?VILLAGE_RADIUS_APPROX_SCALAR@Village@@0MB
     * @hash   -619026474
     */
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR;
    /**
     * @symbol ?VILLAGE_SAVE_TICK_DELAY@Village@@0_KB
     * @hash   908021253
     */
    MCAPI static unsigned __int64 const VILLAGE_SAVE_TICK_DELAY;
    /**
     * @symbol ?VILLAGE_START_HEIGHT@Village@@0HB
     * @hash   -1413756729
     */
    MCAPI static int const VILLAGE_START_HEIGHT;
    /**
     * @symbol ?VILLAGE_UNCLAIMED_POI_CAP@Village@@0HB
     * @hash   1432162849
     */
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP;
    /**
     * @symbol ?VILLAGE_UPDATE_TICK_DELAY@Village@@0_KB
     * @hash   1690325617
     */
    MCAPI static unsigned __int64 const VILLAGE_UPDATE_TICK_DELAY;
    /**
     * @symbol ?VILLAGE_VERSION_CURRENT@Village@@0EB
     * @hash   1643402229
     */
    MCAPI static unsigned char const VILLAGE_VERSION_CURRENT;

};