/**
 * @file  BlockCollisionBoxDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockCollisionBoxDescription.
 *
 */
struct BlockCollisionBoxDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOLLISIONBOXDESCRIPTION
public:
    struct BlockCollisionBoxDescription& operator=(struct BlockCollisionBoxDescription const &) = delete;
    BlockCollisionBoxDescription(struct BlockCollisionBoxDescription const &) = delete;
    BlockCollisionBoxDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2145206016
     */
    virtual ~BlockCollisionBoxDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockCollisionBoxDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1562344067
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockCollisionBoxDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -1663620911
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockCollisionBoxDescription@@UEBA_NXZ
     * @hash   131332011
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockCollisionBoxDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -1527759171
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockCollisionBoxDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   110515493
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?NameID@BlockCollisionBoxDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -789258437
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockCollisionBoxDescription@@SAXXZ
     * @hash   -1288296685
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockCollisionBoxDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   2006175466
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};