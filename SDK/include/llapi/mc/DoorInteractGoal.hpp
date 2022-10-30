/**
 * @file  DoorInteractGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoorInteractGoal.
 *
 */
class DoorInteractGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORINTERACTGOAL
public:
    class DoorInteractGoal& operator=(class DoorInteractGoal const &) = delete;
    DoorInteractGoal(class DoorInteractGoal const &) = delete;
    DoorInteractGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -211817215
     */
    virtual ~DoorInteractGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DoorInteractGoal@@UEAA_NXZ
     * @hash   39586953
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DoorInteractGoal@@UEAA_NXZ
     * @hash   483554503
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DoorInteractGoal@@UEAAXXZ
     * @hash   1725492546
     */
    virtual void start();
    /**
     * @vftbl  5
     * @hash   -1401863067
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@DoorInteractGoal@@UEAAXXZ
     * @hash   1089447149
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DoorInteractGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2015227815
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0DoorInteractGoal@@QEAA@AEAVMob@@@Z
     * @hash   -59166042
     */
    MCAPI DoorInteractGoal(class Mob &);

//protected:
    /**
     * @symbol ?_doorBlocksPath@DoorInteractGoal@@IEBA_NXZ
     * @hash   1237903469
     */
    MCAPI bool _doorBlocksPath() const;

//private:
    /**
     * @symbol ?_findBlockingDoorAtPos@DoorInteractGoal@@CAPEBVDoorBlock@@AEBVBlockPos@@AEBVMob@@PEAVPath@@AEAW4Type@Direction@@3@Z
     * @hash   1591795525
     */
    MCAPI static class DoorBlock const * _findBlockingDoorAtPos(class BlockPos const &, class Mob const &, class Path *, enum class Direction::Type &, enum class Direction::Type &);

protected:

private:

};