/**
 * @file  CerealDocumentUpgradeStep.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealDocumentUpgradeStep.
 *
 */
class CerealDocumentUpgradeStep {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALDOCUMENTUPGRADESTEP
public:
    CerealDocumentUpgradeStep() = delete;
#endif

public:
    /**
     * @symbol ??0CerealDocumentUpgradeStep@@QEAA@AEBVSemVersion@@AEBUSchema@reflection@@@Z
     * @hash   -1147675121
     */
    MCAPI CerealDocumentUpgradeStep(class SemVersion const &, struct reflection::Schema const &);
    /**
     * @symbol ??0CerealDocumentUpgradeStep@@QEAA@AEBV0@@Z
     * @hash   -848257999
     */
    MCAPI CerealDocumentUpgradeStep(class CerealDocumentUpgradeStep const &);
    /**
     * @symbol ?addUpgrade@CerealDocumentUpgradeStep@@QEAAXV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
     * @hash   -299388789
     */
    MCAPI void addUpgrade(class std::shared_ptr<class CerealSchemaUpgrade>);
    /**
     * @symbol ?apply@CerealDocumentUpgradeStep@@QEAA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
     * @hash   -1849805493
     */
    MCAPI bool apply(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &, class SemVersion const &);
    /**
     * @symbol ?canUpgrade@CerealDocumentUpgradeStep@@QEBA_NAEBVSemVersion@@@Z
     * @hash   -507439585
     */
    MCAPI bool canUpgrade(class SemVersion const &) const;
    /**
     * @symbol ?getTargetVersion@CerealDocumentUpgradeStep@@QEBAAEBVSemVersion@@XZ
     * @hash   -1448129512
     */
    MCAPI class SemVersion const & getTargetVersion() const;
    /**
     * @symbol ??4CerealDocumentUpgradeStep@@QEAAAEAV0@AEBV0@@Z
     * @hash   490635756
     */
    MCAPI class CerealDocumentUpgradeStep & operator=(class CerealDocumentUpgradeStep const &);

};