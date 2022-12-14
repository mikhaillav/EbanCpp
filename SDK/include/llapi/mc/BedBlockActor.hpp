/**
 * @file  BedBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BedBlockActor.
 *
 */
class BedBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDBLOCKACTOR
public:
    class BedBlockActor& operator=(class BedBlockActor const &) = delete;
    BedBlockActor(class BedBlockActor const &) = delete;
    BedBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1421302505
     */
    virtual ~BedBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@BedBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   825274688
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@BedBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -1932585217
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  3
     * @symbol ?saveItemInstanceData@BedBlockActor@@UEAA_NAEAVCompoundTag@@@Z
     * @hash   1017680206
     */
    virtual bool saveItemInstanceData(class CompoundTag &);
    /**
     * @vftbl  7
     * @symbol ?tick@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   2094136777
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol ?onChanged@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1001857135
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  11
     * @symbol ?onPlace@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1856779070
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -380221563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @hash   -376527479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @symbol ?getCrackEntity@BedBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -99316967
     */
    virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  23
     * @symbol ?getName@BedBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1259529746
     */
    virtual std::string getName() const;
    /**
     * @vftbl  28
     * @hash   -346051286
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -308978789
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -288661327
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -322963261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -322039740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -321116219
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?_getUpdatePacket@BedBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   397062002
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@BedBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -1923825472
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0BedBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   162262604
     */
    MCAPI BedBlockActor(class BlockPos const &);
    /**
     * @symbol ?claimPetSleepOnBed@BedBlockActor@@QEAA_NUActorUniqueID@@@Z
     * @hash   1167382941
     */
    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID);
    /**
     * @symbol ?startSleepingOn@BedBlockActor@@QEAAXXZ
     * @hash   -1255352083
     */
    MCAPI void startSleepingOn();
    /**
     * @symbol ?stopSleepingOn@BedBlockActor@@QEAAXAEAVBlockSource@@_N@Z
     * @hash   992963893
     */
    MCAPI void stopSleepingOn(class BlockSource &, bool);

};