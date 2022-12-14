/**
 * @file  CallbackToken.hpp
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
 * @brief MC class CallbackToken.
 *
 */
class CallbackToken {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALLBACKTOKEN
public:
    class CallbackToken& operator=(class CallbackToken const &) = delete;
    CallbackToken(class CallbackToken const &) = delete;
#endif

public:
    /**
     * @symbol ??0CallbackToken@@QEAA@V?$weak_ptr@VCallbackTokenCancelState@@@std@@@Z
     * @hash   1398329128
     */
    MCAPI CallbackToken(class std::weak_ptr<class CallbackTokenCancelState>);
    /**
     * @symbol ??0CallbackToken@@QEAA@$$QEAV0@@Z
     * @hash   56118849
     */
    MCAPI CallbackToken(class CallbackToken &&);
    /**
     * @symbol ??0CallbackToken@@QEAA@XZ
     * @hash   -179944144
     */
    MCAPI CallbackToken();
    /**
     * @symbol ?cancelCallback@CallbackToken@@QEAAXXZ
     * @hash   1970714849
     */
    MCAPI void cancelCallback();
    /**
     * @symbol ??4CallbackToken@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   829819020
     */
    MCAPI class CallbackToken & operator=(class CallbackToken &&);
    /**
     * @symbol ?release@CallbackToken@@QEAAXXZ
     * @hash   -1757219101
     */
    MCAPI void release();
    /**
     * @symbol ??1CallbackToken@@QEAA@XZ
     * @hash   -1600996816
     */
    MCAPI ~CallbackToken();

};