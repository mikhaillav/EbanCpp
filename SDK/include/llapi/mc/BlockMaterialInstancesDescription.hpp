/**
 * @file  BlockMaterialInstancesDescription.hpp
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
 * @brief MC structure BlockMaterialInstancesDescription.
 *
 */
struct BlockMaterialInstancesDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCESDESCRIPTION
public:
    struct BlockMaterialInstancesDescription& operator=(struct BlockMaterialInstancesDescription const &) = delete;
    BlockMaterialInstancesDescription(struct BlockMaterialInstancesDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1438124128
     */
    virtual ~BlockMaterialInstancesDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockMaterialInstancesDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -72404969
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockMaterialInstancesDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   1468454157
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1403710109
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockMaterialInstancesDescription@@UEBA_NXZ
     * @hash   1868030735
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockMaterialInstancesDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -827001215
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockMaterialInstancesDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   -2084000815
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ??0BlockMaterialInstancesDescription@@QEAA@XZ
     * @hash   -1626514562
     */
    MCAPI BlockMaterialInstancesDescription();
    /**
     * @symbol ??4BlockMaterialInstancesDescription@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   1610256740
     */
    MCAPI struct BlockMaterialInstancesDescription & operator=(struct BlockMaterialInstancesDescription &&);
    /**
     * @symbol ?NameID@BlockMaterialInstancesDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   27250089
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockMaterialInstancesDescription@@SAXXZ
     * @hash   68425119
     */
    MCAPI static void bindType();

};