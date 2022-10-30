/**
 * @file  DeferredDescriptor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemDescriptor.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure DeferredDescriptor.
 *
 */
struct DeferredDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDDESCRIPTOR
public:
    struct DeferredDescriptor& operator=(struct DeferredDescriptor const &) = delete;
    DeferredDescriptor(struct DeferredDescriptor const &) = delete;
    DeferredDescriptor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?clone@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   -1918774804
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> clone() const;
    /**
     * @vftbl  2
     * @symbol ?sameItem@DeferredDescriptor@@UEBA_NAEBUItemEntry@ItemDescriptor@@_N@Z
     * @hash   1729359048
     */
    virtual bool sameItem(struct ItemDescriptor::ItemEntry const &, bool) const;
    /**
     * @vftbl  3
     * @symbol ?getFullName@DeferredDescriptor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1647332246
     */
    virtual std::string const & getFullName() const;
    /**
     * @vftbl  6
     * @symbol ?toMap@DeferredDescriptor@@UEBA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
     * @hash   -2115700894
     */
    virtual class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> toMap() const;
    /**
     * @vftbl  7
     * @symbol ?save@DeferredDescriptor@@UEBA?AV?$optional@VCompoundTag@@@std@@XZ
     * @hash   -1621891386
     */
    virtual class std::optional<class CompoundTag> save() const;
    /**
     * @vftbl  9
     * @symbol ?serialize@DeferredDescriptor@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1145812889
     */
    virtual void serialize(class BinaryStream &) const;
    /**
     * @vftbl  10
     * @symbol ?getType@DeferredDescriptor@@UEBA?AW4InternalType@ItemDescriptor@@XZ
     * @hash   -1731638431
     */
    virtual enum class ItemDescriptor::InternalType getType() const;
    /**
     * @vftbl  11
     * @symbol ?shouldResolve@DeferredDescriptor@@UEBA_NXZ
     * @hash   -1708815501
     */
    virtual bool shouldResolve() const;
    /**
     * @vftbl  12
     * @symbol ?getHash@DeferredDescriptor@@UEBA_KXZ
     * @hash   -683172954
     */
    virtual unsigned __int64 getHash() const;
    /**
     * @vftbl  13
     * @hash   -336537386
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol ?resolve@DeferredDescriptor@@UEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@XZ
     * @hash   -1773405237
     */
    virtual std::unique_ptr<struct ItemDescriptor::BaseDescriptor> resolve() const;
    /**
     * @symbol ?deserialize@DeferredDescriptor@@SA?AV?$unique_ptr@UDeferredDescriptor@@U?$default_delete@UDeferredDescriptor@@@std@@@std@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1169306891
     */
    MCAPI static std::unique_ptr<struct DeferredDescriptor> deserialize(class ReadOnlyBinaryStream &);

//private:
    /**
     * @symbol ?_initFromBlockLegacy@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@AEBVBlockLegacy@@$$QEAV?$WeakPtr@VItem@@@@@Z
     * @hash   1600858821
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromBlockLegacy(class BlockLegacy const &, class WeakPtr<class Item> &&) const;
    /**
     * @symbol ?_initFromItem@DeferredDescriptor@@AEBA?AV?$unique_ptr@UBaseDescriptor@ItemDescriptor@@U?$default_delete@UBaseDescriptor@ItemDescriptor@@@std@@@std@@$$QEAV?$WeakPtr@VItem@@@@F@Z
     * @hash   -2063168293
     */
    MCAPI std::unique_ptr<struct ItemDescriptor::BaseDescriptor> _initFromItem(class WeakPtr<class Item> &&, short) const;

};