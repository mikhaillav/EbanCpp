/**
 * @file  EquipmentSlots.hpp
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
 * @brief MC namespace EquipmentSlots.
 *
 */
namespace EquipmentSlots {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?equipmentSlotToString@EquipmentSlots@@YAPEBDW4EquipmentSlot@@@Z
     * @hash   -107993159
     */
    MCAPI char const * equipmentSlotToString(enum class EquipmentSlot);
    /**
     * @symbol ?hashToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@@AEB_K@Z
     * @hash   -1588577486
     */
    MCAPI enum class EquipmentSlot hashToEquipmentSlot(unsigned __int64 const &);
    /**
     * @symbol ?stringToEquipmentSlot@EquipmentSlots@@YA?AW4EquipmentSlot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1765158586
     */
    MCAPI enum class EquipmentSlot stringToEquipmentSlot(std::string const &);

};