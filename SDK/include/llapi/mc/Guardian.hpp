/**
 * @file  Guardian.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Guardian.
 *
 */
class Guardian : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GUARDIAN
public:
    class Guardian& operator=(class Guardian const &) = delete;
    Guardian(class Guardian const &) = delete;
    Guardian() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1600873924
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -960261625
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -1243314597
     */
    virtual ~Guardian();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  60
     * @hash   -188950850
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @hash   -182486203
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  81
     * @hash   -137980371
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
     * @vftbl  113
     * @symbol ?setTarget@Guardian@@UEAAXPEAVActor@@@Z
     * @hash   1288274538
     */
    virtual void setTarget(class Actor *);
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
     * @vftbl  268
     * @hash   -1904234636
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl  269
     * @symbol ?_hurt@Guardian@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   -303099137
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  272
     * @symbol ?readAdditionalSaveData@Guardian@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1414130719
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  273
     * @symbol ?addAdditionalSaveData@Guardian@@MEBAXAEAVCompoundTag@@@Z
     * @hash   -895029762
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  276
     * @hash   -1870241183
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl  282
     * @symbol ?_onSizeUpdated@Guardian@@EEAAXXZ
     * @hash   740433188
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  283
     * @hash   -1894354595
     */
    virtual void __unk_vfn_283();
    /**
     * @vftbl  297
     * @symbol ?aiStep@Guardian@@UEAAXXZ
     * @hash   -1350194198
     */
    virtual void aiStep();
    /**
     * @vftbl  302
     * @symbol ?checkSpawnRules@Guardian@@UEAA_N_N@Z
     * @hash   1441639904
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  310
     * @hash   -1210025534
     */
    virtual void __unk_vfn_310();
    /**
     * @vftbl  311
     * @symbol ?getMaxHeadXRot@Guardian@@UEAAMXZ
     * @hash   -150993477
     */
    virtual float getMaxHeadXRot();
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
     * @vftbl  364
     * @symbol ?isDarkEnoughToSpawn@Guardian@@MEBA_NXZ
     * @hash   -589504768
     */
    virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GUARDIAN
    /**
     * @symbol ?canSeeInvisible@Guardian@@UEBA_NXZ
     * @hash   2062217729
     */
    MCVAPI bool canSeeInvisible() const;
#endif
    /**
     * @symbol ??0Guardian@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   991430957
     */
    MCAPI Guardian(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getAttackDuration@Guardian@@QEAAHXZ
     * @hash   -523032632
     */
    MCAPI int getAttackDuration();
    /**
     * @symbol ?getMoveEyeVector@Guardian@@QEAA?AVVec3@@XZ
     * @hash   1382634964
     */
    MCAPI class Vec3 getMoveEyeVector();
    /**
     * @symbol ?getTargetEntity@Guardian@@QEBAPEAVActor@@XZ
     * @hash   -1863595593
     */
    MCAPI class Actor * getTargetEntity() const;
    /**
     * @symbol ?isElder@Guardian@@QEBA_NXZ
     * @hash   -1828351298
     */
    MCAPI bool isElder() const;
    /**
     * @symbol ?isElderGhost@Guardian@@QEBA_NXZ
     * @hash   246570634
     */
    MCAPI bool isElderGhost() const;
    /**
     * @symbol ?preAiStep@Guardian@@QEAAXXZ
     * @hash   2017952723
     */
    MCAPI void preAiStep();
    /**
     * @symbol ?setAttackTime@Guardian@@QEAAXH@Z
     * @hash   -1512373672
     */
    MCAPI void setAttackTime(int);
    /**
     * @symbol ?setElder@Guardian@@QEAAX_N@Z
     * @hash   -1316690000
     */
    MCAPI void setElder(bool);

//protected:
    /**
     * @symbol ?registerLoopingSounds@Guardian@@IEAAXXZ
     * @hash   -1801313887
     */
    MCAPI void registerLoopingSounds();

//private:

protected:

private:
    /**
     * @symbol ?ATTACK_TIME@Guardian@@0HB
     * @hash   -1605828621
     */
    MCAPI static int const ATTACK_TIME;
    /**
     * @symbol ?FIRST_DAMAGE_TIME@Guardian@@0HB
     * @hash   -1191504063
     */
    MCAPI static int const FIRST_DAMAGE_TIME;

};