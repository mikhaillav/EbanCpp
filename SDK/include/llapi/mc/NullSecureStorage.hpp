/**
 * @file  NullSecureStorage.hpp
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
 * @brief MC class NullSecureStorage.
 *
 */
class NullSecureStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSECURESTORAGE
public:
    class NullSecureStorage& operator=(class NullSecureStorage const &) = delete;
    NullSecureStorage(class NullSecureStorage const &) = delete;
    NullSecureStorage() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSECURESTORAGE
    /**
     * @symbol ?add@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   1695909565
     */
    MCVAPI bool add(std::string const &, std::string const &);
    /**
     * @symbol ?addOrUpdate@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   1251834601
     */
    MCVAPI bool addOrUpdate(std::string const &, std::string const &);
    /**
     * @symbol ?get@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
     * @hash   121744629
     */
    MCVAPI bool get(std::string const &, std::string &);
    /**
     * @symbol ?remove@NullSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1965173740
     */
    MCVAPI bool remove(std::string const &);
#endif

};