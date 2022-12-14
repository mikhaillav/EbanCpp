/**
 * @file  LevelListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelListener.
 *
 */
class LevelListener : public BlockSourceListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELLISTENER
public:
    class LevelListener& operator=(class LevelListener const &) = delete;
    LevelListener(class LevelListener const &) = delete;
    LevelListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   569906470
     */
    virtual ~LevelListener();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1402786588
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  8
     * @hash   -1399092504
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1398168983
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @hash   -382068605
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol ?addParticle@LevelListener@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     * @hash   35575535
     */
    virtual class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELLISTENER
    /**
     * @symbol ?addBreakingItemParticleEffect@LevelListener@@UEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
     * @hash   1209019117
     */
    MCVAPI void addBreakingItemParticleEffect(class Vec3 const &, enum class ParticleType, struct ResolvedItemIconInfo const &);
    /**
     * @symbol ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVActor@@0AEBVVec3@@AEBVMolangVariableMap@@@Z
     * @hash   173027258
     */
    MCVAPI void addParticleEffect(class HashedString const &, class Actor const &, class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @symbol ?addParticleEffect@LevelListener@@UEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
     * @hash   795075571
     */
    MCVAPI void addParticleEffect(class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @symbol ?addTerrainParticleEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
     * @hash   1531908012
     */
    MCVAPI void addTerrainParticleEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @symbol ?addTerrainSlideEffect@LevelListener@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
     * @hash   -12677681
     */
    MCVAPI void addTerrainSlideEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @symbol ?allChanged@LevelListener@@UEAAXXZ
     * @hash   137279042
     */
    MCVAPI void allChanged();
    /**
     * @symbol ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
     * @hash   1892749457
     */
    MCVAPI void levelEvent(enum class LevelEvent, class CompoundTag const &);
    /**
     * @symbol ?levelEvent@LevelListener@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
     * @hash   1051750086
     */
    MCVAPI void levelEvent(enum class LevelEvent, class Vec3 const &, int);
    /**
     * @symbol ?levelSoundEvent@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     * @hash   2136805012
     */
    MCVAPI void levelSoundEvent(std::string const &, class Vec3 const &, float, float);
    /**
     * @symbol ?levelSoundEvent@LevelListener@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
     * @hash   528227945
     */
    MCVAPI void levelSoundEvent(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol ?onChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     * @hash   -1430654919
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol ?onChunkReloaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     * @hash   1824074956
     */
    MCVAPI void onChunkReloaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol ?onChunkUnloaded@LevelListener@@UEAAXAEAVLevelChunk@@@Z
     * @hash   -404882416
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @symbol ?onEntityAdded@LevelListener@@UEAAXAEAVActor@@@Z
     * @hash   -19451062
     */
    MCVAPI void onEntityAdded(class Actor &);
    /**
     * @symbol ?onEntityRemoved@LevelListener@@UEAAXAEAVActor@@@Z
     * @hash   375194474
     */
    MCVAPI void onEntityRemoved(class Actor &);
    /**
     * @symbol ?onLevelDestruction@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1365916752
     */
    MCVAPI void onLevelDestruction(std::string const &);
    /**
     * @symbol ?onSubChunkLoaded@LevelListener@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
     * @hash   -1039001951
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource &, class LevelChunk &, short, bool);
    /**
     * @symbol ?playMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     * @hash   -1579768138
     */
    MCVAPI void playMusic(std::string const &, class Vec3 const &, float, float);
    /**
     * @symbol ?playStreamingMusic@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
     * @hash   -1088483671
     */
    MCVAPI void playStreamingMusic(std::string const &, int, int, int);
    /**
     * @symbol ?playerListChanged@LevelListener@@UEAAXXZ
     * @hash   1037230468
     */
    MCVAPI void playerListChanged();
    /**
     * @symbol ?sendServerLegacyParticle@LevelListener@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
     * @hash   493125804
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @symbol ?stopAllSounds@LevelListener@@UEAAXXZ
     * @hash   -810999150
     */
    MCVAPI void stopAllSounds();
    /**
     * @symbol ?stopSoundEvent@LevelListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -301278608
     */
    MCVAPI void stopSoundEvent(std::string const &);
    /**
     * @symbol ?takePicture@LevelListener@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
     * @hash   -1237988272
     */
    MCVAPI void takePicture(class cg::ImageBuffer &, class Actor *, class Actor *, struct ScreenshotOptions &);
#endif

};