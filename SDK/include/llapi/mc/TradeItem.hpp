/**
 * @file  TradeItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure TradeItem.
 *
 */
struct TradeItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADEITEM
public:
    struct TradeItem& operator=(struct TradeItem const &) = delete;
    TradeItem(struct TradeItem const &) = delete;
    TradeItem() = delete;
#endif

public:
    /**
     * @symbol ??4TradeItem@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   613944270
     */
    MCAPI struct TradeItem & operator=(struct TradeItem &&);
    /**
     * @symbol ??1TradeItem@@QEAA@XZ
     * @hash   -2040091949
     */
    MCAPI ~TradeItem();

};