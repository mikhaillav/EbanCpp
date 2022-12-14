/**
 * @file  ItemStackRequestActionDrop.hpp
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
 * @brief MC class ItemStackRequestActionDrop.
 *
 */
class ItemStackRequestActionDrop {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONDROP
public:
    class ItemStackRequestActionDrop& operator=(class ItemStackRequestActionDrop const &) = delete;
    ItemStackRequestActionDrop(class ItemStackRequestActionDrop const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1199759927
     */
    virtual ~ItemStackRequestActionDrop();
    /**
     * @vftbl  1
     * @hash   -1405557151
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   2096281682
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1367561133
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionDrop@@MEBAXAEAVBinaryStream@@@Z
     * @hash   -626382127
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionDrop@@MEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   382882377
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestActionDrop@@QEAA@XZ
     * @hash   -1517296981
     */
    MCAPI ItemStackRequestActionDrop();
    /**
     * @symbol ?getRandomly@ItemStackRequestActionDrop@@QEBA_NXZ
     * @hash   530911102
     */
    MCAPI bool getRandomly() const;

};