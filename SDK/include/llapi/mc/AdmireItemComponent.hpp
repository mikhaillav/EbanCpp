/**
 * @file  AdmireItemComponent.hpp
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
 * @brief MC class AdmireItemComponent.
 *
 */
class AdmireItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADMIREITEMCOMPONENT
public:
    class AdmireItemComponent& operator=(class AdmireItemComponent const &) = delete;
    AdmireItemComponent(class AdmireItemComponent const &) = delete;
    AdmireItemComponent() = delete;
#endif

public:
    /**
     * @symbol ??0AdmireItemComponent@@QEAA@$$QEAV0@@Z
     * @hash   -1103627671
     */
    MCAPI AdmireItemComponent(class AdmireItemComponent &&);
    /**
     * @symbol ?getAdmireItem@AdmireItemComponent@@QEBAAEBVItemStack@@XZ
     * @hash   -1084896546
     */
    MCAPI class ItemStack const & getAdmireItem() const;
    /**
     * @symbol ?getAdmireUntil@AdmireItemComponent@@QEBAAEBUTick@@XZ
     * @hash   418080432
     */
    MCAPI struct Tick const & getAdmireUntil() const;
    /**
     * @symbol ?getItemOwnerRef@AdmireItemComponent@@QEBA?AVWeakEntityRef@@XZ
     * @hash   853575536
     */
    MCAPI class WeakEntityRef getItemOwnerRef() const;
    /**
     * @symbol ?isAdmiring@AdmireItemComponent@@QEBA_NXZ
     * @hash   526136432
     */
    MCAPI bool isAdmiring() const;
    /**
     * @symbol ?onAdmireItemPickedUp@AdmireItemComponent@@QEAAXAEBVActor@@AEBVItemStack@@PEAV2@@Z
     * @hash   596781986
     */
    MCAPI void onAdmireItemPickedUp(class Actor const &, class ItemStack const &, class Actor *);
    /**
     * @symbol ?stopAdmiring@AdmireItemComponent@@QEAAXXZ
     * @hash   502582437
     */
    MCAPI void stopAdmiring();
    /**
     * @symbol ??1AdmireItemComponent@@QEAA@XZ
     * @hash   -1899621596
     */
    MCAPI ~AdmireItemComponent();

};