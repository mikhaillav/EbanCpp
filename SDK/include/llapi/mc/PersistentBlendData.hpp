/**
 * @file  PersistentBlendData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PersistentBlendData.
 *
 */
struct PersistentBlendData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSISTENTBLENDDATA
public:
    struct PersistentBlendData& operator=(struct PersistentBlendData const &) = delete;
    PersistentBlendData(struct PersistentBlendData const &) = delete;
    PersistentBlendData() = delete;
#endif

public:
    /**
     * @symbol ??0PersistentBlendData@@QEAA@AEAVStringByteInput@@@Z
     * @hash   -115887513
     */
    MCAPI PersistentBlendData(class StringByteInput &);
    /**
     * @symbol ?serialize@PersistentBlendData@@QEBAXAEAVStringByteOutput@@@Z
     * @hash   -869367266
     */
    MCAPI void serialize(class StringByteOutput &) const;

};