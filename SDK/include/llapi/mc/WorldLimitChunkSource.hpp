/**
 * @file  WorldLimitChunkSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldLimitChunkSource.
 *
 */
class WorldLimitChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDLIMITCHUNKSOURCE
public:
    class WorldLimitChunkSource& operator=(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1909117651
     */
    virtual ~WorldLimitChunkSource();
    /**
     * @vftbl  3
     * @symbol ?getExistingChunk@WorldLimitChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@@Z
     * @hash   1265228581
     */
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /**
     * @vftbl  7
     * @symbol ?createNewChunk@WorldLimitChunkSource@@UEAA?AV?$shared_ptr@VLevelChunk@@@std@@AEBVChunkPos@@W4LoadMode@ChunkSource@@_N@Z
     * @hash   -895260621
     */
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum class ChunkSource::LoadMode, bool);
    /**
     * @vftbl  22
     * @symbol ?isWithinWorldLimit@WorldLimitChunkSource@@UEBA_NAEBVChunkPos@@@Z
     * @hash   -2055471327
     */
    virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /**
     * @vftbl  26
     * @symbol ?canCreateViews@WorldLimitChunkSource@@UEBA_NXZ
     * @hash   2047761995
     */
    virtual bool canCreateViews() const;
    /**
     * @symbol ??0WorldLimitChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@AEBVBlockPos@@HH@Z
     * @hash   -542059017
     */
    MCAPI WorldLimitChunkSource(std::unique_ptr<class ChunkSource>, class BlockPos const &, int, int);

};