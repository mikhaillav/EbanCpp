/**
 * @file  Goat.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Goat.
 *
 */
class Goat : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOAT
public:
    class Goat& operator=(class Goat const &) = delete;
    Goat(class Goat const &) = delete;
    Goat() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?initializeComponents@Goat@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1146537435
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -13240859
     */
    virtual ~Goat();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @hash   -182486203
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @hash   -130769027
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @hash   -135209808
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -125227901
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @hash   -105657136
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @hash   -102886573
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @hash   1337741896
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @hash   1331454073
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1359906400
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  133
     * @symbol ?getAmbientSound@Goat@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   1672047913
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl  141
     * @symbol ?handleEntityEvent@Goat@@UEAAXW4ActorEvent@@H@Z
     * @hash   1273584795
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  181
     * @hash   1511261978
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @hash   1593557213
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  220
     * @hash   -2032751088
     */
    virtual void __unk_vfn_220();
    /**
     * @vftbl  221
     * @hash   -2018004543
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  247
     * @hash   -2005177115
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl  250
     * @hash   -739509363
     */
    virtual void __unk_vfn_250();
    /**
     * @vftbl  266
     * @symbol ?updateEntitySpecificMolangVariables@Goat@@UEAAXAEAVRenderParams@@@Z
     * @hash   48117939
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  268
     * @hash   -1904234636
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl  272
     * @symbol ?readAdditionalSaveData@Goat@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1634984812
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  273
     * @symbol ?addAdditionalSaveData@Goat@@UEBAXAEAVCompoundTag@@@Z
     * @hash   486533281
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  276
     * @hash   -1870241183
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl  283
     * @hash   -1894354595
     */
    virtual void __unk_vfn_283();
    /**
     * @vftbl  287
     * @symbol ?getHurtSound@Goat@@UEAA?AW4LevelSoundEvent@@XZ
     * @hash   -297253433
     */
    virtual enum class LevelSoundEvent getHurtSound();
    /**
     * @vftbl  288
     * @symbol ?getDeathSound@Goat@@UEAA?AW4LevelSoundEvent@@XZ
     * @hash   971585150
     */
    virtual enum class LevelSoundEvent getDeathSound();
    /**
     * @vftbl  310
     * @hash   -1210025534
     */
    virtual void __unk_vfn_310();
    /**
     * @vftbl  314
     * @hash   -1156359450
     */
    virtual void __unk_vfn_314();
    /**
     * @vftbl  348
     * @hash   -1073989257
     */
    virtual void __unk_vfn_348();
    /**
     * @vftbl  362
     * @hash   -1022272081
     */
    virtual void __unk_vfn_362();
    /**
     * @symbol ??0Goat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1472714615
     */
    MCAPI Goat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getHornCount@Goat@@QEBAHXZ
     * @hash   350252760
     */
    MCAPI int getHornCount() const;
    /**
     * @symbol ?isScreaming@Goat@@QEAA_NXZ
     * @hash   -1139069220
     */
    MCAPI bool isScreaming();
    /**
     * @symbol ?reduceHornCount@Goat@@QEAAXXZ
     * @hash   64561187
     */
    MCAPI void reduceHornCount();

//private:

private:
    /**
     * @symbol ?DEFAULT_HORN_COUNT@Goat@@0HA
     * @hash   955054561
     */
    MCAPI static int DEFAULT_HORN_COUNT;
    /**
     * @symbol ?SCREAMING_GOAT_VARIANT@Goat@@0HA
     * @hash   262080737
     */
    MCAPI static int SCREAMING_GOAT_VARIANT;

};