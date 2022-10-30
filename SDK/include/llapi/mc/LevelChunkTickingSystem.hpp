/**
 * @file  LevelChunkTickingSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkTickingSystem.
 *
 */
class LevelChunkTickingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKTICKINGSYSTEM
public:
    class LevelChunkTickingSystem& operator=(class LevelChunkTickingSystem const &) = delete;
    LevelChunkTickingSystem(class LevelChunkTickingSystem const &) = delete;
    LevelChunkTickingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   189786553
     */
    virtual ~LevelChunkTickingSystem();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@LevelChunkTickingSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   530641755
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol ?_determineLevelChunksToTick@LevelChunkTickingSystem@@CAXAEBVActor@@AEAVBlockSource@@AEAVLoadedChunksComponent@@AEAV?$vector@V?$shared_ptr@VLevelChunk@@@std@@V?$allocator@V?$shared_ptr@VLevelChunk@@@std@@@2@@std@@3AEBUTick@@@Z
     * @hash   688071858
     */
    MCAPI static void _determineLevelChunksToTick(class Actor const &, class BlockSource &, class LoadedChunksComponent &, std::vector<class std::shared_ptr<class LevelChunk>> &, std::vector<class std::shared_ptr<class LevelChunk>> &, struct Tick const &);
    /**
     * @symbol ?_tickLevelChunksAroundActor@LevelChunkTickingSystem@@CAXAEAVActor@@AEAVBlockSource@@AEAVLoadedChunksComponent@@@Z
     * @hash   621543538
     */
    MCAPI static void _tickLevelChunksAroundActor(class Actor &, class BlockSource &, class LoadedChunksComponent &);
    /**
     * @symbol ?_tickLevelChunksAroundActorView@LevelChunkTickingSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorFlag@@@@VBlockSourceComponent@@VLoadedChunksComponent@@@@@Z
     * @hash   -1794218186
     */
    MCAPI static void _tickLevelChunksAroundActorView(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorFlag>, class BlockSourceComponent, class LoadedChunksComponent> &);

private:

};