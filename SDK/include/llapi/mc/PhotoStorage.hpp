/**
 * @file  PhotoStorage.hpp
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
 * @brief MC class PhotoStorage.
 *
 */
class PhotoStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOSTORAGE
public:
    class PhotoStorage& operator=(class PhotoStorage const &) = delete;
    PhotoStorage(class PhotoStorage const &) = delete;
    PhotoStorage() = delete;
#endif

public:
    /**
     * @symbol ??0PhotoStorage@@QEAA@AEBVPath@Core@@@Z
     * @hash   -1171312398
     */
    MCAPI PhotoStorage(class Core::Path const &);
    /**
     * @symbol ??1PhotoStorage@@QEAA@XZ
     * @hash   -245714045
     */
    MCAPI ~PhotoStorage();
    /**
     * @symbol ?BOOKS_DIR@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1186965629
     */
    MCAPI static std::string const BOOKS_DIR;
    /**
     * @symbol ?MANIFEST_NAME@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1811287415
     */
    MCAPI static std::string const MANIFEST_NAME;
    /**
     * @symbol ?PHOTOITEM_DIR@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -6159399
     */
    MCAPI static std::string const PHOTOITEM_DIR;
    /**
     * @symbol ?PHOTO_DIR@PhotoStorage@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1962588787
     */
    MCAPI static std::string const PHOTO_DIR;

//private:
    /**
     * @symbol ?_readManifest@PhotoStorage@@AEAAXXZ
     * @hash   336172503
     */
    MCAPI void _readManifest();

private:

};