/**
 * @file  ResourceInformation.hpp
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
 * @brief MC class ResourceInformation.
 *
 */
class ResourceInformation {

#define AFTER_EXTRA
// Add Member There
public:
enum class ResourceType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEINFORMATION
public:
    class ResourceInformation& operator=(class ResourceInformation const &) = delete;
    ResourceInformation() = delete;
#endif

public:
    /**
     * @symbol ??0ResourceInformation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@AEBVUUID@mce@@W4ResourceType@0@00@Z
     * @hash   -1790004526
     */
    MCAPI ResourceInformation(std::string const &, class SemVersion const &, class mce::UUID const &, enum class ResourceInformation::ResourceType, std::string const &, std::string const &);
    /**
     * @symbol ??0ResourceInformation@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@AEBVUUID@mce@@000@Z
     * @hash   1091071221
     */
    MCAPI ResourceInformation(std::string const &, class SemVersion const &, class mce::UUID const &, std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ??0ResourceInformation@@QEAA@AEBV0@@Z
     * @hash   356573105
     */
    MCAPI ResourceInformation(class ResourceInformation const &);
    /**
     * @symbol ?satisfies@ResourceInformation@@QEBA_NAEBUPackIdVersion@@@Z
     * @hash   -1488521205
     */
    MCAPI bool satisfies(struct PackIdVersion const &) const;
    /**
     * @symbol ??1ResourceInformation@@QEAA@XZ
     * @hash   2014651562
     */
    MCAPI ~ResourceInformation();
    /**
     * @symbol ?ResourceTypeFromString@ResourceInformation@@SA?AW4ResourceType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   940545044
     */
    MCAPI static enum class ResourceInformation::ResourceType ResourceTypeFromString(std::string const &);
    /**
     * @symbol ?StringFromResourceType@ResourceInformation@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ResourceType@1@@Z
     * @hash   1742221968
     */
    MCAPI static std::string const & StringFromResourceType(enum class ResourceInformation::ResourceType);

};