/**
 * @file  BlockFrictionDescription.hpp
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
 * @brief MC structure BlockFrictionDescription.
 *
 */
struct BlockFrictionDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFRICTIONDESCRIPTION
public:
    struct BlockFrictionDescription& operator=(struct BlockFrictionDescription const &) = delete;
    BlockFrictionDescription(struct BlockFrictionDescription const &) = delete;
    BlockFrictionDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   441223583
     */
    virtual ~BlockFrictionDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockFrictionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1488609436
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockFrictionDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -1623668768
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockFrictionDescription@@UEBA_NXZ
     * @hash   -664887860
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockFrictionDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -616593474
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockFrictionDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1717292836
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?NameID@BlockFrictionDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1628348253
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockFrictionDescription@@SAXXZ
     * @hash   1464641971
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockFrictionDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -1258389976
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};