/**
 * @file  PlayDeadGoal.hpp
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
 * @brief MC class PlayDeadGoal.
 *
 */
class PlayDeadGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYDEADGOAL
public:
    class PlayDeadGoal& operator=(class PlayDeadGoal const &) = delete;
    PlayDeadGoal(class PlayDeadGoal const &) = delete;
    PlayDeadGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1278662219
     */
    virtual ~PlayDeadGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@PlayDeadGoal@@UEAA_NXZ
     * @hash   -58728443
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@PlayDeadGoal@@UEAA_NXZ
     * @hash   3010595
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@PlayDeadGoal@@UEAAXXZ
     * @hash   1473457246
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@PlayDeadGoal@@UEAAXXZ
     * @hash   1578932542
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@PlayDeadGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   449284715
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0PlayDeadGoal@@QEAA@AEAVMob@@@Z
     * @hash   -1503739998
     */
    MCAPI PlayDeadGoal(class Mob &);

};