/**
 * @file  Wolf.hpp
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
 * @brief MC class Wolf.
 *
 */
class Wolf : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLF
public:
    class Wolf& operator=(class Wolf const &) = delete;
    Wolf(class Wolf const &) = delete;
    Wolf() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   -1891055204
     */
    virtual ~Wolf();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  48
     * @symbol ?normalTick@Wolf@@UEAAXXZ
     * @hash   -771981399
     */
    virtual void normalTick();
    /**
     * @vftbl  53
     * @symbol ?addPassenger@Wolf@@UEAAXAEAVActor@@@Z
     * @hash   1361262921
     */
    virtual void addPassenger(class Actor &);
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
     * @vftbl  119
     * @symbol ?setSitting@Wolf@@UEAAX_N@Z
     * @hash   1578616013
     */
    virtual void setSitting(bool);
    /**
     * @vftbl  133
     * @symbol ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   412250962
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl  141
     * @symbol ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
     * @hash   611586804
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  167
     * @symbol ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   233133913
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  181
     * @hash   1511261978
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  190
     * @symbol ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
     * @hash   1121873178
     */
    virtual void onSynchedDataUpdate(int);
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
     * @symbol ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   1563568510
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
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
     * @vftbl  310
     * @hash   -1210025534
     */
    virtual void __unk_vfn_310();
    /**
     * @vftbl  312
     * @symbol ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
     * @hash   -1840787659
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @vftbl  314
     * @hash   -1156359450
     */
    virtual void __unk_vfn_314();
    /**
     * @vftbl  341
     * @symbol ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
     * @hash   872878877
     */
    virtual void onBorn(class Actor &, class Actor &);
    /**
     * @vftbl  348
     * @hash   -1073989257
     */
    virtual void __unk_vfn_348();
    /**
     * @vftbl  357
     * @symbol ?newServerAiStep@Wolf@@UEAAXXZ
     * @hash   -1002612100
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  362
     * @hash   -1022272081
     */
    virtual void __unk_vfn_362();
    /**
     * @symbol ??0Wolf@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -469699890
     */
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getHeadRollAngle@Wolf@@QEAAMM@Z
     * @hash   1871424657
     */
    MCAPI float getHeadRollAngle(float);
    /**
     * @symbol ?getShakeAnim@Wolf@@QEBAMXZ
     * @hash   665837718
     */
    MCAPI float getShakeAnim() const;
    /**
     * @symbol ?getTailAngle@Wolf@@QEAAMXZ
     * @hash   -998736856
     */
    MCAPI float getTailAngle();
    /**
     * @symbol ?isShaking@Wolf@@QEBA_NXZ
     * @hash   1124258622
     */
    MCAPI bool isShaking() const;
    /**
     * @symbol ?postNormalTick@Wolf@@QEAAXXZ
     * @hash   -907888363
     */
    MCAPI void postNormalTick();

//private:
    /**
     * @symbol ?_avoidSnowBury@Wolf@@AEAAXXZ
     * @hash   2106882237
     */
    MCAPI void _avoidSnowBury();

private:

};