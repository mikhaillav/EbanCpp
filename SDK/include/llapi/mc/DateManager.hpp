/**
 * @file  DateManager.hpp
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
 * @brief MC class DateManager.
 *
 */
class DateManager {

#define AFTER_EXTRA
// Add Member There
public:
enum class TimeZoneType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATEMANAGER
public:
    class DateManager& operator=(class DateManager const &) = delete;
    DateManager(class DateManager const &) = delete;
    DateManager() = delete;
#endif

public:
    /**
     * @symbol ?getCurrentTimestampFileName@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -476494408
     */
    MCAPI static std::string getCurrentTimestampFileName();
    /**
     * @symbol ?getRealTime@DateManager@@SA_JXZ
     * @hash   -1854784181
     */
    MCAPI static __int64 getRealTime();
    /**
     * @symbol ?toDateTime@DateManager@@SA?AUtm@@_JW4TimeZoneType@1@@Z
     * @hash   -671097595
     */
    MCAPI static struct tm toDateTime(__int64, enum class DateManager::TimeZoneType);
    /**
     * @symbol ?toString@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUtm@@AEBV23@@Z
     * @hash   1237715328
     */
    MCAPI static std::string toString(struct tm const &, std::string const &);
    /**
     * @symbol ?toString@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_JW4TimeZoneType@1@AEBV23@@Z
     * @hash   1921710789
     */
    MCAPI static std::string toString(__int64 const &, enum class DateManager::TimeZoneType, std::string const &);
    /**
     * @symbol ?toString_DateTime@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUtm@@W4TimeZoneType@1@@Z
     * @hash   -1024570102
     */
    MCAPI static std::string toString_DateTime(struct tm const &, enum class DateManager::TimeZoneType);
    /**
     * @symbol ?toString_DateTime@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_JW4TimeZoneType@1@@Z
     * @hash   1318435678
     */
    MCAPI static std::string toString_DateTime(__int64 const &, enum class DateManager::TimeZoneType);

};