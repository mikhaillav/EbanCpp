/**
 * @file  InPackagePackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InPackagePackSource.
 *
 */
class InPackagePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INPACKAGEPACKSOURCE
public:
    class InPackagePackSource& operator=(class InPackagePackSource const &) = delete;
    InPackagePackSource(class InPackagePackSource const &) = delete;
    InPackagePackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   586817187
     */
    virtual ~InPackagePackSource();
    /**
     * @vftbl  1
     * @hash   348758385
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   349681906
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getPackOrigin@InPackagePackSource@@UEBA?AW4PackOrigin@@XZ
     * @hash   2120926593
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl  4
     * @symbol ?getPackType@InPackagePackSource@@UEBA?AW4PackType@@XZ
     * @hash   -318625407
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl  5
     * @symbol ?load@InPackagePackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   1771791838
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INPACKAGEPACKSOURCE
    /**
     * @symbol ?forEachPack@InPackagePackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     * @hash   -2141275075
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @symbol ?forEachPackConst@InPackagePackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     * @hash   -756968932
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @symbol ??0InPackagePackSource@@QEAA@AEBV?$shared_ptr@VIInPackagePacks@@@std@@W4PackType@@@Z
     * @hash   -2075036862
     */
    MCAPI InPackagePackSource(class std::shared_ptr<class IInPackagePacks> const &, enum class PackType);

};