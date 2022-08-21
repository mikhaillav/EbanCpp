// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VillagerBase : public Mob {

#define AFTER_EXTRA
// Add Member There
    enum BiomeType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERBASE
public:
    class VillagerBase& operator=(class VillagerBase const &) = delete;
    VillagerBase(class VillagerBase const &) = delete;
    VillagerBase() = delete;
#endif


public:
    /*11*/ virtual void reloadComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~VillagerBase();
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*139*/ virtual void onLightningHit();
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*269*/ virtual void __unk_vfn_269();
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*277*/ virtual void __unk_vfn_277();
    /*284*/ virtual void _onSizeUpdated();
    /*285*/ virtual void __unk_vfn_285();
    /*313*/ virtual void __unk_vfn_313();
    /*317*/ virtual void __unk_vfn_317();
    /*351*/ virtual void __unk_vfn_351();
    /*361*/ virtual void _serverAiMobStep();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
    MCVAPI bool interactPreventDefault();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI VillagerBase(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void consumeLoveFood();
    MCAPI int getBreedingStackIndex() const;
    MCAPI bool isChasing() const;
    MCAPI bool isWillingToBreed(bool);
    MCAPI void setChasing(bool);
    MCAPI void setWillingToBreed(bool);
    MCAPI void stopGoals();
    MCAPI static enum VillagerBase::BiomeType BiomeStrToEnum(std::string const &);

//private:
    MCAPI void _addParticlesAroundSelf(enum ParticleType);


private:


};