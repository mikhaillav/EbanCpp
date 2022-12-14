/**
 * @file  GameVersion.hpp
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
 * @brief MC class GameVersion.
 *
 */
class GameVersion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0GameVersion@@QEAA@AEBV0@@Z
     * @hash   539193569
     */
    MCAPI GameVersion(class GameVersion const &);
    /**
     * @symbol ??0GameVersion@@QEAA@XZ
     * @hash   -263725966
     */
    MCAPI GameVersion();
    /**
     * @symbol ??0GameVersion@@QEAA@IIIII@Z
     * @hash   1693656323
     */
    MCAPI GameVersion(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    /**
     * @symbol ??0GameVersion@@QEAA@AEBVListTag@@@Z
     * @hash   -859455077
     */
    MCAPI GameVersion(class ListTag const &);
    /**
     * @symbol ?asString@GameVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2028125874
     */
    MCAPI std::string const & asString() const;
    /**
     * @symbol ??MGameVersion@@QEBA_NAEBV0@@Z
     * @hash   1530953842
     */
    MCAPI bool operator<(class GameVersion const &) const;
    /**
     * @symbol ??4GameVersion@@QEAAAEAV0@AEBV0@@Z
     * @hash   -1743666036
     */
    MCAPI class GameVersion & operator=(class GameVersion const &);
    /**
     * @symbol ??4GameVersion@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -1107798240
     */
    MCAPI class GameVersion & operator=(class GameVersion &&);
    /**
     * @symbol ??PGameVersion@@QEBA_NAEBV0@@Z
     * @hash   -1491628614
     */
    MCAPI bool operator>=(class GameVersion const &) const;
    /**
     * @symbol ?serialize@GameVersion@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     * @hash   1422549970
     */
    MCAPI std::unique_ptr<class ListTag> serialize() const;
    /**
     * @symbol ??1GameVersion@@QEAA@XZ
     * @hash   -652534222
     */
    MCAPI ~GameVersion();
    /**
     * @symbol ?current@GameVersion@@SA?AV1@XZ
     * @hash   -659557171
     */
    MCAPI static class GameVersion current();

};