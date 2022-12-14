/**
 * @file  EvocationIllager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EvocationIllager.
 *
 */
class EvocationIllager : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVOCATIONILLAGER
public:
    class EvocationIllager& operator=(class EvocationIllager const &) = delete;
    EvocationIllager(class EvocationIllager const &) = delete;
    EvocationIllager() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@EvocationIllager@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1236418017
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   1798118870
     */
    virtual ~EvocationIllager();
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
     * @vftbl  252
     * @symbol ?die@EvocationIllager@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   -1110591633
     */
    virtual void die(class ActorDamageSource const &);
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
     * @symbol ?aiStep@EvocationIllager@@UEAAXXZ
     * @hash   1790707327
     */
    virtual void aiStep();
    /**
     * @vftbl  310
     * @hash   -1210025534
     */
    virtual void __unk_vfn_310();
    /**
     * @vftbl  312
     * @symbol ?isAlliedTo@EvocationIllager@@UEAA_NPEAVMob@@@Z
     * @hash   -1150750913
     */
    virtual bool isAlliedTo(class Mob *);
    /**
     * @vftbl  314
     * @hash   -1156359450
     */
    virtual void __unk_vfn_314();
    /**
     * @vftbl  319
     * @symbol ?getArmorValue@EvocationIllager@@MEBAHXZ
     * @hash   -762461424
     */
    virtual int getArmorValue() const;
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EVOCATIONILLAGER
    /**
     * @symbol ?canExistInPeaceful@EvocationIllager@@UEBA_NXZ
     * @hash   -1569761961
     */
    MCVAPI bool canExistInPeaceful() const;
    /**
     * @symbol ?useNewAi@EvocationIllager@@MEBA_NXZ
     * @hash   460044342
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0EvocationIllager@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   946602248
     */
    MCAPI EvocationIllager(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};