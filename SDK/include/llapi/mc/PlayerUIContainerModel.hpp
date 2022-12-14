/**
 * @file  PlayerUIContainerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PlayerUIContainerModelBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainerModel.
 *
 */
class PlayerUIContainerModel : public PlayerUIContainerModelBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINERMODEL
public:
    class PlayerUIContainerModel& operator=(class PlayerUIContainerModel const &) = delete;
    PlayerUIContainerModel(class PlayerUIContainerModel const &) = delete;
    PlayerUIContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  1
     * @hash   1093602823
     */
    virtual ~PlayerUIContainerModel();
    /**
     * @vftbl  6
     * @hash   -1400939546
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  12
     * @hash   -330249563
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  15
     * @hash   -327479000
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @hash   -373756916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  21
     * @symbol ?_getContainerOffset@PlayerUIContainerModel@@MEBAHXZ
     * @hash   1201347236
     */
    virtual int _getContainerOffset() const;
    /**
     * @symbol ??0PlayerUIContainerModel@@QEAA@W4ContainerEnumName@@AEAVPlayer@@@Z
     * @hash   -1019665149
     */
    MCAPI PlayerUIContainerModel(enum class ContainerEnumName, class Player &);

};