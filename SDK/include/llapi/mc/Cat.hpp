/**
 * @file  Cat.hpp
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
 * @brief MC class Cat.
 *
 */
class Cat : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAT
public:
    class Cat& operator=(class Cat const &) = delete;
    Cat(class Cat const &) = delete;
    Cat() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   1062586404
     */
    virtual ~Cat();
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
     * @vftbl  120
     * @symbol ?onTame@Cat@@UEAAXXZ
     * @hash   756540453
     */
    virtual void onTame();
    /**
     * @vftbl  133
     * @symbol ?getAmbientSound@Cat@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   1025855934
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
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
     * @symbol ?updateEntitySpecificMolangVariables@Cat@@UEAAXAEAVRenderParams@@@Z
     * @hash   1029792846
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  268
     * @hash   -1904234636
     */
    virtual void __unk_vfn_268();
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
     * @vftbl  297
     * @symbol ?aiStep@Cat@@UEAAXXZ
     * @hash   -113101019
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
     * @vftbl  348
     * @hash   -1073989257
     */
    virtual void __unk_vfn_348();
    /**
     * @vftbl  358
     * @symbol ?_serverAiMobStep@Cat@@UEAAXXZ
     * @hash   1862868931
     */
    virtual void _serverAiMobStep();
    /**
     * @vftbl  362
     * @hash   -1022272081
     */
    virtual void __unk_vfn_362();
    /**
     * @symbol ??0Cat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1497312882
     */
    MCAPI Cat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?SNEAK_SPEED_MOD@Cat@@2MB
     * @hash   1635353611
     */
    MCAPI static float const SNEAK_SPEED_MOD;
    /**
     * @symbol ?SPRINT_SPEED_MOD@Cat@@2MB
     * @hash   374694585
     */
    MCAPI static float const SPRINT_SPEED_MOD;

//private:
    /**
     * @symbol ?getLieOnPlayer@Cat@@AEAAMXZ
     * @hash   1637631856
     */
    MCAPI float getLieOnPlayer();

private:

};