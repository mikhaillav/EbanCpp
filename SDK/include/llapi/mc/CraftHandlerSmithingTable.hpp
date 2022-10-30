/**
 * @file  CraftHandlerSmithingTable.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerSmithingTable.
 *
 */
class CraftHandlerSmithingTable : public CraftHandlerBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERSMITHINGTABLE
public:
    class CraftHandlerSmithingTable& operator=(class CraftHandlerSmithingTable const &) = delete;
    CraftHandlerSmithingTable(class CraftHandlerSmithingTable const &) = delete;
    CraftHandlerSmithingTable() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   700669043
     */
    virtual ~CraftHandlerSmithingTable();
    /**
     * @vftbl  4
     * @symbol ?_handleCraftAction@CraftHandlerSmithingTable@@EEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     * @hash   -1963154096
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vftbl  6
     * @symbol ?_getLevelRecipes@CraftHandlerSmithingTable@@EEBAPEBVRecipes@@XZ
     * @hash   87947265
     */
    virtual class Recipes const * _getLevelRecipes() const;
    /**
     * @symbol ??0CraftHandlerSmithingTable@@QEAA@AEAVPlayer@@AEAVItemStackRequestActionCraftHandler@@@Z
     * @hash   -111120077
     */
    MCAPI CraftHandlerSmithingTable(class Player &, class ItemStackRequestActionCraftHandler &);

};