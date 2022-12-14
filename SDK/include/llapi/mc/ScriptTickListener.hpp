/**
 * @file  ScriptTickListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptTickListener.
 *
 */
class ScriptTickListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTTICKLISTENER
public:
    class ScriptTickListener& operator=(class ScriptTickListener const &) = delete;
    ScriptTickListener(class ScriptTickListener const &) = delete;
    ScriptTickListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1096096678
     */
    virtual ~ScriptTickListener();
    /**
     * @vftbl  1
     * @hash   -1154497823
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1153574302
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1152650781
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?onLevelRemovedPlayer@ScriptTickListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
     * @hash   -68374149
     */
    virtual enum class EventResult onLevelRemovedPlayer(class Level &, class Player &);
    /**
     * @vftbl  5
     * @hash   -1150803739
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   -1149880218
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?onLevelScriptTick@ScriptTickListener@@UEAA?AW4EventResult@@AEAVLevel@@@Z
     * @hash   -1130636009
     */
    virtual enum class EventResult onLevelScriptTick(class Level &);
    /**
     * @symbol ??0ScriptTickListener@@QEAA@AEAVScriptEngine@Scripting@@AEAVScriptFormPromiseTracker@@AEAVScriptCommandProcessor@@@Z
     * @hash   1179428945
     */
    MCAPI ScriptTickListener(class Scripting::ScriptEngine &, class ScriptFormPromiseTracker &, class ScriptCommandProcessor &);

};