/**
 * @file  UnverifiedCertificate.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "WebToken.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class UnverifiedCertificate.
 *
 */
class UnverifiedCertificate {

#define AFTER_EXTRA
// Add Member There
    const WebToken mRawToken;
    std::unique_ptr<UnverifiedCertificate> mParentUnverifiedCertificate;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNVERIFIEDCERTIFICATE
public:
    class UnverifiedCertificate& operator=(class UnverifiedCertificate const &) = delete;
    UnverifiedCertificate() = delete;
#endif

public:
    /**
     * @symbol ??0UnverifiedCertificate@@QEAA@AEBV0@@Z
     * @hash   1059263393
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate const &);
    /**
     * @symbol ??0UnverifiedCertificate@@QEAA@$$QEAV0@@Z
     * @hash   1135506325
     */
    MCAPI UnverifiedCertificate(class UnverifiedCertificate &&);
    /**
     * @symbol ?getIdentityPublicKey@UnverifiedCertificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   896283138
     */
    MCAPI std::string getIdentityPublicKey() const;
    /**
     * @symbol ?toString@UnverifiedCertificate@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1261137070
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?verify@UnverifiedCertificate@@QEBA?AV?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   -640052776
     */
    MCAPI std::unique_ptr<class Certificate> verify(std::vector<std::string> const &) const;
    /**
     * @symbol ??1UnverifiedCertificate@@QEAA@XZ
     * @hash   -476922606
     */
    MCAPI ~UnverifiedCertificate();
    /**
     * @symbol ?fromString@UnverifiedCertificate@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -234807914
     */
    MCAPI static class UnverifiedCertificate fromString(std::string const &);

//private:
    /**
     * @symbol ??0UnverifiedCertificate@@AEAA@AEBVWebToken@@V?$unique_ptr@VUnverifiedCertificate@@U?$default_delete@VUnverifiedCertificate@@@std@@@std@@@Z
     * @hash   -1514511521
     */
    MCAPI UnverifiedCertificate(class WebToken const &, std::unique_ptr<class UnverifiedCertificate>);
    /**
     * @symbol ?addToChain@UnverifiedCertificate@@AEBAXAEAVValue@Json@@@Z
     * @hash   1675272903
     */
    MCAPI void addToChain(class Json::Value &) const;

private:

};