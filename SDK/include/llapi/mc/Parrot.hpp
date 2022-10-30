/**
 * @file  Parrot.hpp
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
 * @brief MC class Parrot.
 *
 */
class Parrot : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROT
public:
    class Parrot& operator=(class Parrot const &) = delete;
    Parrot(class Parrot const &) = delete;
    Parrot() = delete;
#endif

public:
    /**
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Parrot@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1756225675
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -60699808
     */
    virtual ~Parrot();
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
     * @vftbl  79
     * @symbol ?getShadowRadius@Parrot@@UEBAMXZ
     * @hash   -2046049456
     */
    virtual float getShadowRadius() const;
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
     * @vftbl  119
     * @symbol ?setSitting@Parrot@@UEAAX_N@Z
     * @hash   621651697
     */
    virtual void setSitting(bool);
    /**
     * @vftbl  130
     * @symbol ?vehicleLanded@Parrot@@UEAAXAEBVVec3@@0@Z
     * @hash   -1493296977
     */
    virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /**
     * @vftbl  132
     * @symbol ?playAmbientSound@Parrot@@UEAAXXZ
     * @hash   -436485252
     */
    virtual void playAmbientSound();
    /**
     * @vftbl  133
     * @symbol ?getAmbientSound@Parrot@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   1618860206
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl  134
     * @symbol ?isInvulnerableTo@Parrot@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   277003940
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  181
     * @hash   1511261978
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  193
     * @symbol ?canBePulledIntoVehicle@Parrot@@UEBA_NXZ
     * @hash   -1303602361
     */
    virtual bool canBePulledIntoVehicle() const;
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
     * @vftbl  274
     * @symbol ?_playStepSound@Parrot@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   127245948
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  276
     * @hash   -1877452527
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl  283
     * @hash   -1894354595
     */
    virtual void __unk_vfn_283();
    /**
     * @vftbl  297
     * @symbol ?aiStep@Parrot@@UEAAXXZ
     * @hash   1314727685
     */
    virtual void aiStep();
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
     * @vftbl  346
     * @symbol ?_getWalkTargetValue@Parrot@@UEAAMAEBVBlockPos@@@Z
     * @hash   255520465
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARROT
    /**
     * @symbol ?_makeFlySound@Parrot@@MEBA_NXZ
     * @hash   -510478572
     */
    MCVAPI bool _makeFlySound() const;
    /**
     * @symbol ?useNewAi@Parrot@@MEBA_NXZ
     * @hash   -979811668
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Parrot@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   401253634
     */
    MCAPI Parrot(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getFlap@Parrot@@QEBAMXZ
     * @hash   -342092828
     */
    MCAPI float getFlap() const;
    /**
     * @symbol ?getFlapSpeed@Parrot@@QEBAMXZ
     * @hash   -1559871370
     */
    MCAPI float getFlapSpeed() const;
    /**
     * @symbol ?postAiStep@Parrot@@QEAAXXZ
     * @hash   -194679371
     */
    MCAPI void postAiStep();

};