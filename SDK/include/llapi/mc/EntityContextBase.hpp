/**
 * @file  EntityContextBase.hpp
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
 * @brief MC class EntityContextBase.
 *
 */
class EntityContextBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXTBASE
public:
    class EntityContextBase& operator=(class EntityContextBase const &) = delete;
    EntityContextBase(class EntityContextBase const &) = delete;
    EntityContextBase() = delete;
#endif

public:
    /**
     * @symbol ??0EntityContextBase@@QEAA@AEAVEntityRegistryBase@@VEntityId@@@Z
     * @hash   -360722161
     */
    MCAPI EntityContextBase(class EntityRegistryBase &, class EntityId);
    /**
     * @symbol ?isValid@EntityContextBase@@QEBA_NXZ
     * @hash   -520175100
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??8EntityContextBase@@QEBA_NAEBV0@@Z
     * @hash   187614570
     */
    MCAPI bool operator==(class EntityContextBase const &) const;

//protected:
    /**
     * @symbol ?_assertValid@EntityContextBase@@IEBAXXZ
     * @hash   1111531596
     */
    MCAPI void _assertValid() const;
    /**
     * @symbol ?_enttRegistry@EntityContextBase@@IEAAAEAV?$basic_registry@VEntityId@@@entt@@XZ
     * @hash   -1597310278
     */
    MCAPI class entt::basic_registry<class EntityId> & _enttRegistry();
    /**
     * @symbol ?_enttRegistry@EntityContextBase@@IEBAAEBV?$basic_registry@VEntityId@@@entt@@XZ
     * @hash   -1553475658
     */
    MCAPI class entt::basic_registry<class EntityId> const & _enttRegistry() const;
    /**
     * @symbol ?_getEntityId@EntityContextBase@@IEBA?AVEntityId@@XZ
     * @hash   -1972990091
     */
    MCAPI class EntityId _getEntityId() const;
    /**
     * @symbol ?_getRegistryId@EntityContextBase@@IEBAIXZ
     * @hash   -2014468076
     */
    MCAPI unsigned int _getRegistryId() const;

protected:

};