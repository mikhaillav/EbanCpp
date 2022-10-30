/**
 * @file  OcelotSitOnBlockGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OcelotSitOnBlockGoal.
 *
 */
class OcelotSitOnBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTSITONBLOCKGOAL
public:
    class OcelotSitOnBlockGoal& operator=(class OcelotSitOnBlockGoal const &) = delete;
    OcelotSitOnBlockGoal(class OcelotSitOnBlockGoal const &) = delete;
    OcelotSitOnBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   438810093
     */
    virtual ~OcelotSitOnBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@OcelotSitOnBlockGoal@@UEAA_NXZ
     * @hash   -2077695779
     */
    virtual bool canUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@OcelotSitOnBlockGoal@@UEAAXXZ
     * @hash   534666806
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@OcelotSitOnBlockGoal@@UEAAXXZ
     * @hash   -936467034
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@OcelotSitOnBlockGoal@@UEAAXXZ
     * @hash   384037169
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@OcelotSitOnBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1134787725
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1399092504
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1348196983
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  11
     * @symbol ?isValidTarget@OcelotSitOnBlockGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   367472031
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl  13
     * @symbol ?_canReach@OcelotSitOnBlockGoal@@UEAA_NAEBVBlockPos@@@Z
     * @hash   479970418
     */
    virtual bool _canReach(class BlockPos const &);
    /**
     * @symbol ??0OcelotSitOnBlockGoal@@QEAA@AEAVMob@@M@Z
     * @hash   565937543
     */
    MCAPI OcelotSitOnBlockGoal(class Mob &, float);

};