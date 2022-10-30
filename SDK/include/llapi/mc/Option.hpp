/**
 * @file  Option.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Option.
 *
 */
class Option {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTION
public:
    class Option& operator=(class Option const &) = delete;
    Option(class Option const &) = delete;
    Option() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1418685761
     */
    virtual ~Option();
    /**
     * @vftbl  1
     * @symbol ?save@BoolOption@@UEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     * @hash   -1624698346
     */
    virtual void save(std::vector<struct std::pair<std::string, std::string>> &) = 0;
    /**
     * @vftbl  2
     * @symbol ?load@BoolOption@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1174284081
     */
    virtual void load(std::string const &) = 0;
    /**
     * @vftbl  3
     * @symbol ?load@Option@@UEAAXAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     * @hash   1137924924
     */
    virtual void load(class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);
    /**
     * @vftbl  4
     * @symbol ?load@Option@@UEAAXAEBVValue@Json@@@Z
     * @hash   1107609392
     */
    virtual void load(class Json::Value const &);
    /**
     * @symbol ??0Option@@QEAA@W4OptionID@@W4OptionOwnerType@@W4OptionResetFlags@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3W4OptionType@@@Z
     * @hash   -604858029
     */
    MCAPI Option(enum class OptionID, enum class OptionOwnerType, enum class OptionResetFlags, std::string const &, std::string const &, enum class OptionType);
    /**
     * @symbol ?canModify@Option@@QEBA_NXZ
     * @hash   1759529626
     */
    MCAPI bool canModify() const;
    /**
     * @symbol ?getBool@Option@@QEBA_NXZ
     * @hash   1711555862
     */
    MCAPI bool getBool() const;
    /**
     * @symbol ?hasOverrideSource@Option@@QEBA_NXZ
     * @hash   -1630335224
     */
    MCAPI bool hasOverrideSource() const;
    /**
     * @symbol ?notifyOptionValueChanged@Option@@QEAAX_N@Z
     * @hash   -420198746
     */
    MCAPI void notifyOptionValueChanged(bool);
    /**
     * @symbol ?registerLock@Option@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEA_N@Z@std@@@Z
     * @hash   -2007394379
     */
    MCAPI class Bedrock::PubSub::Subscription registerLock(class std::function<void (bool &)>);
    /**
     * @symbol ?registerObserver@Option@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEBVOption@@@Z@std@@@Z
     * @hash   1223543124
     */
    MCAPI class Bedrock::PubSub::Subscription registerObserver(class std::function<void (class Option const &)>);
    /**
     * @symbol ?setRequestSaveCallback@Option@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z
     * @hash   -1601196569
     */
    MCAPI void setRequestSaveCallback(class std::function<void (bool)>);
    /**
     * @symbol ?read@Option@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_N@Z
     * @hash   -158404637
     */
    MCAPI static bool read(std::string const &, bool &);

//private:
    /**
     * @symbol ?_updatePropertyVector@Option@@AEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   -1106421559
     */
    MCAPI void _updatePropertyVector(std::vector<struct std::pair<std::string, std::string>> &, std::string const &);

private:

};