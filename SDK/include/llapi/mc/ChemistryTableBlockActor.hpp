/**
 * @file  ChemistryTableBlockActor.hpp
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
 * @brief MC class ChemistryTableBlockActor.
 *
 */
class ChemistryTableBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYTABLEBLOCKACTOR
public:
    class ChemistryTableBlockActor& operator=(class ChemistryTableBlockActor const &) = delete;
    ChemistryTableBlockActor(class ChemistryTableBlockActor const &) = delete;
    ChemistryTableBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHEMISTRYTABLEBLOCKACTOR
    /**
     * @symbol ?getContainer@ChemistryTableBlockActor@@UEAAPEAVContainer@@XZ
     * @hash   -513370691
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol ?getContainer@ChemistryTableBlockActor@@UEBAPEBVContainer@@XZ
     * @hash   -941092551
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol ?getContainerSize@ChemistryTableBlockActor@@UEBAHXZ
     * @hash   -1717833419
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@ChemistryTableBlockActor@@UEBAAEBVItemStack@@H@Z
     * @hash   -1416283866
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getMaxStackSize@ChemistryTableBlockActor@@UEBAHXZ
     * @hash   1322771028
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?load@ChemistryTableBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -229416599
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?onRemoved@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -523658162
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @symbol ?save@ChemistryTableBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   633112520
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?serverInitItemStackIds@ChemistryTableBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   553637003
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setItem@ChemistryTableBlockActor@@UEAAXHAEBVItemStack@@@Z
     * @hash   1925489087
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol ?startOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   1802894610
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol ?stopOpen@ChemistryTableBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   -376753678
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol ?tick@ChemistryTableBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   987327250
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0ChemistryTableBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -781440939
     */
    MCAPI ChemistryTableBlockActor(class BlockPos const &);
    /**
     * @symbol ?isSameType@ChemistryTableBlockActor@@QEBA_NW4ChemistryTableType@@@Z
     * @hash   1049785317
     */
    MCAPI bool isSameType(enum class ChemistryTableType) const;
    /**
     * @symbol ?playerOpenLabTable@ChemistryTableBlockActor@@QEAAXAEAVPlayer@@@Z
     * @hash   -1113574474
     */
    MCAPI void playerOpenLabTable(class Player &);
    /**
     * @symbol ?reset@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@@Z
     * @hash   -103215370
     */
    MCAPI void reset(class BlockSource &);
    /**
     * @symbol ?serverCombine@ChemistryTableBlockActor@@QEAAXAEAVBlockSource@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
     * @hash   -820932067
     */
    MCAPI void serverCombine(class BlockSource &, std::vector<class ItemStack> const &);
    /**
     * @symbol ?serverLabTablePacket_DEPRECATED@ChemistryTableBlockActor@@QEAAXAEBVLabTablePacket@@AEAVBlockSource@@@Z
     * @hash   -1080519597
     */
    MCAPI void serverLabTablePacket_DEPRECATED(class LabTablePacket const &, class BlockSource &);

//private:
    /**
     * @symbol ?_createReaction@ChemistryTableBlockActor@@AEAA?AV?$unique_ptr@VLabTableReaction@@U?$default_delete@VLabTableReaction@@@std@@@std@@AEAVRandom@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@3@@Z
     * @hash   1184175565
     */
    MCAPI std::unique_ptr<class LabTableReaction> _createReaction(class Random &, std::vector<class ItemStack> const &);
    /**
     * @symbol ?_popPendingReactionOutput@ChemistryTableBlockActor@@AEAAXAEAVBlockSource@@@Z
     * @hash   -302234453
     */
    MCAPI void _popPendingReactionOutput(class BlockSource &);
    /**
     * @symbol ?_updateType@ChemistryTableBlockActor@@AEAA?AW4ChemistryTableType@@AEAVBlockSource@@@Z
     * @hash   -451210902
     */
    MCAPI enum class ChemistryTableType _updateType(class BlockSource &);

private:

};