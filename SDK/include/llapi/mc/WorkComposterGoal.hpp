/**
 * @file  WorkComposterGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "WorkGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkComposterGoal.
 *
 */
class WorkComposterGoal : public WorkGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKCOMPOSTERGOAL
public:
    class WorkComposterGoal& operator=(class WorkComposterGoal const &) = delete;
    WorkComposterGoal(class WorkComposterGoal const &) = delete;
    WorkComposterGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1841482366
     */
    virtual ~WorkComposterGoal();
    /**
     * @vftbl  3
     * @hash   -1360949453
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@WorkComposterGoal@@UEAAXXZ
     * @hash   1066101305
     */
    virtual void start();
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
     * @vftbl  18
     * @symbol ?useWorkstation@WorkComposterGoal@@UEAAXXZ
     * @hash   -1802405117
     */
    virtual void useWorkstation();
    /**
     * @symbol ??0WorkComposterGoal@@QEAA@AEAVMob@@@Z
     * @hash   -416813283
     */
    MCAPI WorkComposterGoal(class Mob &);

//private:
    /**
     * @symbol ?_tryCompostItems@WorkComposterGoal@@AEAA_NXZ
     * @hash   479958689
     */
    MCAPI bool _tryCompostItems();
    /**
     * @symbol ?_tryEmptyComposter@WorkComposterGoal@@AEAA_NXZ
     * @hash   682000227
     */
    MCAPI bool _tryEmptyComposter();

private:

};