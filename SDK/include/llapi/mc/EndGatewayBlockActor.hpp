/**
 * @file  EndGatewayBlockActor.hpp
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
 * @brief MC class EndGatewayBlockActor.
 *
 */
class EndGatewayBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDGATEWAYBLOCKACTOR
public:
    class EndGatewayBlockActor& operator=(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor(class EndGatewayBlockActor const &) = delete;
    EndGatewayBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -492991749
     */
    virtual ~EndGatewayBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@EndGatewayBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1856253992
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@EndGatewayBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -1637364889
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1728637297
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol ?onChanged@EndGatewayBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1234418423
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -380221563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  14
     * @symbol ?triggerEvent@EndGatewayBlockActor@@UEAAXHH@Z
     * @hash   714153560
     */
    virtual void triggerEvent(int, int);
    /**
     * @vftbl  16
     * @hash   -376527479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  18
     * @symbol ?hasAlphaLayer@EndGatewayBlockActor@@UEBA_NXZ
     * @hash   907643588
     */
    virtual bool hasAlphaLayer() const;
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
     * @symbol ?_getUpdatePacket@EndGatewayBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   766609626
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ??0EndGatewayBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   1770560900
     */
    MCAPI EndGatewayBlockActor(class BlockPos const &);
    /**
     * @symbol ?canTeleport@EndGatewayBlockActor@@QEBA_NPEBVGetCollisionShapeInterface@@AEBVBlockSource@@@Z
     * @hash   -2072716137
     */
    MCAPI bool canTeleport(class GetCollisionShapeInterface const *, class BlockSource const &) const;
    /**
     * @symbol ?getExitPosition@EndGatewayBlockActor@@QEBA?AVBlockPos@@XZ
     * @hash   -513977712
     */
    MCAPI class BlockPos getExitPosition() const;
    /**
     * @symbol ?getParticleAmount@EndGatewayBlockActor@@QEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   879103536
     */
    MCAPI int getParticleAmount(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?setExitPosition@EndGatewayBlockActor@@QEAAXAEBVBlockPos@@@Z
     * @hash   -226585654
     */
    MCAPI void setExitPosition(class BlockPos const &);
    /**
     * @symbol ?teleportEntity@EndGatewayBlockActor@@QEAAXAEAVActor@@@Z
     * @hash   -1914295446
     */
    MCAPI void teleportEntity(class Actor &);
    /**
     * @symbol ?COOLDOWN_TIME@EndGatewayBlockActor@@2HB
     * @hash   2061844255
     */
    MCAPI static int const COOLDOWN_TIME;
    /**
     * @symbol ?EVENT_COOLDOWN@EndGatewayBlockActor@@2HB
     * @hash   -349884763
     */
    MCAPI static int const EVENT_COOLDOWN;
    /**
     * @symbol ?SPAWN_TIME@EndGatewayBlockActor@@2HB
     * @hash   -818883587
     */
    MCAPI static int const SPAWN_TIME;
    /**
     * @symbol ?findExitPortal@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVWorldGenerator@@AEBV2@@Z
     * @hash   -1145266175
     */
    MCAPI static class BlockPos findExitPortal(class WorldGenerator &, class BlockPos const &);
    /**
     * @symbol ?findTallestBlock@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@H_N@Z
     * @hash   760242539
     */
    MCAPI static class BlockPos findTallestBlock(class BlockSource &, class BlockPos const &, int, bool);
    /**
     * @symbol ?findValidSpawnAround@EndGatewayBlockActor@@SA?AVBlockPos@@AEAVBlockSource@@AEBV2@_NH@Z
     * @hash   -1924143841
     */
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource &, class BlockPos const &, bool, int);

//private:
    /**
     * @symbol ?_getHighestSection@EndGatewayBlockActor@@CAHAEAVWorldGenerator@@AEAVBlockVolume@@AEBVBlockPos@@@Z
     * @hash   1654594544
     */
    MCAPI static int _getHighestSection(class WorldGenerator &, class BlockVolume &, class BlockPos const &);

private:

};