/**
 * @file  PropertyGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "PropertyMetadata.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyGroup.
 *
 */
class PropertyGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYGROUP
public:
    class PropertyGroup& operator=(class PropertyGroup const &) = delete;
    PropertyGroup(class PropertyGroup const &) = delete;
#endif

public:
    /**
     * @symbol ??0PropertyGroup@@QEAA@XZ
     * @hash   179677718
     */
    MCAPI PropertyGroup();
    /**
     * @symbol ?getDefaultBoolValue@PropertyGroup@@QEBA_N_KAEAVRenderParams@@@Z
     * @hash   1201290325
     */
    MCAPI bool getDefaultBoolValue(unsigned __int64, class RenderParams &) const;
    /**
     * @symbol ?getDefaultEnumIndexValue@PropertyGroup@@QEBA_K_KAEAVRenderParams@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1638956059
     */
    MCAPI unsigned __int64 getDefaultEnumIndexValue(unsigned __int64, class RenderParams &, std::string const &) const;
    /**
     * @symbol ?getDefaultFloatValue@PropertyGroup@@QEBAM_KAEAVRenderParams@@@Z
     * @hash   -261210193
     */
    MCAPI float getDefaultFloatValue(unsigned __int64, class RenderParams &) const;
    /**
     * @symbol ?getDefaultIntValue@PropertyGroup@@QEBAH_KAEAVRenderParams@@@Z
     * @hash   -1271449797
     */
    MCAPI int getDefaultIntValue(unsigned __int64, class RenderParams &) const;
    /**
     * @symbol ?getNetworkSyncPropertyDescriptionsAsListTag@PropertyGroup@@QEBA?AVListTag@@XZ
     * @hash   53756932
     */
    MCAPI class ListTag getNetworkSyncPropertyDescriptionsAsListTag() const;
    /**
     * @symbol ?getPropertyMetadata@PropertyGroup@@QEBAPEBVPropertyMetadata@@_K@Z
     * @hash   -1941389265
     */
    MCAPI class PropertyMetadata const * getPropertyMetadata(unsigned __int64) const;
    /**
     * @symbol ?getPropertyMetadataByString@PropertyGroup@@QEBAPEBVPropertyMetadata@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   498128918
     */
    MCAPI class PropertyMetadata const * getPropertyMetadataByString(std::string const &) const;
    /**
     * @symbol ??1PropertyGroup@@QEAA@XZ
     * @hash   779569606
     */
    MCAPI ~PropertyGroup();
    /**
     * @symbol ?MAX_ENUM_SIZE@PropertyGroup@@2_KB
     * @hash   1756552224
     */
    MCAPI static unsigned __int64 const MAX_ENUM_SIZE;
    /**
     * @symbol ?MAX_ENUM_VALUE_SIZE@PropertyGroup@@2_KB
     * @hash   1336613032
     */
    MCAPI static unsigned __int64 const MAX_ENUM_VALUE_SIZE;
    /**
     * @symbol ?isValidEnumEntry@PropertyGroup@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -236440881
     */
    MCAPI static bool isValidEnumEntry(std::string const &);
    /**
     * @symbol ?loadPropertiesFromJson@PropertyGroup@@SA?AV?$shared_ptr@$$CBVPropertyGroup@@@std@@AEBVValue@Json@@AEBVSemVersion@@@Z
     * @hash   -249736947
     */
    MCAPI static class std::shared_ptr<class PropertyGroup const> loadPropertiesFromJson(class Json::Value const &, class SemVersion const &);

//private:
    /**
     * @symbol ?_addBoolProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     * @hash   -2065952871
     */
    MCAPI void _addBoolProperty(std::string const &, bool, bool);
    /**
     * @symbol ?_addEnumIndexProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N_KAEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@@Z
     * @hash   -650529367
     */
    MCAPI void _addEnumIndexProperty(std::string const &, bool, unsigned __int64, std::vector<class HashedString> const &);
    /**
     * @symbol ?_addFloatProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NMMM@Z
     * @hash   602043737
     */
    MCAPI void _addFloatProperty(std::string const &, bool, float, float, float);
    /**
     * @symbol ?_addIntProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHHH@Z
     * @hash   -2139846893
     */
    MCAPI void _addIntProperty(std::string const &, bool, int, int, int);
    /**
     * @symbol ?_addPropertyMetadata@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NW4ContainedType@PropertyMetadata@@@Z
     * @hash   -1849627583
     */
    MCAPI void _addPropertyMetadata(std::string const &, bool, enum class PropertyMetadata::ContainedType);
    /**
     * @symbol ?_getFriendlyJsonTypeString@PropertyGroup@@AEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainedType@PropertyMetadata@@@Z
     * @hash   414667768
     */
    MCAPI std::string const & _getFriendlyJsonTypeString(enum class PropertyMetadata::ContainedType);
    /**
     * @symbol ?_loadPropertyFromJson@PropertyGroup@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@W4MolangVersion@@_N@Z
     * @hash   -46706594
     */
    MCAPI bool _loadPropertyFromJson(std::string const &, class Json::Value const &, enum class MolangVersion, bool);
    /**
     * @symbol ?_reserveSpaceForTypes@PropertyGroup@@AEAAXAEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z
     * @hash   -612203220
     */
    MCAPI void _reserveSpaceForTypes(std::vector<unsigned __int64> const &);
    /**
     * @symbol ?_validateDataType@PropertyGroup@@AEAA_NAEBVValue@Json@@W4ContainedType@PropertyMetadata@@@Z
     * @hash   -1166015322
     */
    MCAPI bool _validateDataType(class Json::Value const &, enum class PropertyMetadata::ContainedType);
    /**
     * @symbol ?_getJsonPropertyType@PropertyGroup@@CA?AW4ContainedType@PropertyMetadata@@AEBVValue@Json@@@Z
     * @hash   -866259063
     */
    MCAPI static enum class PropertyMetadata::ContainedType _getJsonPropertyType(class Json::Value const &);

private:

};