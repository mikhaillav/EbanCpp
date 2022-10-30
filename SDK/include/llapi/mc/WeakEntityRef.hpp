/**
 * @file  WeakEntityRef.hpp
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
 * @brief MC class WeakEntityRef.
 *
 */
class WeakEntityRef {

#define AFTER_EXTRA
// Add Member There
    char filler[32];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKENTITYREF
public:
    class WeakEntityRef& operator=(class WeakEntityRef const &) = delete;
    WeakEntityRef(class WeakEntityRef const &) = delete;
    WeakEntityRef() = delete;
#endif

public:
    /**
     * @symbol ??0WeakEntityRef@@QEAA@V?$WeakRefT@UEntityRefTraits@@@@@Z
     * @hash   1463633998
     */
    MCAPI WeakEntityRef(class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol ??BWeakEntityRef@@QEBA?AV?$WeakRefT@UEntityRefTraits@@@@XZ
     * @hash   2047444946
     */
    MCAPI operator class WeakRefT<struct EntityRefTraits>() const;
    /**
     * @symbol ??4WeakEntityRef@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -1541515404
     */
    MCAPI class WeakEntityRef & operator=(class WeakEntityRef &&);
    /**
     * @symbol ??8WeakEntityRef@@QEBA_NV?$WeakRefT@UEntityRefTraits@@@@@Z
     * @hash   -1603191044
     */
    MCAPI bool operator==(class WeakRefT<struct EntityRefTraits>) const;
    /**
     * @symbol ??8WeakEntityRef@@QEBA_NV0@@Z
     * @hash   -1025472881
     */
    MCAPI bool operator==(class WeakEntityRef) const;
    /**
     * @symbol ??1WeakEntityRef@@QEAA@XZ
     * @hash   -421436908
     */
    MCAPI ~WeakEntityRef();

};