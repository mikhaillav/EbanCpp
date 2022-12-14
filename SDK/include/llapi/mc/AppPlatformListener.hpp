/**
 * @file  AppPlatformListener.hpp
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
 * @brief MC class AppPlatformListener.
 *
 */
class AppPlatformListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMLISTENER
public:
    class AppPlatformListener& operator=(class AppPlatformListener const &) = delete;
    AppPlatformListener(class AppPlatformListener const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMLISTENER
    /**
     * @symbol ?onAppFocusGained@AppPlatformListener@@UEAAXXZ
     * @hash   -1260022829
     */
    MCVAPI void onAppFocusGained();
    /**
     * @symbol ?onAppFocusLost@AppPlatformListener@@UEAAXXZ
     * @hash   1281427545
     */
    MCVAPI void onAppFocusLost();
    /**
     * @symbol ?onAppPaused@AppPlatformListener@@UEAAXXZ
     * @hash   397063023
     */
    MCVAPI void onAppPaused();
    /**
     * @symbol ?onAppPreSuspended@AppPlatformListener@@UEAAXXZ
     * @hash   -136725255
     */
    MCVAPI void onAppPreSuspended();
    /**
     * @symbol ?onAppResumed@AppPlatformListener@@UEAAXXZ
     * @hash   304146612
     */
    MCVAPI void onAppResumed();
    /**
     * @symbol ?onAppSuspended@AppPlatformListener@@UEAAXXZ
     * @hash   920555192
     */
    MCVAPI void onAppSuspended();
    /**
     * @symbol ?onAppTerminated@AppPlatformListener@@UEAAXXZ
     * @hash   -1609123260
     */
    MCVAPI void onAppTerminated();
    /**
     * @symbol ?onAppUnpaused@AppPlatformListener@@UEAAXXZ
     * @hash   951990056
     */
    MCVAPI void onAppUnpaused();
    /**
     * @symbol ?onClipboardCopy@AppPlatformListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -89265151
     */
    MCVAPI void onClipboardCopy(std::string const &);
    /**
     * @symbol ?onClipboardPaste@AppPlatformListener@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2012026895
     */
    MCVAPI void onClipboardPaste(std::string const &);
    /**
     * @symbol ?onDeviceLost@AppPlatformListener@@UEAAXXZ
     * @hash   -1044341672
     */
    MCVAPI void onDeviceLost();
    /**
     * @symbol ?onLowMemory@AppPlatformListener@@UEAAXXZ
     * @hash   -1124492683
     */
    MCVAPI void onLowMemory();
    /**
     * @symbol ?onOperationModeChanged@AppPlatformListener@@UEAAXW4OperationMode@@@Z
     * @hash   625058744
     */
    MCVAPI void onOperationModeChanged(enum class OperationMode);
    /**
     * @symbol ?onPerformanceModeChanged@AppPlatformListener@@UEAAX_N@Z
     * @hash   -1020780371
     */
    MCVAPI void onPerformanceModeChanged(bool);
    /**
     * @symbol ?onPushNotificationReceived@AppPlatformListener@@UEAAXAEBVPushNotificationMessage@@@Z
     * @hash   -109320029
     */
    MCVAPI void onPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @symbol ?onResizeBegin@AppPlatformListener@@UEAAXXZ
     * @hash   1173063957
     */
    MCVAPI void onResizeBegin();
    /**
     * @symbol ?onResizeEnd@AppPlatformListener@@UEAAXXZ
     * @hash   1212444999
     */
    MCVAPI void onResizeEnd();
#endif
    /**
     * @symbol ??0AppPlatformListener@@QEAA@XZ
     * @hash   -1696122636
     */
    MCAPI AppPlatformListener();
    /**
     * @symbol ?terminate@AppPlatformListener@@QEAAXXZ
     * @hash   -1022757065
     */
    MCAPI void terminate();

};