/**
 * @file  LevelChunkFinalDeleter.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure LevelChunkFinalDeleter.
 *
 */
struct LevelChunkFinalDeleter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKFINALDELETER
public:
    struct LevelChunkFinalDeleter& operator=(struct LevelChunkFinalDeleter const &) = delete;
    LevelChunkFinalDeleter(struct LevelChunkFinalDeleter const &) = delete;
    LevelChunkFinalDeleter() = delete;
#endif

public:
    /**
     * @symbol ??RLevelChunkFinalDeleter@@QEAAXPEAVLevelChunk@@@Z
     * @hash   -1838439192
     */
    MCAPI void operator()(class LevelChunk *);

};