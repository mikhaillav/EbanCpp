/**
 * @file  SHStartPiece.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SHStairsDown.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHStartPiece.
 *
 */
class SHStartPiece : public SHStairsDown {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTARTPIECE
public:
    class SHStartPiece& operator=(class SHStartPiece const &) = delete;
    SHStartPiece(class SHStartPiece const &) = delete;
    SHStartPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1807476107
     */
    virtual ~SHStartPiece();
    /**
     * @vftbl  2
     * @symbol ?getType@SHStartPiece@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -1829967190
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @symbol ??0SHStartPiece@@QEAA@HAEAVRandom@@HH@Z
     * @hash   -1858829503
     */
    MCAPI SHStartPiece(int, class Random &, int, int);

};