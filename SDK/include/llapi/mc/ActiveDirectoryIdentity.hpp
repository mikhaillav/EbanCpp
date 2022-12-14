/**
 * @file  ActiveDirectoryIdentity.hpp
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
 * @brief MC class ActiveDirectoryIdentity.
 *
 */
class ActiveDirectoryIdentity {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTIVEDIRECTORYIDENTITY
public:
    class ActiveDirectoryIdentity& operator=(class ActiveDirectoryIdentity const &) = delete;
    ActiveDirectoryIdentity(class ActiveDirectoryIdentity const &) = delete;
    ActiveDirectoryIdentity() = delete;
#endif

public:
    /**
     * @symbol ?IS_VALID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -360410229
     */
    MCAPI static std::string const IS_VALID_FIELD;
    /**
     * @symbol ?JWT_EXPIRATION_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   138741419
     */
    MCAPI static std::string const JWT_EXPIRATION_FIELD;
    /**
     * @symbol ?JWT_REQUEST_ID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1890022645
     */
    MCAPI static std::string const JWT_REQUEST_ID_FIELD;
    /**
     * @symbol ?PAYLOAD_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1190247991
     */
    MCAPI static std::string const PAYLOAD_FIELD;
    /**
     * @symbol ?PUBLIC_KEY@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1023804267
     */
    MCAPI static std::string const PUBLIC_KEY;
    /**
     * @symbol ?REQUEST_ID_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   56465003
     */
    MCAPI static std::string const REQUEST_ID_FIELD;
    /**
     * @symbol ?RESPONSE_FIELD@ActiveDirectoryIdentity@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   547457451
     */
    MCAPI static std::string const RESPONSE_FIELD;

//private:

private:
    /**
     * @symbol ?mCachedServiceEndpoint@ActiveDirectoryIdentity@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A
     * @hash   1605630396
     */
    MCAPI static std::string mCachedServiceEndpoint;

};