/**
 * @file  EndermanTakeBlockGoal.hpp
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
 * @brief MC class EndermanTakeBlockGoal.
 *
 */
class EndermanTakeBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMANTAKEBLOCKGOAL
public:
    class EndermanTakeBlockGoal& operator=(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -566237355
     */
    virtual ~EndermanTakeBlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@EndermanTakeBlockGoal@@UEAA_NXZ
     * @hash   1117354825
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1404633630
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1360025932
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   578565733
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@EndermanTakeBlockGoal@@UEAAXXZ
     * @hash   1631952397
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@EndermanTakeBlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2116481737
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
     * @vftbl  10
     * @symbol ?getRandomNearbyBlockPos@EndermanTakeBlockGoal@@MEBA?AVBlockPos@@AEBVVec3@@@Z
     * @hash   -232764345
     */
    virtual class BlockPos getRandomNearbyBlockPos(class Vec3 const &) const;
    /**
     * @symbol ??0EndermanTakeBlockGoal@@QEAA@AEAVEnderMan@@@Z
     * @hash   502188918
     */
    MCAPI EndermanTakeBlockGoal(class EnderMan &);

};