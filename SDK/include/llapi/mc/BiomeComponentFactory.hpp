/**
 * @file  BiomeComponentFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeComponentFactory.
 *
 */
class BiomeComponentFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMECOMPONENTFACTORY
public:
    class BiomeComponentFactory& operator=(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory(class BiomeComponentFactory const &) = delete;
    BiomeComponentFactory() = delete;
#endif

public:
    /**
     * @symbol ??0BiomeComponentFactory@@QEAA@W4FactoryScope@0@@Z
     * @hash   -1421715947
     */
    MCAPI BiomeComponentFactory(enum class BiomeComponentFactory::FactoryScope);
    /**
     * @symbol ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVCompoundTag@@@Z
     * @hash   397329794
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class CompoundTag &) const;
    /**
     * @symbol ?processDataComponents@BiomeComponentFactory@@QEBAXAEAVBiome@@AEAVIWorldRegistriesProvider@@AEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   114095507
     */
    MCAPI void processDataComponents(class Biome &, class IWorldRegistriesProvider &, class Json::Value &, class SemVersion const &) const;
    /**
     * @symbol ?registrationFinished@BiomeComponentFactory@@QEAAXXZ
     * @hash   -1736050583
     */
    MCAPI void registrationFinished();

};