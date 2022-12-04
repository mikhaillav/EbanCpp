/**
 * @file  Warden.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class Warden.
 *
 */
class Warden : public Monster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDEN
public:
    class Warden& operator=(class Warden const &) = delete;
    Warden(class Warden const &) = delete;
    Warden() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   -1268276625
     */
    virtual ~Warden();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol ?canDisableShield@Warden@@UEAA_NXZ
     * @hash   -495696315
     */
    virtual bool canDisableShield();
    /**
     * @vftbl  50
     * @symbol ?normalTick@Warden@@UEAAXXZ
     * @hash   -131921370
     */
    virtual void normalTick();
    /**
     * @vftbl  63
     * @hash   -89434495
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  116
     * @symbol ?setTarget@Warden@@UEAAXPEAVActor@@@Z
     * @hash   1513482494
     */
    virtual void setTarget(class Actor *);
    /**
     * @vftbl  137
     * @symbol ?isInvulnerableTo@Warden@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   1614405267
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  192
     * @symbol ?onSynchedDataUpdate@Warden@@UEAAXH@Z
     * @hash   -1002189699
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  257
     * @symbol ?onPush@Warden@@UEAAXAEAVActor@@@Z
     * @hash   710610252
     */
    virtual void onPush(class Actor &);
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@Warden@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   592899115
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  300
     * @symbol ?checkSpawnRules@Warden@@UEAA_N_N@Z
     * @hash   240216212
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  301
     * @symbol ?checkSpawnObstruction@Warden@@UEBA_NXZ
     * @hash   423787728
     */
    virtual bool checkSpawnObstruction() const;
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  311
     * @symbol ?doHurtTarget@Warden@@MEAA_NPEAVActor@@AEBW4ActorDamageCause@@@Z
     * @hash   1496899986
     */
    virtual bool doHurtTarget(class Actor *, enum class ActorDamageCause const &);
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
    /**
     * @symbol ??0Warden@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1322676481
     */
    MCAPI Warden(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};