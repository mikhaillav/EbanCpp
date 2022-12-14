/**
 * @file  ItemStackRequestActionMineBlock.hpp
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
 * @brief MC class ItemStackRequestActionMineBlock.
 *
 */
class ItemStackRequestActionMineBlock {

#define AFTER_EXTRA
// Add Member There
public:
enum class PreValidationStatus;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONMINEBLOCK
public:
    class ItemStackRequestActionMineBlock& operator=(class ItemStackRequestActionMineBlock const &) = delete;
    ItemStackRequestActionMineBlock(class ItemStackRequestActionMineBlock const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   529664184
     */
    virtual ~ItemStackRequestActionMineBlock();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   2096281682
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1367561133
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionMineBlock@@MEBAXAEAVBinaryStream@@@Z
     * @hash   -1257381892
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionMineBlock@@MEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   1685995732
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionMineBlock@@QEAA@XZ
     * @hash   2106646998
     */
    MCAPI ItemStackRequestActionMineBlock();
    /**
     * @symbol ?getPreValidationStatus@ItemStackRequestActionMineBlock@@QEBA?AW4PreValidationStatus@1@XZ
     * @hash   -935023249
     */
    MCAPI enum class ItemStackRequestActionMineBlock::PreValidationStatus getPreValidationStatus() const;
    /**
     * @symbol ?getPredictedDurability@ItemStackRequestActionMineBlock@@QEBAHXZ
     * @hash   1102123964
     */
    MCAPI int getPredictedDurability() const;
    /**
     * @symbol ?getSrc@ItemStackRequestActionMineBlock@@QEBA?AUItemStackRequestSlotInfo@@XZ
     * @hash   1946708972
     */
    MCAPI struct ItemStackRequestSlotInfo getSrc() const;
    /**
     * @symbol ?setPreValidationStatus@ItemStackRequestActionMineBlock@@QEBAXW4PreValidationStatus@1@@Z
     * @hash   618837123
     */
    MCAPI void setPreValidationStatus(enum class ItemStackRequestActionMineBlock::PreValidationStatus) const;

};