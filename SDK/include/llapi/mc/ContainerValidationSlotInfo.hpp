/**
 * @file  ContainerValidationSlotInfo.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ContainerValidationSlotInfo.
 *
 */
struct ContainerValidationSlotInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONSLOTINFO
public:
    struct ContainerValidationSlotInfo& operator=(struct ContainerValidationSlotInfo const &) = delete;
    ContainerValidationSlotInfo(struct ContainerValidationSlotInfo const &) = delete;
    ContainerValidationSlotInfo() = delete;
#endif

public:
    /**
     * @symbol ??0ContainerValidationSlotInfo@@QEAA@AEBUContainerValidationSlotData@@V?$shared_ptr@VSimpleSparseContainer@@@std@@V?$shared_ptr@$$CBVContainerValidationBase@@@3@@Z
     * @hash   -1291155985
     */
    MCAPI ContainerValidationSlotInfo(struct ContainerValidationSlotData const &, class std::shared_ptr<class SimpleSparseContainer>, class std::shared_ptr<class ContainerValidationBase const>);
    /**
     * @symbol ?getItem@ContainerValidationSlotInfo@@QEBAAEBVItemStack@@XZ
     * @hash   623377194
     */
    MCAPI class ItemStack const & getItem() const;
    /**
     * @symbol ??BContainerValidationSlotInfo@@QEBA_NXZ
     * @hash   -1579453704
     */
    MCAPI operator bool() const;
    /**
     * @symbol ?setItem@ContainerValidationSlotInfo@@QEAAXAEBVItemStack@@@Z
     * @hash   886820652
     */
    MCAPI void setItem(class ItemStack const &);
    /**
     * @symbol ??1ContainerValidationSlotInfo@@QEAA@XZ
     * @hash   1784321634
     */
    MCAPI ~ContainerValidationSlotInfo();

};