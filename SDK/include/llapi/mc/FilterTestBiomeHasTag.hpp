/**
 * @file  FilterTestBiomeHasTag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestBiomeHasTag.
 *
 */
class FilterTestBiomeHasTag : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTBIOMEHASTAG
public:
    class FilterTestBiomeHasTag& operator=(class FilterTestBiomeHasTag const &) = delete;
    FilterTestBiomeHasTag(class FilterTestBiomeHasTag const &) = delete;
    FilterTestBiomeHasTag() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1297811292
     */
    virtual ~FilterTestBiomeHasTag();
    /**
     * @vftbl  2
     * @symbol ?evaluate@FilterTestBiomeHasTag@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -267717368
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  3
     * @symbol ?finalizeParsedValue@FilterTestBiomeHasTag@@UEAAXAEAVIWorldRegistriesProvider@@@Z
     * @hash   1395467548
     */
    virtual void finalizeParsedValue(class IWorldRegistriesProvider &);
    /**
     * @vftbl  4
     * @symbol ?getName@FilterTestBiomeHasTag@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   214088250
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

//private:
    /**
     * @symbol ?_evalBiome@FilterTestBiomeHasTag@@AEBA_NAEBVBiome@@AEBUFilterContext@@@Z
     * @hash   1032993216
     */
    MCAPI bool _evalBiome(class Biome const &, struct FilterContext const &) const;

private:

};