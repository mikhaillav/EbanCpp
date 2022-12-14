/**
 * @file  DwellerComponent.hpp
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
 * @brief MC class DwellerComponent.
 *
 */
class DwellerComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class DwellingType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERCOMPONENT
public:
    class DwellerComponent& operator=(class DwellerComponent const &) = delete;
    DwellerComponent(class DwellerComponent const &) = delete;
#endif

public:
    /**
     * @symbol ?DecrementDwellingUpdateInterval@DwellerComponent@@QEAAXXZ
     * @hash   -596918237
     */
    MCAPI void DecrementDwellingUpdateInterval();
    /**
     * @symbol ??0DwellerComponent@@QEAA@XZ
     * @hash   638848858
     */
    MCAPI DwellerComponent();
    /**
     * @symbol ??0DwellerComponent@@QEAA@$$QEAV0@@Z
     * @hash   1117768549
     */
    MCAPI DwellerComponent(class DwellerComponent &&);
    /**
     * @symbol ?addAdditionalSaveData@DwellerComponent@@QEBAXAEAVCompoundTag@@AEBVActor@@@Z
     * @hash   -1590041511
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    /**
     * @symbol ?checkandUpdateDwellingStatus@DwellerComponent@@QEAAXAEBVActor@@PEAVVillage@@@Z
     * @hash   1825067136
     */
    MCAPI void checkandUpdateDwellingStatus(class Actor const &, class Village *);
    /**
     * @symbol ?clearPreferredProfession@DwellerComponent@@QEAAXXZ
     * @hash   1967294181
     */
    MCAPI void clearPreferredProfession();
    /**
     * @symbol ?fixupProfession@DwellerComponent@@QEAAXAEBVActor@@PEAVVillage@@@Z
     * @hash   535707198
     */
    MCAPI void fixupProfession(class Actor const &, class Village *);
    /**
     * @symbol ?getCanFindPOI@DwellerComponent@@QEBA_NXZ
     * @hash   -79196238
     */
    MCAPI bool getCanFindPOI() const;
    /**
     * @symbol ?getDwellerRole@DwellerComponent@@QEBA?AW4DwellerRole@@XZ
     * @hash   1296600736
     */
    MCAPI enum class DwellerRole getDwellerRole() const;
    /**
     * @symbol ?getDwellingUniqueID@DwellerComponent@@QEBA?AVUUID@mce@@XZ
     * @hash   -1057271590
     */
    MCAPI class mce::UUID getDwellingUniqueID() const;
    /**
     * @symbol ?getDwellingUpdateInterval@DwellerComponent@@QEBA_KXZ
     * @hash   -1314862249
     */
    MCAPI unsigned __int64 getDwellingUpdateInterval() const;
    /**
     * @symbol ?getFixUpRole@DwellerComponent@@QEBA_NXZ
     * @hash   509917714
     */
    MCAPI bool getFixUpRole() const;
    /**
     * @symbol ?getPreferredProfession@DwellerComponent@@QEBAAEBVHashedString@@XZ
     * @hash   -1377157952
     */
    MCAPI class HashedString const & getPreferredProfession() const;
    /**
     * @symbol ?getUpdateIntervalBase@DwellerComponent@@QEBA_KXZ
     * @hash   -1599860951
     */
    MCAPI unsigned __int64 getUpdateIntervalBase() const;
    /**
     * @symbol ?getUpdateIntervalVariant@DwellerComponent@@QEBAHXZ
     * @hash   -1628852936
     */
    MCAPI int getUpdateIntervalVariant() const;
    /**
     * @symbol ?getVillage@DwellerComponent@@QEBA?BV?$weak_ptr@VVillage@@@std@@AEBVActor@@@Z
     * @hash   1456013094
     */
    MCAPI class std::weak_ptr<class Village> const getVillage(class Actor const &) const;
    /**
     * @symbol ?getVillageCenter@DwellerComponent@@QEBA?AVBlockPos@@AEBVActor@@@Z
     * @hash   -1049537785
     */
    MCAPI class BlockPos getVillageCenter(class Actor const &) const;
    /**
     * @symbol ?hasDwelling@DwellerComponent@@QEBA_NXZ
     * @hash   -651702552
     */
    MCAPI bool hasDwelling() const;
    /**
     * @symbol ?hasPreferredProfession@DwellerComponent@@QEBA_NAEBVActor@@@Z
     * @hash   -251347967
     */
    MCAPI bool hasPreferredProfession(class Actor const &) const;
    /**
     * @symbol ?initFromDefinition@DwellerComponent@@QEAAXAEAVActor@@@Z
     * @hash   326330234
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?isWithinRestriction@DwellerComponent@@QEBA_NAEBVActor@@@Z
     * @hash   1246591895
     */
    MCAPI bool isWithinRestriction(class Actor const &) const;
    /**
     * @symbol ?needsToFixupProfession@DwellerComponent@@QEBA_NAEBVActor@@@Z
     * @hash   394498767
     */
    MCAPI bool needsToFixupProfession(class Actor const &) const;
    /**
     * @symbol ?needsToFixupVillageRole@DwellerComponent@@QEBA_NAEBVActor@@PEAVVillage@@@Z
     * @hash   646601779
     */
    MCAPI bool needsToFixupVillageRole(class Actor const &, class Village *) const;
    /**
     * @symbol ?onDeath@DwellerComponent@@QEAAXAEAVActor@@AEBVActorDamageSource@@@Z
     * @hash   1134404899
     */
    MCAPI void onDeath(class Actor &, class ActorDamageSource const &);
    /**
     * @symbol ?onDimensionChange@DwellerComponent@@QEAAXAEAVActor@@@Z
     * @hash   -366938004
     */
    MCAPI void onDimensionChange(class Actor &);
    /**
     * @symbol ?onRemove@DwellerComponent@@QEAAXAEAVActor@@@Z
     * @hash   -69622
     */
    MCAPI void onRemove(class Actor &);
    /**
     * @symbol ??4DwellerComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -1735745064
     */
    MCAPI class DwellerComponent & operator=(class DwellerComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@DwellerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -2073824138
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setDwellingUniqueID@DwellerComponent@@QEAAXAEAVActor@@VUUID@mce@@@Z
     * @hash   -1268767047
     */
    MCAPI void setDwellingUniqueID(class Actor &, class mce::UUID);
    /**
     * @symbol ?setDwellingUpdateInterval@DwellerComponent@@QEAAX_K@Z
     * @hash   -895767789
     */
    MCAPI void setDwellingUpdateInterval(unsigned __int64);
    /**
     * @symbol ?setFixUpRole@DwellerComponent@@QEAAX_N@Z
     * @hash   -1341370974
     */
    MCAPI void setFixUpRole(bool);
    /**
     * @symbol ?setLastHurtByMob@DwellerComponent@@QEAAXAEAVActor@@PEAVMob@@@Z
     * @hash   1344251780
     */
    MCAPI void setLastHurtByMob(class Actor &, class Mob *);
    /**
     * @symbol ?trySetPreferredProfession@DwellerComponent@@QEAA_NAEBVActor@@AEBVHashedString@@@Z
     * @hash   2014954096
     */
    MCAPI bool trySetPreferredProfession(class Actor const &, class HashedString const &);
    /**
     * @symbol ?tryToFixupRole@DwellerComponent@@QEAA_NAEBVActor@@PEAVVillage@@@Z
     * @hash   -1719849107
     */
    MCAPI bool tryToFixupRole(class Actor const &, class Village *);
    /**
     * @symbol ?tryToMigrate@DwellerComponent@@QEAA_NAEAVActor@@PEAVVillage@@1@Z
     * @hash   -449396492
     */
    MCAPI bool tryToMigrate(class Actor &, class Village *, class Village *);
    /**
     * @symbol ?wantsToMigrate@DwellerComponent@@QEBA_NAEBVActor@@PEAVVillage@@@Z
     * @hash   -657086457
     */
    MCAPI bool wantsToMigrate(class Actor const &, class Village *) const;
    /**
     * @symbol ??1DwellerComponent@@QEAA@XZ
     * @hash   -501279272
     */
    MCAPI ~DwellerComponent();

//private:
    /**
     * @symbol ?_isLockedInToProfession@DwellerComponent@@AEBA_NAEBVActor@@@Z
     * @hash   684358924
     */
    MCAPI bool _isLockedInToProfession(class Actor const &) const;

private:
    /**
     * @symbol ?DWELLING_ROLES@DwellerComponent@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellerRole@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellerRole@@@std@@@2@@std@@B
     * @hash   41678269
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerRole, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerRole>>> const DWELLING_ROLES;
    /**
     * @symbol ?DWELLING_TYPES@DwellerComponent@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellingType@DwellerComponent@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4DwellingType@DwellerComponent@@@std@@@2@@std@@B
     * @hash   -175685979
     */
    MCAPI static class std::unordered_map<std::string, enum class DwellerComponent::DwellingType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class DwellerComponent::DwellingType>>> const DWELLING_TYPES;

};