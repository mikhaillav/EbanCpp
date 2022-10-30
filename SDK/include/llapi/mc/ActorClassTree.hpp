/**
 * @file  ActorClassTree.hpp
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
 * @brief MC class ActorClassTree.
 *
 */
class ActorClassTree {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCLASSTREE
public:
    class ActorClassTree& operator=(class ActorClassTree const &) = delete;
    ActorClassTree(class ActorClassTree const &) = delete;
    ActorClassTree() = delete;
#endif

public:
    /**
     * @symbol ?getEntityTypeIdLegacy@ActorClassTree@@SA?AW4ActorType@@W42@@Z
     * @hash   712982588
     */
    MCAPI static enum class ActorType getEntityTypeIdLegacy(enum class ActorType);
    /**
     * @symbol ?hasCategory@ActorClassTree@@SA_NAEBW4ActorCategory@@W42@@Z
     * @hash   31024439
     */
    MCAPI static bool hasCategory(enum class ActorCategory const &, enum class ActorCategory);
    /**
     * @symbol ?isHangingEntity@ActorClassTree@@SA_NAEBVActor@@@Z
     * @hash   -605633467
     */
    MCAPI static bool isHangingEntity(class Actor const &);
    /**
     * @symbol ?isInstanceOf@ActorClassTree@@SA_NAEBVActor@@W4ActorType@@@Z
     * @hash   1679266588
     */
    MCAPI static bool isInstanceOf(class Actor const &, enum class ActorType);
    /**
     * @symbol ?isMob@ActorClassTree@@SA_NW4ActorType@@@Z
     * @hash   944129085
     */
    MCAPI static bool isMob(enum class ActorType);
    /**
     * @symbol ?isMobLegacy@ActorClassTree@@SA_NW4ActorType@@@Z
     * @hash   -2135024261
     */
    MCAPI static bool isMobLegacy(enum class ActorType);
    /**
     * @symbol ?isOfType@ActorClassTree@@SA_NW4ActorType@@0@Z
     * @hash   1008680438
     */
    MCAPI static bool isOfType(enum class ActorType, enum class ActorType);
    /**
     * @symbol ?isTypeInstanceOf@ActorClassTree@@SA_NW4ActorType@@0@Z
     * @hash   589668464
     */
    MCAPI static bool isTypeInstanceOf(enum class ActorType, enum class ActorType);

};