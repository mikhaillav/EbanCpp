/**
 * @file  ActorDamageSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Actor;

enum class ActorDamageCause : int {
    None = -0x01,
    Override = 0x00,
    Contact = 0x01,
    EntityAttack = 0x02,
    Projectile = 0x03,
    Suffocation = 0x04,
    Fall = 0x05,
    Fire = 0x06,
    FireTick = 0x07,
    Lava = 0x08,
    Drowning = 0x09,
    BlockExplosion = 0x0A,
    EntityExplosion = 0x0B,
    Void = 0x0C,
    Suicide = 0x0D,
    Magic = 0x0E,
    Wither = 0x0F,
    Starve = 0x10,
    Anvil = 0x11,
    Thorns = 0x12,
    FallingBlock = 0x13,
    Piston = 0x14,
    FlyIntoWall = 0x15,
    Magma = 0x16,
    Fireworks = 0x17,
    Lightning = 0x18,
    Charging = 0x19,
    Temperature = 0x1A,
    Freezing = 0x1B,
    Stalactite = 0x1C,
    Stalagmite = 0x1D,
    All = 0x1F,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDamageSource.
 *
 */
class ActorDamageSource {

#define AFTER_EXTRA
// Add Member There
    ActorDamageCause mCause;
    char filler[4];

public:
    LIAPI Actor* getEntity();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGESOURCE
public:
    class ActorDamageSource& operator=(class ActorDamageSource const &) = delete;
    ActorDamageSource(class ActorDamageSource const &) = delete;
    ActorDamageSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2076512077
     */
    virtual ~ActorDamageSource();
    /**
     * @vftbl  1
     * @symbol ?isEntitySource@ActorDamageSource@@UEBA_NXZ
     * @hash   1440713601
     */
    virtual bool isEntitySource() const;
    /**
     * @vftbl  2
     * @symbol ?isChildEntitySource@ActorDamageSource@@UEBA_NXZ
     * @hash   1360624041
     */
    virtual bool isChildEntitySource() const;
    /**
     * @vftbl  3
     * @symbol ?isBlockSource@ActorDamageSource@@UEBA_NXZ
     * @hash   1482408663
     */
    virtual bool isBlockSource() const;
    /**
     * @vftbl  4
     * @symbol ?isFire@ActorDamageSource@@UEBA_NXZ
     * @hash   73912617
     */
    virtual bool isFire() const;
    /**
     * @vftbl  5
     * @symbol ?isReducedByResistanceEffect@ActorDamageSource@@UEBA_NXZ
     * @hash   1315550062
     */
    virtual bool isReducedByResistanceEffect() const;
    /**
     * @vftbl  6
     * @symbol ?isReducedByEnchantReduction@ActorDamageSource@@UEBA_NXZ
     * @hash   -172750770
     */
    virtual bool isReducedByEnchantReduction() const;
    /**
     * @vftbl  7
     * @symbol ?isReducedByArmorReduction@ActorDamageSource@@UEBA_NXZ
     * @hash   278182632
     */
    virtual bool isReducedByArmorReduction() const;
    /**
     * @vftbl  8
     * @symbol ?isFallingBlockDamage@ActorDamageSource@@UEBA_NXZ
     * @hash   -1861501176
     */
    virtual bool isFallingBlockDamage() const;
    /**
     * @vftbl  9
     * @symbol ?isFallDamage@ActorDamageSource@@UEBA_NXZ
     * @hash   -1246043523
     */
    virtual bool isFallDamage() const;
    /**
     * @vftbl  10
     * @symbol ?getDeathMessage@ActorDamageSource@@UEBA?AU?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAVActor@@@Z
     * @hash   1727172871
     */
    virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /**
     * @vftbl  11
     * @symbol ?getIsCreative@ActorDamageSource@@UEBA_NXZ
     * @hash   -511207448
     */
    virtual bool getIsCreative() const;
    /**
     * @vftbl  12
     * @symbol ?getIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
     * @hash   -1442271710
     */
    virtual bool getIsWorldBuilder() const;
    /**
     * @vftbl  13
     * @symbol ?getEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
     * @hash   390376943
     */
    virtual struct ActorUniqueID getEntityUniqueID() const;
    /**
     * @vftbl  14
     * @symbol ?getEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
     * @hash   503769035
     */
    virtual enum class ActorType getEntityType() const;
    /**
     * @vftbl  15
     * @symbol ?getEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
     * @hash   -688867239
     */
    virtual enum class ActorCategory getEntityCategories() const;
    /**
     * @vftbl  16
     * @symbol ?getDamagingEntityIsCreative@ActorDamageSource@@UEBA_NXZ
     * @hash   1576806551
     */
    virtual bool getDamagingEntityIsCreative() const;
    /**
     * @vftbl  17
     * @symbol ?getDamagingEntityIsWorldBuilder@ActorDamageSource@@UEBA_NXZ
     * @hash   -1017688239
     */
    virtual bool getDamagingEntityIsWorldBuilder() const;
    /**
     * @vftbl  18
     * @symbol ?getDamagingEntityUniqueID@ActorDamageSource@@UEBA?AUActorUniqueID@@XZ
     * @hash   -1404916997
     */
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /**
     * @vftbl  19
     * @symbol ?getDamagingEntityType@ActorDamageSource@@UEBA?AW4ActorType@@XZ
     * @hash   1977718743
     */
    virtual enum class ActorType getDamagingEntityType() const;
    /**
     * @vftbl  20
     * @symbol ?getDamagingEntityCategories@ActorDamageSource@@UEBA?AW4ActorCategory@@XZ
     * @hash   -1582370971
     */
    virtual enum class ActorCategory getDamagingEntityCategories() const;
    /**
     * @vftbl  21
     * @symbol ?clone@ActorDamageSource@@UEBA?AV?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@XZ
     * @hash   -1708923113
     */
    virtual std::unique_ptr<class ActorDamageSource> clone() const;
    /**
     * @symbol ??0ActorDamageSource@@QEAA@W4ActorDamageCause@@@Z
     * @hash   571871380
     */
    MCAPI ActorDamageSource(enum class ActorDamageCause);
    /**
     * @symbol ?getCause@ActorDamageSource@@QEBA?AW4ActorDamageCause@@XZ
     * @hash   1177235872
     */
    MCAPI enum class ActorDamageCause getCause() const;
    /**
     * @symbol ?setCause@ActorDamageSource@@QEAAXW4ActorDamageCause@@@Z
     * @hash   1938120042
     */
    MCAPI void setCause(enum class ActorDamageCause);
    /**
     * @symbol ?generateDamageCauseCommandEnum@ActorDamageSource@@SA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@std@@@2@@std@@XZ
     * @hash   1500712473
     */
    MCAPI static std::vector<struct std::pair<std::string, enum class ActorDamageCause>> generateDamageCauseCommandEnum();
    /**
     * @symbol ?isDamageCausedByMob@ActorDamageSource@@SA_NW4ActorDamageCause@@@Z
     * @hash   1114897471
     */
    MCAPI static bool isDamageCausedByMob(enum class ActorDamageCause);
    /**
     * @symbol ?lookupCause@ActorDamageSource@@SA?AW4ActorDamageCause@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -703848259
     */
    MCAPI static enum class ActorDamageCause lookupCause(std::string const &);
    /**
     * @symbol ?lookupCauseName@ActorDamageSource@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@Z
     * @hash   834473005
     */
    MCAPI static std::string const & lookupCauseName(enum class ActorDamageCause);

};