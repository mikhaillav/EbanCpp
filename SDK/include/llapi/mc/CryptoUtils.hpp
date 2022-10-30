/**
 * @file  CryptoUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CryptoUtils.
 *
 */
namespace CryptoUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?getDirectroyChecksum@CryptoUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
     * @hash   59194764
     */
    MCAPI std::string getDirectroyChecksum(class Core::Path const &);
    /**
     * @symbol ?getFileChecksum@CryptoUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
     * @hash   1059045662
     */
    MCAPI std::string getFileChecksum(class Core::Path const &);

};