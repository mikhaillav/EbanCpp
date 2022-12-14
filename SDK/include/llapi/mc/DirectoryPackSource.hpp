/**
 * @file  DirectoryPackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackSource.
 *
 */
class DirectoryPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKSOURCE
public:
    class DirectoryPackSource& operator=(class DirectoryPackSource const &) = delete;
    DirectoryPackSource(class DirectoryPackSource const &) = delete;
    DirectoryPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1662082223
     */
    virtual ~DirectoryPackSource();
    /**
     * @vftbl  1
     * @hash   348635377
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   349558898
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getPackOrigin@DirectoryPackSource@@UEBA?AW4PackOrigin@@XZ
     * @hash   940152309
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl  4
     * @symbol ?getPackType@DirectoryPackSource@@UEBA?AW4PackType@@XZ
     * @hash   1143061941
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl  5
     * @symbol ?load@DirectoryPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   1933151794
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTORYPACKSOURCE
    /**
     * @symbol ?forEachPack@DirectoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     * @hash   1144829257
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @symbol ?forEachPackConst@DirectoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     * @hash   -1765831896
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @symbol ??0DirectoryPackSource@@QEAA@AEBVPath@Core@@W4PackType@@W4PackOrigin@@_N@Z
     * @hash   -160787815
     */
    MCAPI DirectoryPackSource(class Core::Path const &, enum class PackType, enum class PackOrigin, bool);
    /**
     * @symbol ?getPath@DirectoryPackSource@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -140419217
     */
    MCAPI class Core::PathBuffer<std::string> const & getPath() const;
    /**
     * @symbol ?removePack@DirectoryPackSource@@QEAA_NAEBVPath@Core@@@Z
     * @hash   1752413049
     */
    MCAPI bool removePack(class Core::Path const &);
    /**
     * @symbol ?checkAndRemoveIncompletePacks@DirectoryPackSource@@SAXAEBVPath@Core@@@Z
     * @hash   -1967394762
     */
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const &);

};