/**
 * @file  BlockDescriptor.hpp
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
 * @brief MC class BlockDescriptor.
 *
 */
class BlockDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESCRIPTOR
public:
    class BlockDescriptor& operator=(class BlockDescriptor const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockDescriptor@@QEAA@XZ
     * @hash   -1733451752
     */
    MCAPI BlockDescriptor();
    /**
     * @symbol ??0BlockDescriptor@@QEAA@AEBVHashedString@@@Z
     * @hash   -1525296783
     */
    MCAPI BlockDescriptor(class HashedString const &);
    /**
     * @symbol ??0BlockDescriptor@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEBV?$vector@VBlockState@BlockDescriptor@@V?$allocator@VBlockState@BlockDescriptor@@@std@@@2@@Z
     * @hash   1475999579
     */
    MCAPI BlockDescriptor(std::string const &, std::vector<class BlockDescriptor::BlockState> const &&);
    /**
     * @symbol ??0BlockDescriptor@@QEAA@AEBV0@@Z
     * @hash   -606772735
     */
    MCAPI BlockDescriptor(class BlockDescriptor const &);
    /**
     * @symbol ??0BlockDescriptor@@QEAA@$$QEAV0@@Z
     * @hash   276828017
     */
    MCAPI BlockDescriptor(class BlockDescriptor &&);
    /**
     * @symbol ?getBlockOrUnknownBlock@BlockDescriptor@@QEBAAEBVBlock@@XZ
     * @hash   2140812896
     */
    MCAPI class Block const & getBlockOrUnknownBlock() const;
    /**
     * @symbol ?getTagExpression@BlockDescriptor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   135380660
     */
    MCAPI std::string const & getTagExpression() const;
    /**
     * @symbol ?isValid@BlockDescriptor@@QEBA_NXZ
     * @hash   -1423131738
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?matches@BlockDescriptor@@QEBA_NAEBVBlock@@@Z
     * @hash   -461494621
     */
    MCAPI bool matches(class Block const &) const;
    /**
     * @symbol ??4BlockDescriptor@@QEAAXAEBV0@@Z
     * @hash   -253241349
     */
    MCAPI void operator=(class BlockDescriptor const &);
    /**
     * @symbol ??4BlockDescriptor@@QEAAX$$QEAV0@@Z
     * @hash   -887891973
     */
    MCAPI void operator=(class BlockDescriptor &&);
    /**
     * @symbol ?toCompoundTag@BlockDescriptor@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1205650250
     */
    MCAPI std::unique_ptr<class CompoundTag> toCompoundTag() const;
    /**
     * @symbol ?tryGetBlock@BlockDescriptor@@QEBAPEBVBlock@@XZ
     * @hash   747882505
     */
    MCAPI class Block const * tryGetBlock() const;
    /**
     * @symbol ??1BlockDescriptor@@QEAA@XZ
     * @hash   1687603000
     */
    MCAPI ~BlockDescriptor();
    /**
     * @symbol ?JSON_NAME_FIELD@BlockDescriptor@@2QBDB
     * @hash   874071453
     */
    MCAPI static char const JSON_NAME_FIELD[];
    /**
     * @symbol ?JSON_STATES_FIELD@BlockDescriptor@@2QBDB
     * @hash   -353790445
     */
    MCAPI static char const JSON_STATES_FIELD[];
    /**
     * @symbol ?JSON_TAGS_FIELD@BlockDescriptor@@2QBDB
     * @hash   -1613493967
     */
    MCAPI static char const JSON_TAGS_FIELD[];
    /**
     * @symbol ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBV1@@Z
     * @hash   -106324357
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class BlockDescriptor const &);
    /**
     * @symbol ?anyMatch@BlockDescriptor@@SA_NAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEBVBlock@@@Z
     * @hash   -102864886
     */
    MCAPI static bool anyMatch(std::vector<class BlockDescriptor> const &, class Block const &);
    /**
     * @symbol ?bindType@BlockDescriptor@@SAXXZ
     * @hash   -2088131873
     */
    MCAPI static void bindType();
    /**
     * @symbol ?fromCompoundTag@BlockDescriptor@@SA?AV1@AEBVCompoundTag@@@Z
     * @hash   -1408542036
     */
    MCAPI static class BlockDescriptor fromCompoundTag(class CompoundTag const &);
    /**
     * @symbol ?fromTagExpression@BlockDescriptor@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MolangVersion@@@Z
     * @hash   811721623
     */
    MCAPI static class BlockDescriptor fromTagExpression(std::string const &, enum class MolangVersion);

//private:
    /**
     * @symbol ?_anyTagsMatch@BlockDescriptor@@AEBA_NAEBVBlock@@@Z
     * @hash   -1987330622
     */
    MCAPI bool _anyTagsMatch(class Block const &) const;
    /**
     * @symbol ?_resolveImpl@BlockDescriptor@@AEBAXXZ
     * @hash   -338728612
     */
    MCAPI void _resolveImpl() const;

private:

};