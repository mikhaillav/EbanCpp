/**
 * @file  EvocationFang.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EvocationFang.
 *
 */
class EvocationFang : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVOCATIONFANG
public:
    class EvocationFang& operator=(class EvocationFang const &) = delete;
    EvocationFang(class EvocationFang const &) = delete;
    EvocationFang() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   594714226
     */
    virtual ~EvocationFang();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  48
     * @symbol ?normalTick@EvocationFang@@UEAAXXZ
     * @hash   -621991081
     */
    virtual void normalTick();
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
     * @symbol ?getShadowRadius@EvocationFang@@UEBAMXZ
     * @hash   268136658
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
     * @hash   -95675229
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
     * @vftbl  141
     * @symbol ?handleEntityEvent@EvocationFang@@UEAAXW4ActorEvent@@H@Z
     * @hash   316199362
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  171
     * @symbol ?getSourceUniqueID@EvocationFang@@UEBA?AUActorUniqueID@@XZ
     * @hash   472710002
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
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
     * @symbol ??0EvocationFang@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -909853616
     */
    MCAPI EvocationFang(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:
    /**
     * @symbol ?_dealDamageTo@EvocationFang@@AEAAXAEAVMob@@@Z
     * @hash   1732258351
     */
    MCAPI void _dealDamageTo(class Mob &);

private:

};