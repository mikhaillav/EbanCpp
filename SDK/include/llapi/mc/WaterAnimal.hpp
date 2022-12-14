/**
 * @file  WaterAnimal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaterAnimal.
 *
 */
class WaterAnimal : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERANIMAL
public:
    class WaterAnimal& operator=(class WaterAnimal const &) = delete;
    WaterAnimal(class WaterAnimal const &) = delete;
    WaterAnimal() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   -1309539903
     */
    virtual ~WaterAnimal();
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
     * @symbol ?aiStep@WaterAnimal@@UEAAXXZ
     * @hash   -1546051720
     */
    virtual void aiStep();
    /**
     * @vftbl  302
     * @symbol ?checkSpawnRules@WaterAnimal@@UEAA_N_N@Z
     * @hash   -1539018382
     */
    virtual bool checkSpawnRules(bool);
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
     * @vftbl  364
     * @symbol ?getFlopVerticalVelocityFactor@WaterAnimal@@UEBAMXZ
     * @hash   527448426
     */
    virtual float getFlopVerticalVelocityFactor() const;
    /**
     * @vftbl  365
     * @symbol ?getFlopHorizontalVelocityFactor@WaterAnimal@@UEBAMXZ
     * @hash   -1414943640
     */
    virtual float getFlopHorizontalVelocityFactor() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WATERANIMAL
    /**
     * @symbol ?useNewAi@WaterAnimal@@MEBA_NXZ
     * @hash   1473731663
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0WaterAnimal@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1148550449
     */
    MCAPI WaterAnimal(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?preAiStep@WaterAnimal@@QEAAXXZ
     * @hash   857928019
     */
    MCAPI void preAiStep();

};