/**
 * @file  SensingComponent.hpp
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
 * @brief MC class SensingComponent.
 *
 */
class SensingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENSINGCOMPONENT
public:
    class SensingComponent& operator=(class SensingComponent const &) = delete;
    SensingComponent(class SensingComponent const &) = delete;
    SensingComponent() = delete;
#endif

public:
    /**
     * @symbol ?canSee@SensingComponent@@QEAA_NAEAVMob@@AEBVActor@@@Z
     * @hash   15279434
     */
    MCAPI bool canSee(class Mob &, class Actor const &);
    /**
     * @symbol ?reset@SensingComponent@@QEAAXXZ
     * @hash   -2002667565
     */
    MCAPI void reset();
    /**
     * @symbol ?withinFOV@SensingComponent@@QEAA_NAEAVMob@@AEBVVec3@@M@Z
     * @hash   1901348581
     */
    MCAPI bool withinFOV(class Mob &, class Vec3 const &, float);

};