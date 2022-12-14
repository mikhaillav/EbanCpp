/**
 * @file  SetItemDataFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetItemDataFunction.
 *
 */
class SetItemDataFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETITEMDATAFUNCTION
public:
    class SetItemDataFunction& operator=(class SetItemDataFunction const &) = delete;
    SetItemDataFunction(class SetItemDataFunction const &) = delete;
    SetItemDataFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1234346149
     */
    virtual ~SetItemDataFunction();
    /**
     * @vftbl  1
     * @symbol ?apply@SetItemDataFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   -401767965
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol ?apply@SetItemDataFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   1651280984
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?deserialize@SetItemDataFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     * @hash   -1819745953
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};