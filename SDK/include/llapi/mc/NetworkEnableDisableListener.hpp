/**
 * @file  NetworkEnableDisableListener.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkEnableDisableListener.
 *
 */
class NetworkEnableDisableListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKENABLEDISABLELISTENER
public:
    class NetworkEnableDisableListener& operator=(class NetworkEnableDisableListener const &) = delete;
    NetworkEnableDisableListener(class NetworkEnableDisableListener const &) = delete;
    NetworkEnableDisableListener() = delete;
#endif

public:
    /**
     * @symbol ??0NetworkEnableDisableListener@@QEAA@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
     * @hash   1413938525
     */
    MCAPI NetworkEnableDisableListener(class Bedrock::NonOwnerPointer<class AppPlatform> const &);
    /**
     * @symbol ?disable@NetworkEnableDisableListener@@QEAAXXZ
     * @hash   927961171
     */
    MCAPI void disable();
    /**
     * @symbol ?isDisabled@NetworkEnableDisableListener@@QEBA_NXZ
     * @hash   -1918970076
     */
    MCAPI bool isDisabled() const;
    /**
     * @symbol ?isEnabled@NetworkEnableDisableListener@@QEBA_NXZ
     * @hash   -2083709256
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ?isNetworkAllowed@NetworkEnableDisableListener@@QEBA_NXZ
     * @hash   532818496
     */
    MCAPI bool isNetworkAllowed() const;
    /**
     * @symbol ?isUninitialized@NetworkEnableDisableListener@@QEBA_NXZ
     * @hash   -279668500
     */
    MCAPI bool isUninitialized() const;
    /**
     * @symbol ?tryEnable@NetworkEnableDisableListener@@QEAAXXZ
     * @hash   -763499165
     */
    MCAPI void tryEnable();
    /**
     * @symbol ?uninitialize@NetworkEnableDisableListener@@QEAAXXZ
     * @hash   -1623052027
     */
    MCAPI void uninitialize();

};