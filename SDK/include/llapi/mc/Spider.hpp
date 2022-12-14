/**
 * @file  Spider.hpp
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
 * @brief MC class Spider.
 *
 */
class Spider : public Monster {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIDER
public:
    class Spider& operator=(class Spider const &) = delete;
    Spider(class Spider const &) = delete;
    Spider() = delete;
#endif

public:
    /**
     * @vftbl  14
     * @hash   -325965521
     */
    virtual ~Spider();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  48
     * @symbol ?normalTick@Spider@@UEAAXXZ
     * @hash   -1508808810
     */
    virtual void normalTick();
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
     * @vftbl  75
     * @symbol ?setBlockMovementSlowdownMultiplier@Spider@@UEAAXAEBVBlockLegacy@@AEBVVec3@@@Z
     * @hash   -1585977793
     */
    virtual void setBlockMovementSlowdownMultiplier(class BlockLegacy const &, class Vec3 const &);
    /**
     * @vftbl  79
     * @symbol ?getShadowRadius@Spider@@UEBAMXZ
     * @hash   -653154287
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
     * @vftbl  131
     * @symbol ?shouldRender@Spider@@UEBA_NXZ
     * @hash   523662636
     */
    virtual bool shouldRender() const;
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
     * @vftbl  210
     * @symbol ?canBeAffected@Spider@@UEBA_NI@Z
     * @hash   -510972002
     */
    virtual bool canBeAffected(unsigned int) const;
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
     * @symbol ?_playStepSound@Spider@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1187288019
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
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
     * @symbol ?aiStep@Spider@@UEAAXXZ
     * @hash   -1888252762
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
     * @vftbl  362
     * @hash   -1022272081
     */
    virtual void __unk_vfn_362();
    /**
     * @vftbl  365
     * @symbol ?getModelScale@Spider@@UEBAMXZ
     * @hash   -1487585312
     */
    virtual float getModelScale() const;
    /**
     * @vftbl  366
     * @symbol ?getSpiderType@Spider@@UEBA?AW4Type@1@XZ
     * @hash   1845381641
     */
    virtual enum class Spider::Type getSpiderType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPIDER
    /**
     * @symbol ?useNewAi@Spider@@UEBA_NXZ
     * @hash   -1520141916
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Spider@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -612746895
     */
    MCAPI Spider(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};