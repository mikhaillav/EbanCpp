/**
 * @file  RepairItemRecipe.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepairItemRecipe.
 *
 */
class RepairItemRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPAIRITEMRECIPE
public:
    class RepairItemRecipe& operator=(class RepairItemRecipe const &) = delete;
    RepairItemRecipe(class RepairItemRecipe const &) = delete;
    RepairItemRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2009896392
     */
    virtual ~RepairItemRecipe();
    /**
     * @vftbl  1
     * @symbol ?assemble@RepairItemRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     * @hash   -1039695748
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  2
     * @symbol ?getCraftingSize@RepairItemRecipe@@UEBAHXZ
     * @hash   -2115244506
     */
    virtual int getCraftingSize() const;
    /**
     * @vftbl  3
     * @symbol ?getIngredient@RepairItemRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
     * @hash   660084903
     */
    virtual class RecipeIngredient const & getIngredient(int, int) const;
    /**
     * @vftbl  4
     * @symbol ?getResultItem@RepairItemRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
     * @hash   -868110317
     */
    virtual std::vector<class ItemInstance> const & getResultItem() const;
    /**
     * @vftbl  6
     * @symbol ?matches@RepairItemRecipe@@UEBA_NAEAVCraftingContainer@@AEAVLevel@@@Z
     * @hash   -1585591624
     */
    virtual bool matches(class CraftingContainer &, class Level &) const;
    /**
     * @vftbl  7
     * @symbol ?size@RepairItemRecipe@@UEBAHXZ
     * @hash   51400846
     */
    virtual int size() const;
    /**
     * @symbol ??0RepairItemRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@PEBVUUID@mce@@@Z
     * @hash   377323041
     */
    MCAPI RepairItemRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const *);
    /**
     * @symbol ?ID@RepairItemRecipe@@2VUUID@mce@@A
     * @hash   -948129393
     */
    MCAPI static class mce::UUID ID;

};