/**
 * @file  LookControlComponent.hpp
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
 * @brief MC class LookControlComponent.
 *
 */
class LookControlComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROLCOMPONENT
public:
    class LookControlComponent& operator=(class LookControlComponent const &) = delete;
    LookControlComponent(class LookControlComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0LookControlComponent@@QEAA@XZ
     * @hash   -416493029
     */
    MCAPI LookControlComponent();
    /**
     * @symbol ?getHasWantedPosition@LookControlComponent@@QEBA_NXZ
     * @hash   -1151495656
     */
    MCAPI bool getHasWantedPosition() const;
    /**
     * @symbol ?getHasWantedRotation@LookControlComponent@@QEBA_NXZ
     * @hash   -1891824142
     */
    MCAPI bool getHasWantedRotation() const;
    /**
     * @symbol ?getWantedPosition@LookControlComponent@@QEBA?AVVec3@@XZ
     * @hash   1404359680
     */
    MCAPI class Vec3 getWantedPosition() const;
    /**
     * @symbol ?getWantedRotation@LookControlComponent@@QEBA?AVVec3@@XZ
     * @hash   646365840
     */
    MCAPI class Vec3 getWantedRotation() const;
    /**
     * @symbol ?getXMax@LookControlComponent@@QEBAMXZ
     * @hash   1430698836
     */
    MCAPI float getXMax() const;
    /**
     * @symbol ?getYMax@LookControlComponent@@QEBAMXZ
     * @hash   598579668
     */
    MCAPI float getYMax() const;
    /**
     * @symbol ?initialize@LookControlComponent@@QEAAXAEAVMob@@@Z
     * @hash   -1755326700
     */
    MCAPI void initialize(class Mob &);
    /**
     * @symbol ??4LookControlComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   829230346
     */
    MCAPI class LookControlComponent & operator=(class LookControlComponent &&);
    /**
     * @symbol ?setHasWantedPosition@LookControlComponent@@QEAAX_N@Z
     * @hash   1228573436
     */
    MCAPI void setHasWantedPosition(bool);
    /**
     * @symbol ?setHasWantedRotation@LookControlComponent@@QEAAX_N@Z
     * @hash   -259412222
     */
    MCAPI void setHasWantedRotation(bool);
    /**
     * @symbol ?setInternalType@LookControlComponent@@QEAAXV?$unique_ptr@VLookControl@@U?$default_delete@VLookControl@@@std@@@std@@@Z
     * @hash   -1534845614
     */
    MCAPI void setInternalType(std::unique_ptr<class LookControl>);
    /**
     * @symbol ?setLookAtPosition@LookControlComponent@@QEAAXAEBVVec3@@MM@Z
     * @hash   49442094
     */
    MCAPI void setLookAtPosition(class Vec3 const &, float, float);
    /**
     * @symbol ?setLookAtPosition@LookControlComponent@@QEAAXPEBVActor@@MM@Z
     * @hash   1806068245
     */
    MCAPI void setLookAtPosition(class Actor const *, float, float);
    /**
     * @symbol ?setLookAtRotation@LookControlComponent@@QEAAXAEBVVec3@@MM@Z
     * @hash   535698660
     */
    MCAPI void setLookAtRotation(class Vec3 const &, float, float);
    /**
     * @symbol ?setYMax@LookControlComponent@@QEAAXM@Z
     * @hash   -712532362
     */
    MCAPI void setYMax(float);
    /**
     * @symbol ?update@LookControlComponent@@QEAAXAEAVMob@@@Z
     * @hash   1295273844
     */
    MCAPI void update(class Mob &);

};