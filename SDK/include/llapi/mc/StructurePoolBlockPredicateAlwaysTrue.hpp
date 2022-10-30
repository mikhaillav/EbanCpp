/**
 * @file  StructurePoolBlockPredicateAlwaysTrue.hpp
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
 * @brief MC class StructurePoolBlockPredicateAlwaysTrue.
 *
 */
class StructurePoolBlockPredicateAlwaysTrue {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUE
public:
    class StructurePoolBlockPredicateAlwaysTrue& operator=(class StructurePoolBlockPredicateAlwaysTrue const &) = delete;
    StructurePoolBlockPredicateAlwaysTrue(class StructurePoolBlockPredicateAlwaysTrue const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUE
    /**
     * @symbol ?test@StructurePoolBlockPredicateAlwaysTrue@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
     * @hash   1805325597
     */
    MCVAPI bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @symbol ?test@StructurePoolBlockPredicateAlwaysTrue@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
     * @hash   -152617693
     */
    MCVAPI bool test(class Block const &, class Randomize &) const;
#endif
    /**
     * @symbol ??0StructurePoolBlockPredicateAlwaysTrue@@QEAA@XZ
     * @hash   78399538
     */
    MCAPI StructurePoolBlockPredicateAlwaysTrue();

};