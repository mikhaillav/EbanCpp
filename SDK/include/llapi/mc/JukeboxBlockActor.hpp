/**
 * @file  JukeboxBlockActor.hpp
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
 * @brief MC class JukeboxBlockActor.
 *
 */
class JukeboxBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUKEBOXBLOCKACTOR
public:
    class JukeboxBlockActor& operator=(class JukeboxBlockActor const &) = delete;
    JukeboxBlockActor(class JukeboxBlockActor const &) = delete;
    JukeboxBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUKEBOXBLOCKACTOR
    /**
     * @symbol ?_getUpdatePacket@JukeboxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -682137385
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ?_onUpdatePacket@JukeboxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   356806059
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ?canPullOutItem@JukeboxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     * @hash   38185131
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @symbol ?canPushInItem@JukeboxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     * @hash   157423025
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @symbol ?getContainer@JukeboxBlockActor@@UEAAPEAVContainer@@XZ
     * @hash   91044721
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol ?getContainer@JukeboxBlockActor@@UEBAPEBVContainer@@XZ
     * @hash   -336677139
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol ?getContainerSize@JukeboxBlockActor@@UEBAHXZ
     * @hash   168245001
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@JukeboxBlockActor@@UEBAAEBVItemStack@@H@Z
     * @hash   1996124002
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getMaxStackSize@JukeboxBlockActor@@UEBAHXZ
     * @hash   221922584
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?load@JukeboxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1309289067
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?onChanged@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -827171258
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @symbol ?save@JukeboxBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1476578980
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?serverInitItemStackIds@JukeboxBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   -1257025593
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setItem@JukeboxBlockActor@@UEAAXHAEBVItemStack@@@Z
     * @hash   -117221997
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol ?startOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   578747054
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol ?stopOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   422234958
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol ?tick@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   123778350
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0JukeboxBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   972708321
     */
    MCAPI JukeboxBlockActor(class BlockPos const &);
    /**
     * @symbol ?getRecord@JukeboxBlockActor@@QEBAAEBVItemStack@@XZ
     * @hash   1956679174
     */
    MCAPI class ItemStack const & getRecord() const;
    /**
     * @symbol ?isRecordPlaying@JukeboxBlockActor@@QEBA_NXZ
     * @hash   -1514290254
     */
    MCAPI bool isRecordPlaying() const;
    /**
     * @symbol ?setRecord@JukeboxBlockActor@@QEAAXAEBVItemStack@@@Z
     * @hash   820563376
     */
    MCAPI void setRecord(class ItemStack const &);
    /**
     * @symbol ?stopPlayingRecord@JukeboxBlockActor@@QEBAXAEAVBlockSource@@@Z
     * @hash   -221493142
     */
    MCAPI void stopPlayingRecord(class BlockSource &) const;

//private:
    /**
     * @symbol ?_onChanged@JukeboxBlockActor@@AEAAXAEAVBlockSource@@W4LevelSoundEvent@@@Z
     * @hash   955622219
     */
    MCAPI void _onChanged(class BlockSource &, enum class LevelSoundEvent);
    /**
     * @symbol ?_spawnMusicParticles@JukeboxBlockActor@@AEAAXAEAVLevel@@M@Z
     * @hash   1486014748
     */
    MCAPI void _spawnMusicParticles(class Level &, float);

private:

};