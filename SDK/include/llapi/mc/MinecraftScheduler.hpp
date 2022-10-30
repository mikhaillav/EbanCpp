/**
 * @file  MinecraftScheduler.hpp
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
 * @brief MC class MinecraftScheduler.
 *
 */
class MinecraftScheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCHEDULER
public:
    class MinecraftScheduler& operator=(class MinecraftScheduler const &) = delete;
    MinecraftScheduler(class MinecraftScheduler const &) = delete;
    MinecraftScheduler() = delete;
#endif

public:
    /**
     * @symbol ?client@MinecraftScheduler@@SAAEAVScheduler@@XZ
     * @hash   -2042626656
     */
    MCAPI static class Scheduler & client();
    /**
     * @symbol ?destroyClientSingleton@MinecraftScheduler@@SAXXZ
     * @hash   -830104413
     */
    MCAPI static void destroyClientSingleton();

//private:

private:
    /**
     * @symbol ?mInstance@MinecraftScheduler@@0V?$unique_ptr@VScheduler@@U?$default_delete@VScheduler@@@std@@@std@@A
     * @hash   1025784401
     */
    MCAPI static std::unique_ptr<class Scheduler> mInstance;

};