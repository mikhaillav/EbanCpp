/**
 * @file  WorldHistoryPackSource.hpp
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
 * @brief MC class WorldHistoryPackSource.
 *
 */
class WorldHistoryPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDHISTORYPACKSOURCE
public:
    class WorldHistoryPackSource& operator=(class WorldHistoryPackSource const &) = delete;
    WorldHistoryPackSource(class WorldHistoryPackSource const &) = delete;
    WorldHistoryPackSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   434767776
     */
    virtual ~WorldHistoryPackSource();
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
     * @symbol ?getPackOrigin@WorldHistoryPackSource@@UEBA?AW4PackOrigin@@XZ
     * @hash   -1673204000
     */
    virtual enum class PackOrigin getPackOrigin() const;
    /**
     * @vftbl  4
     * @symbol ?getPackType@WorldHistoryPackSource@@UEBA?AW4PackType@@XZ
     * @hash   -513508672
     */
    virtual enum class PackType getPackType() const;
    /**
     * @vftbl  5
     * @symbol ?load@WorldHistoryPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     * @hash   1882047005
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDHISTORYPACKSOURCE
    /**
     * @symbol ?forEachPack@WorldHistoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     * @hash   -1481754594
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @symbol ?forEachPackConst@WorldHistoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     * @hash   -1679368003
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @symbol ??0WorldHistoryPackSource@@QEAA@AEBVPath@Core@@W4PackType@@@Z
     * @hash   -683828104
     */
    MCAPI WorldHistoryPackSource(class Core::Path const &, enum class PackType);
    /**
     * @symbol ?getPathToWorld@WorldHistoryPackSource@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -328383971
     */
    MCAPI class Core::PathBuffer<std::string> const & getPathToWorld() const;
    /**
     * @symbol ?generateHistoryFilePath@WorldHistoryPackSource@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@W4PackType@@@Z
     * @hash   1063798755
     */
    MCAPI static class Core::PathBuffer<std::string> generateHistoryFilePath(class Core::Path const &, enum class PackType);

//private:
    /**
     * @symbol ?_addPackFromHistoryPack@WorldHistoryPackSource@@AEAAXAEBVWorldPackHistory@@@Z
     * @hash   1368208818
     */
    MCAPI void _addPackFromHistoryPack(class WorldPackHistory const &);
    /**
     * @symbol ?_createPackFromHistoryPack@WorldHistoryPackSource@@AEAA?AV?$unique_ptr@VPack@@U?$default_delete@VPack@@@std@@@std@@AEBVWorldPackHistory@@@Z
     * @hash   614093136
     */
    MCAPI std::unique_ptr<class Pack> _createPackFromHistoryPack(class WorldPackHistory const &);
    /**
     * @symbol ?_readWorldHistoryFile@WorldHistoryPackSource@@AEAA_NXZ
     * @hash   1784698435
     */
    MCAPI bool _readWorldHistoryFile();

private:

};