/**
 * @file  BlockColorUtil.hpp
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
 * @brief MC namespace BlockColorUtil.
 *
 */
namespace BlockColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?RAINBOW@BlockColorUtil@@3V?$array@W4BlockColor@@$0BA@@std@@A
     * @hash   -1260132272
     */
    MCAPI extern class std::array<enum class BlockColor, 16> RAINBOW;
    /**
     * @symbol ?fromInt@BlockColorUtil@@YA?AW4BlockColor@@H@Z
     * @hash   1200671416
     */
    MCAPI enum class BlockColor fromInt(int);
    /**
     * @symbol ?fromItemColor@BlockColorUtil@@YA?AW4BlockColor@@W4ItemColor@@@Z
     * @hash   388186950
     */
    MCAPI enum class BlockColor fromItemColor(enum class ItemColor);
    /**
     * @symbol ?getColor@BlockColorUtil@@YA?AVColor@mce@@W4BlockColor@@@Z
     * @hash   254815954
     */
    MCAPI class mce::Color getColor(enum class BlockColor);
    /**
     * @symbol ?getName@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     * @hash   330702658
     */
    MCAPI std::string const & getName(enum class BlockColor);
    /**
     * @symbol ?getNameMixedCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     * @hash   -771940318
     */
    MCAPI std::string const & getNameMixedCase(enum class BlockColor);
    /**
     * @symbol ?getNameSnakeCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     * @hash   -1517409112
     */
    MCAPI std::string const & getNameSnakeCase(enum class BlockColor);
    /**
     * @symbol ?getRGBColor@BlockColorUtil@@YAHW4BlockColor@@@Z
     * @hash   1520462320
     */
    MCAPI int getRGBColor(enum class BlockColor);

};