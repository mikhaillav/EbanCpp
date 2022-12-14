/**
 * @file  ShooterComponent.hpp
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
 * @brief MC class ShooterComponent.
 *
 */
class ShooterComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERCOMPONENT
public:
    class ShooterComponent& operator=(class ShooterComponent const &) = delete;
    ShooterComponent(class ShooterComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0ShooterComponent@@QEAA@XZ
     * @hash   -1412952723
     */
    MCAPI ShooterComponent();
    /**
     * @symbol ?getAuxValue@ShooterComponent@@QEAAHXZ
     * @hash   431244840
     */
    MCAPI int getAuxValue();
    /**
     * @symbol ?onShoot@ShooterComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1615679268
     */
    MCAPI void onShoot(class Actor &);
    /**
     * @symbol ??1ShooterComponent@@QEAA@XZ
     * @hash   973839867
     */
    MCAPI ~ShooterComponent();

};