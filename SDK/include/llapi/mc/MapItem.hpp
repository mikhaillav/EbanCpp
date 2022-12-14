/**
 * @file  MapItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "MapItemSavedData.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapItem.
 *
 */
class MapItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEM
public:
    class MapItem& operator=(class MapItem const &) = delete;
    MapItem(class MapItem const &) = delete;
    MapItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -466146979
     */
    virtual ~MapItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1815140784
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @hash   -190621068
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -158474657
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@MapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -900840437
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  101
     * @symbol ?inventoryTick@MapItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     * @hash   1972472111
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  102
     * @symbol ?refreshedInContainer@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
     * @hash   130570270
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @vftbl  106
     * @symbol ?fixupCommon@MapItem@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     * @hash   1869497796
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @vftbl  115
     * @symbol ?isSameItem@MapItem@@UEBA_NAEBVItemStackBase@@0@Z
     * @hash   -2123677332
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @vftbl  133
     * @symbol ?getUpdatePacket@MapItem@@UEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
     * @hash   14364032
     */
    virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @symbol ??0MapItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     * @hash   -555423950
     */
    MCAPI MapItem(std::string const &, short);
    /**
     * @symbol ?blockTick@MapItem@@QEBAXAEAVItemStack@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -483084888
     */
    MCAPI void blockTick(class ItemStack &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?update@MapItem@@QEBAXAEAVLevel@@AEAVActor@@AEAVMapItemSavedData@@@Z
     * @hash   707705266
     */
    MCAPI void update(class Level &, class Actor &, class MapItemSavedData &) const;
    /**
     * @symbol ?TAG_MAP_INIT@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1553376767
     */
    MCAPI static std::string const TAG_MAP_INIT;
    /**
     * @symbol ?TAG_MAP_NAME_INDEX@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -854292129
     */
    MCAPI static std::string const TAG_MAP_NAME_INDEX;
    /**
     * @symbol ?TAG_MAP_PLAYER_DISPLAY@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   540022239
     */
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;
    /**
     * @symbol ?TAG_MAP_REGENERATE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   415757919
     */
    MCAPI static std::string const TAG_MAP_REGENERATE;
    /**
     * @symbol ?TAG_MAP_SCALE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1805500259
     */
    MCAPI static std::string const TAG_MAP_SCALE;
    /**
     * @symbol ?TAG_MAP_SCALING@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -166437347
     */
    MCAPI static std::string const TAG_MAP_SCALING;
    /**
     * @symbol ?TAG_MAP_UUID@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1878067361
     */
    MCAPI static std::string const TAG_MAP_UUID;
    /**
     * @symbol ?doesDisplayPlayerMarkers@MapItem@@SA_NAEBVItemStack@@@Z
     * @hash   -862815405
     */
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const &);
    /**
     * @symbol ?getMapId@MapItem@@SA?AUActorUniqueID@@PEBVCompoundTag@@@Z
     * @hash   1933141962
     */
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const *);
    /**
     * @symbol ?markForRegeneration@MapItem@@SAXAEAVItemInstance@@@Z
     * @hash   144931668
     */
    MCAPI static void markForRegeneration(class ItemInstance &);
    /**
     * @symbol ?renderBiomePreviewMap@MapItem@@SAXAEAVDimension@@AEAVMapItemSavedData@@@Z
     * @hash   1744731371
     */
    MCAPI static void renderBiomePreviewMap(class Dimension &, class MapItemSavedData &);
    /**
     * @symbol ?sampleMapData@MapItem@@SAXAEAVBlockSource@@HAEBVBlockPos@@1HHPEAV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@PEAVMapItemSavedData@@PEAVMapItemTrackedActor@@PEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@5@@Z
     * @hash   -1187946461
     */
    MCAPI static void sampleMapData(class BlockSource &, int, class BlockPos const &, class BlockPos const &, int, int, std::vector<struct MapSample> *, class MapItemSavedData *, class MapItemTrackedActor *, std::vector<struct ClientTerrainPixel> *);
    /**
     * @symbol ?serializeMapData@MapItem@@SAXAEBV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1635298469
     */
    MCAPI static void serializeMapData(std::vector<struct MapSample> const &, std::string &);
    /**
     * @symbol ?setItemInstanceInfo@MapItem@@SAXAEAVItemInstance@@AEAVMapItemSavedData@@@Z
     * @hash   -817856475
     */
    MCAPI static void setItemInstanceInfo(class ItemInstance &, class MapItemSavedData &);
    /**
     * @symbol ?setItemInstanceInfo@MapItem@@SAXAEAVItemStack@@AEAVMapItemSavedData@@@Z
     * @hash   -2057249653
     */
    MCAPI static void setItemInstanceInfo(class ItemStack &, class MapItemSavedData &);
    /**
     * @symbol ?setMapNameIndex@MapItem@@SAXAEAVItemStack@@H@Z
     * @hash   1683191729
     */
    MCAPI static void setMapNameIndex(class ItemStack &, int);

//private:
    /**
     * @symbol ?_makeNewExplorationMap@MapItem@@AEBAXAEAVItemStack@@AEAVLevel@@PEAVActor@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1092303445
     */
    MCAPI void _makeNewExplorationMap(class ItemStack &, class Level &, class Actor *, std::string &) const;
    /**
     * @symbol ?_scheduleMapChunkRendering@MapItem@@CAXAEAVDimension@@AEBVMapItemSavedData@@UChunkBounds@3@V?$shared_ptr@_N@std@@@Z
     * @hash   -95346203
     */
    MCAPI static void _scheduleMapChunkRendering(class Dimension &, class MapItemSavedData const &, struct MapItemSavedData::ChunkBounds, class std::shared_ptr<bool>);

private:

};