/**
 * @file  Item.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Item.
 *
 */
class Item {

#define AFTER_EXTRA
// Add Member There
public:
class Tier {
public:
    Tier() = delete;
    Tier(Tier const&) = delete;
    Tier(Tier const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEM
public:
    class Item& operator=(class Item const &) = delete;
    Item(class Item const &) = delete;
    Item() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -571984419
     */
    virtual ~Item();
    /**
     * @vftbl  1
     * @symbol ?initServer@Item@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   1469909314
     */
    virtual bool initServer(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  2
     * @symbol ?tearDown@Item@@UEAAXXZ
     * @hash   1377492792
     */
    virtual void tearDown();
    /**
     * @vftbl  3
     * @symbol ?setDescriptionId@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1728514716
     */
    virtual class Item & setDescriptionId(std::string const &);
    /**
     * @vftbl  4
     * @symbol ?getDescriptionId@Item@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   958423174
     */
    virtual std::string const & getDescriptionId() const;
    /**
     * @vftbl  5
     * @symbol ?getMaxUseDuration@Item@@UEBAHPEBVItemInstance@@@Z
     * @hash   -1894647106
     */
    virtual int getMaxUseDuration(class ItemInstance const *) const;
    /**
     * @vftbl  6
     * @symbol ?getMaxUseDuration@Item@@UEBAHPEBVItemStack@@@Z
     * @hash   765886953
     */
    virtual int getMaxUseDuration(class ItemStack const *) const;
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol ?hasTag@Item@@UEBA_NAEBVHashedString@@@Z
     * @hash   1967226412
     */
    virtual bool hasTag(class HashedString const &) const;
    /**
     * @vftbl  9
     * @symbol ?hasTag@Item@@UEBA_NAEBUItemTag@@@Z
     * @hash   1049866942
     */
    virtual bool hasTag(struct ItemTag const &) const;
    /**
     * @vftbl  10
     * @symbol ?executeEvent@Item@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     * @hash   906504408
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol ?isArmor@Item@@UEBA_NXZ
     * @hash   2053148186
     */
    virtual bool isArmor() const;
    /**
     * @vftbl  13
     * @symbol ?isBlockPlanterItem@Item@@UEBA_NXZ
     * @hash   1302044237
     */
    virtual bool isBlockPlanterItem() const;
    /**
     * @vftbl  14
     * @hash   -328402521
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol ?isCamera@Item@@UEBA_NXZ
     * @hash   1186174580
     */
    virtual bool isCamera() const;
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol ?isDamageable@Item@@UEBA_NXZ
     * @hash   1043199272
     */
    virtual bool isDamageable() const;
    /**
     * @vftbl  18
     * @symbol ?isDyeable@Item@@UEBA_NXZ
     * @hash   -203904955
     */
    virtual bool isDyeable() const;
    /**
     * @vftbl  19
     * @symbol ?isDye@Item@@UEBA_NXZ
     * @hash   -876620245
     */
    virtual bool isDye() const;
    /**
     * @vftbl  20
     * @symbol ?getItemColor@Item@@UEBA?AW4ItemColor@@XZ
     * @hash   -613637187
     */
    virtual enum class ItemColor getItemColor() const;
    /**
     * @vftbl  21
     * @symbol ?isFertilizer@Item@@UEBA_NXZ
     * @hash   1486538321
     */
    virtual bool isFertilizer() const;
    /**
     * @vftbl  22
     * @symbol ?isFood@Item@@UEBA_NXZ
     * @hash   -644472595
     */
    virtual bool isFood() const;
    /**
     * @vftbl  23
     * @symbol ?isThrowable@Item@@UEBA_NXZ
     * @hash   1165155963
     */
    virtual bool isThrowable() const;
    /**
     * @vftbl  24
     * @symbol ?isUseable@Item@@UEBA_NXZ
     * @hash   -2033954436
     */
    virtual bool isUseable() const;
    /**
     * @vftbl  25
     * @symbol ?getComponent@Item@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
     * @hash   -984966445
     */
    virtual class ItemComponent * getComponent(class HashedString const &) const;
    /**
     * @vftbl  26
     * @symbol ?getCamera@Item@@UEBAPEAVICameraItemComponent@@XZ
     * @hash   519209400
     */
    virtual class ICameraItemComponent * getCamera() const;
    /**
     * @vftbl  27
     * @symbol ?getFood@Item@@UEBAPEAVIFoodItemComponent@@XZ
     * @hash   -1927261478
     */
    virtual class IFoodItemComponent * getFood() const;
    /**
     * @vftbl  28
     * @symbol ?setMaxStackSize@Item@@UEAAAEAV1@E@Z
     * @hash   1549757435
     */
    virtual class Item & setMaxStackSize(unsigned char);
    /**
     * @vftbl  29
     * @symbol ?setStackedByData@Item@@UEAAAEAV1@_N@Z
     * @hash   -1264733701
     */
    virtual class Item & setStackedByData(bool);
    /**
     * @vftbl  30
     * @symbol ?setMaxDamage@Item@@UEAAAEAV1@H@Z
     * @hash   -1152681613
     */
    virtual class Item & setMaxDamage(int);
    /**
     * @vftbl  31
     * @symbol ?setHandEquipped@Item@@UEAAAEAV1@XZ
     * @hash   -153523269
     */
    virtual class Item & setHandEquipped();
    /**
     * @vftbl  32
     * @symbol ?setUseAnimation@Item@@UEAAAEAV1@W4UseAnimation@@@Z
     * @hash   -514641411
     */
    virtual class Item & setUseAnimation(enum class UseAnimation);
    /**
     * @vftbl  33
     * @symbol ?setMaxUseDuration@Item@@UEAAAEAV1@H@Z
     * @hash   536688203
     */
    virtual class Item & setMaxUseDuration(int);
    /**
     * @vftbl  34
     * @symbol ?setRequiresWorldBuilder@Item@@UEAAAEAV1@_N@Z
     * @hash   -1428768664
     */
    virtual class Item & setRequiresWorldBuilder(bool);
    /**
     * @vftbl  35
     * @symbol ?setExplodable@Item@@UEAAAEAV1@_N@Z
     * @hash   -642940111
     */
    virtual class Item & setExplodable(bool);
    /**
     * @vftbl  36
     * @symbol ?setFireResistant@Item@@UEAAAEAV1@_N@Z
     * @hash   -1388599156
     */
    virtual class Item & setFireResistant(bool);
    /**
     * @vftbl  37
     * @symbol ?setIsGlint@Item@@UEAAAEAV1@_N@Z
     * @hash   288174435
     */
    virtual class Item & setIsGlint(bool);
    /**
     * @vftbl  38
     * @symbol ?setShouldDespawn@Item@@UEAAAEAV1@_N@Z
     * @hash   2092173212
     */
    virtual class Item & setShouldDespawn(bool);
    /**
     * @vftbl  39
     * @symbol ?buildNetworkTag@Item@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -933022048
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  40
     * @symbol ?initializeFromNetwork@Item@@UEAAXAEBVCompoundTag@@@Z
     * @hash   -1052416350
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl  41
     * @symbol ?validateFromNetwork@Item@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
     * @hash   846426537
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const &);
    /**
     * @vftbl  42
     * @symbol ?getBlockShape@Item@@UEBA?AW4BlockShape@@XZ
     * @hash   -798319613
     */
    virtual enum class BlockShape getBlockShape() const;
    /**
     * @vftbl  43
     * @symbol ?canBeDepleted@Item@@UEBA_NXZ
     * @hash   1386787331
     */
    virtual bool canBeDepleted() const;
    /**
     * @vftbl  44
     * @symbol ?canDestroySpecial@Item@@UEBA_NAEBVBlock@@@Z
     * @hash   1819188166
     */
    virtual bool canDestroySpecial(class Block const &) const;
    /**
     * @vftbl  45
     * @symbol ?getLevelDataForAuxValue@Item@@UEBAHH@Z
     * @hash   -1989864857
     */
    virtual int getLevelDataForAuxValue(int) const;
    /**
     * @vftbl  46
     * @symbol ?isStackedByData@Item@@UEBA_NXZ
     * @hash   425446547
     */
    virtual bool isStackedByData() const;
    /**
     * @vftbl  47
     * @symbol ?getMaxDamage@Item@@UEBAFXZ
     * @hash   -942405992
     */
    virtual short getMaxDamage() const;
    /**
     * @vftbl  48
     * @symbol ?getAttackDamage@Item@@UEBAHXZ
     * @hash   -1236499723
     */
    virtual int getAttackDamage() const;
    /**
     * @vftbl  49
     * @symbol ?isHandEquipped@Item@@UEBA_NXZ
     * @hash   -883847859
     */
    virtual bool isHandEquipped() const;
    /**
     * @vftbl  50
     * @symbol ?isGlint@Item@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   1035375292
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  52
     * @symbol ?getPatternIndex@Item@@UEBAHXZ
     * @hash   -1800380896
     */
    virtual int getPatternIndex() const;
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  54
     * @symbol ?isWearableThroughLootTable@Item@@UEBA_NPEBVCompoundTag@@@Z
     * @hash   -483674485
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /**
     * @vftbl  55
     * @symbol ?canDestroyInCreative@Item@@UEBA_NXZ
     * @hash   -963582253
     */
    virtual bool canDestroyInCreative() const;
    /**
     * @vftbl  56
     * @symbol ?isDestructive@Item@@UEBA_NH@Z
     * @hash   -155381456
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl  57
     * @symbol ?isLiquidClipItem@Item@@UEBA_NH@Z
     * @hash   -185139201
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl  58
     * @symbol ?shouldInteractionWithBlockBypassLiquid@Item@@UEBA_NAEBVBlock@@@Z
     * @hash   2023093353
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @vftbl  59
     * @symbol ?requiresInteract@Item@@UEBA_NXZ
     * @hash   1492090569
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl  60
     * @symbol ?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1467807756
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  61
     * @symbol ?isValidRepairItem@Item@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     * @hash   -1565853317
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vftbl  62
     * @symbol ?getEnchantSlot@Item@@UEBAHXZ
     * @hash   -2012805719
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantValue@Item@@UEBAHXZ
     * @hash   1540992854
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  64
     * @symbol ?getArmorValue@Item@@UEBAHXZ
     * @hash   418448880
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  65
     * @symbol ?getToughnessValue@Item@@UEBAHXZ
     * @hash   -991805795
     */
    virtual int getToughnessValue() const;
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol ?isValidAuxValue@Item@@UEBA_NH@Z
     * @hash   516327161
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  68
     * @symbol ?getDamageChance@Item@@UEBAHH@Z
     * @hash   -1642762020
     */
    virtual int getDamageChance(int) const;
    /**
     * @vftbl  69
     * @symbol ?getViewDamping@Item@@UEBAMXZ
     * @hash   -764275134
     */
    virtual float getViewDamping() const;
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
     * @vftbl  73
     * @symbol ?getColor@Item@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     * @hash   353739718
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vftbl  74
     * @symbol ?hasCustomColor@Item@@UEBA_NPEBVCompoundTag@@@Z
     * @hash   -1035612777
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  76
     * @symbol ?clearColor@Item@@UEBAXAEAVItemStackBase@@@Z
     * @hash   -1368375333
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @vftbl  77
     * @symbol ?clearColor@Item@@UEBAXPEAVCompoundTag@@@Z
     * @hash   -414417426
     */
    virtual void clearColor(class CompoundTag *) const;
    /**
     * @vftbl  78
     * @symbol ?setColor@Item@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     * @hash   -1989916365
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
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
     * @vftbl  81
     * @symbol ?getActorIdentifier@Item@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
     * @hash   562717972
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /**
     * @vftbl  82
     * @symbol ?buildIdAux@Item@@UEBAHFPEBVCompoundTag@@@Z
     * @hash   783483367
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @vftbl  83
     * @symbol ?canUseOnSimTick@Item@@UEBA_NXZ
     * @hash   -279449773
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @vftbl  84
     * @symbol ?use@Item@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   -950906293
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol ?dispense@Item@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   350915519
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  86
     * @symbol ?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   -1243511549
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  87
     * @symbol ?releaseUsing@Item@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     * @hash   -1691379627
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl  88
     * @symbol ?getDestroySpeed@Item@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
     * @hash   636254839
     */
    virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /**
     * @vftbl  89
     * @symbol ?hurtActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   666012753
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  90
     * @symbol ?hitActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   -269755435
     */
    virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  91
     * @symbol ?hitBlock@Item@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
     * @hash   -468248652
     */
    virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /**
     * @vftbl  92
     * @symbol ?mineBlock@Item@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   -1101853981
     */
    virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  93
     * @symbol ?mineBlock@Item@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   -349380376
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vftbl  94
     * @symbol ?buildDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     * @hash   -1929312495
     */
    virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -1095296825
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  96
     * @symbol ?buildEffectDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
     * @hash   1779664610
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /**
     * @vftbl  97
     * @symbol ?buildCategoryDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1995039694
     */
    virtual std::string buildCategoryDescriptionName() const;
    /**
     * @vftbl  98
     * @symbol ?readUserData@Item@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -426999286
     */
    virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /**
     * @vftbl  99
     * @symbol ?writeUserData@Item@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
     * @hash   1336961388
     */
    virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /**
     * @vftbl  100
     * @symbol ?getMaxStackSize@Item@@UEBAEAEBVItemDescriptor@@@Z
     * @hash   915966172
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @vftbl  101
     * @symbol ?inventoryTick@Item@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     * @hash   1738695187
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  102
     * @symbol ?refreshedInContainer@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
     * @hash   187105818
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @vftbl  103
     * @symbol ?getCooldownType@Item@@UEBAAEBVHashedString@@XZ
     * @hash   1779766087
     */
    virtual class HashedString const & getCooldownType() const;
    /**
     * @vftbl  104
     * @symbol ?getCooldownTime@Item@@UEBAHXZ
     * @hash   1504273094
     */
    virtual int getCooldownTime() const;
    /**
     * @vftbl  105
     * @symbol ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@@Z
     * @hash   1282157174
     */
    virtual void fixupCommon(class ItemStackBase &) const;
    /**
     * @vftbl  106
     * @symbol ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     * @hash   -1287501008
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @vftbl  107
     * @symbol ?getDamageValue@Item@@UEBAFPEBVCompoundTag@@@Z
     * @hash   -1614916467
     */
    virtual short getDamageValue(class CompoundTag const *) const;
    /**
     * @vftbl  108
     * @symbol ?setDamageValue@Item@@UEBAXAEAVItemStackBase@@F@Z
     * @hash   -1047744113
     */
    virtual void setDamageValue(class ItemStackBase &, short) const;
    /**
     * @vftbl  109
     * @symbol ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
     * @hash   1815214811
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
    /**
     * @vftbl  110
     * @symbol ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
     * @hash   -361414253
     */
    virtual enum class InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    /**
     * @vftbl  111
     * @symbol ?validFishInteraction@Item@@UEBA_NH@Z
     * @hash   729858666
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @vftbl  112
     * @symbol ?enchantProjectile@Item@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
     * @hash   -560405431
     */
    virtual void enchantProjectile(class ItemStackBase const &, class Actor &) const;
    /**
     * @vftbl  113
     * @symbol ?getEquipLocation@Item@@UEBA?AW4ActorLocation@@XZ
     * @hash   -451160616
     */
    virtual enum class ActorLocation getEquipLocation() const;
    /**
     * @vftbl  114
     * @symbol ?getEquipSound@Item@@UEBA?AW4LevelSoundEvent@@XZ
     * @hash   607011497
     */
    virtual enum class LevelSoundEvent getEquipSound() const;
    /**
     * @vftbl  115
     * @symbol ?isSameItem@Item@@UEBA_NAEBVItemStackBase@@0@Z
     * @hash   -1198172888
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @vftbl  116
     * @symbol ?initClient@Item@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     * @hash   557684808
     */
    virtual void initClient(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl  117
     * @symbol ?setIconInfo@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1044045799
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  118
     * @symbol ?getIconInfo@Item@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
     * @hash   -703274310
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const &, int, bool) const;
    /**
     * @vftbl  119
     * @symbol ?getInteractText@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     * @hash   961444222
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @vftbl  120
     * @symbol ?getAnimationFrameFor@Item@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     * @hash   1680495650
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @vftbl  121
     * @symbol ?isEmissive@Item@@UEBA_NH@Z
     * @hash   -1970278057
     */
    virtual bool isEmissive(int) const;
    /**
     * @vftbl  122
     * @symbol ?getLightEmission@Item@@UEBA?AUBrightness@@H@Z
     * @hash   -1898277186
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @vftbl  123
     * @symbol ?getIconYOffset@Item@@UEBAHXZ
     * @hash   2107567333
     */
    virtual int getIconYOffset() const;
    /**
     * @vftbl  124
     * @symbol ?canBeCharged@Item@@UEBA_NXZ
     * @hash   1678526370
     */
    virtual bool canBeCharged() const;
    /**
     * @vftbl  125
     * @symbol ?playSoundIncrementally@Item@@UEBAXAEBVItemInstance@@AEAVMob@@@Z
     * @hash   -1608380862
     */
    virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /**
     * @vftbl  126
     * @symbol ?playSoundIncrementally@Item@@UEBAXAEBVItemStack@@AEAVMob@@@Z
     * @hash   2097318775
     */
    virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /**
     * @vftbl  127
     * @symbol ?getFurnaceBurnIntervalMultipler@Item@@UEBAMAEBVItemStackBase@@@Z
     * @hash   1516341338
     */
    virtual float getFurnaceBurnIntervalMultipler(class ItemStackBase const &) const;
    /**
     * @vftbl  128
     * @symbol ?getFurnaceXPmultiplier@Item@@UEBAMAEBVItemStackBase@@@Z
     * @hash   -1588132261
     */
    virtual float getFurnaceXPmultiplier(class ItemStackBase const &) const;
    /**
     * @vftbl  129
     * @symbol ?getAuxValuesDescription@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2050968573
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @vftbl  130
     * @symbol ?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
     * @hash   1770821087
     */
    virtual bool _checkUseOnPermissions(class Actor &, class ItemStackBase &, unsigned char const &, class BlockPos const &) const;
    /**
     * @vftbl  131
     * @symbol ?_calculatePlacePos@Item@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     * @hash   1726979934
     */
    virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@Item@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   1716264465
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEM
    /**
     * @symbol ?getBaseColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     * @hash   906336278
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    /**
     * @symbol ?getSecondaryColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     * @hash   -1222310867
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    /**
     * @symbol ?hasCustomColor@Item@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   626675396
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const &) const;
    /**
     * @symbol ?isActorPlacerItem@Item@@UEBA_NXZ
     * @hash   781938350
     */
    MCVAPI bool isActorPlacerItem() const;
    /**
     * @symbol ?isBucket@Item@@UEBA_NXZ
     * @hash   -1255623559
     */
    MCVAPI bool isBucket() const;
    /**
     * @symbol ?isCandle@Item@@UEBA_NXZ
     * @hash   266527676
     */
    MCVAPI bool isCandle() const;
    /**
     * @symbol ?isComplex@Item@@UEBA_NXZ
     * @hash   537760107
     */
    MCVAPI bool isComplex() const;
    /**
     * @symbol ?isComponentBased@Item@@UEBA_NXZ
     * @hash   -1659458107
     */
    MCVAPI bool isComponentBased() const;
    /**
     * @symbol ?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z
     * @hash   1007747839
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
    /**
     * @symbol ?isMusicDisk@Item@@UEBA_NXZ
     * @hash   -1267339939
     */
    MCVAPI bool isMusicDisk() const;
    /**
     * @symbol ?isPattern@Item@@UEBA_NXZ
     * @hash   -757314485
     */
    MCVAPI bool isPattern() const;
    /**
     * @symbol ?showsDurabilityInCreative@Item@@UEBA_NXZ
     * @hash   -1473473480
     */
    MCVAPI bool showsDurabilityInCreative() const;
    /**
     * @symbol ?uniqueAuxValues@Item@@UEBA_NXZ
     * @hash   -2054451174
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     * @hash   -1238372346
     */
    MCAPI Item(std::string const &, short);
    /**
     * @symbol ?addOnResetBAIcallback@Item@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z
     * @hash   -1428530632
     */
    MCAPI void addOnResetBAIcallback(class std::function<void (void)> const &);
    /**
     * @symbol ?addTag@Item@@QEAAAEAV1@AEBUItemTag@@@Z
     * @hash   -364369053
     */
    MCAPI class Item & addTag(struct ItemTag const &);
    /**
     * @symbol ?addTag@Item@@QEAAAEAV1@AEBVHashedString@@@Z
     * @hash   1367842805
     */
    MCAPI class Item & addTag(class HashedString const &);
    /**
     * @symbol ?addTags@Item@@QEAAAEAV1@V?$initializer_list@V?$reference_wrapper@$$CBUItemTag@@@std@@@std@@@Z
     * @hash   1705087867
     */
    MCAPI class Item & addTags(class std::initializer_list<class std::reference_wrapper<struct ItemTag const>>);
    /**
     * @symbol ?allowOffhand@Item@@QEBA_NXZ
     * @hash   -1637532446
     */
    MCAPI bool allowOffhand() const;
    /**
     * @symbol ?buildDescriptor@Item@@QEBA?AVItemDescriptor@@FPEBVCompoundTag@@@Z
     * @hash   -1905285322
     */
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /**
     * @symbol ?calculatePlacePos@Item@@QEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
     * @hash   -1820973260
     */
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @symbol ?destroySpeedBonus@Item@@QEBAMAEBVItemStackBase@@@Z
     * @hash   -293141965
     */
    MCAPI float destroySpeedBonus(class ItemStackBase const &) const;
    /**
     * @symbol ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@@Z
     * @hash   -1194351686
     */
    MCAPI void fixupOnLoad(class ItemStackBase &) const;
    /**
     * @symbol ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     * @hash   -20971091
     */
    MCAPI void fixupOnLoad(class ItemStackBase &, class Level &) const;
    /**
     * @symbol ?getCommandNames@Item@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
     * @hash   1275654606
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const;
    /**
     * @symbol ?getCreativeCategory@Item@@QEBA?AW4CreativeItemCategory@@XZ
     * @hash   1703592152
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const;
    /**
     * @symbol ?getCreativeGroup@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -193741778
     */
    MCAPI std::string const & getCreativeGroup() const;
    /**
     * @symbol ?getFrameCount@Item@@QEBAHXZ
     * @hash   -1721028074
     */
    MCAPI int getFrameCount() const;
    /**
     * @symbol ?getFullItemName@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   938362284
     */
    MCAPI std::string const & getFullItemName() const;
    /**
     * @symbol ?getFullNameHash@Item@@QEBAAEBVHashedString@@XZ
     * @hash   -538863930
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @symbol ?getId@Item@@QEBAFXZ
     * @hash   -54607829
     */
    MCAPI short getId() const;
    /**
     * @symbol ?getLegacyBlock@Item@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
     * @hash   813371771
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @symbol ?getNamespace@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1672663874
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @symbol ?getRawNameHash@Item@@QEBAAEBVHashedString@@XZ
     * @hash   1891687678
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @symbol ?getRawNameId@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1462847266
     */
    MCAPI std::string const & getRawNameId() const;
    /**
     * @symbol ?getRequiredBaseGameVersion@Item@@QEBAAEBVBaseGameVersion@@XZ
     * @hash   -1704420328
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @symbol ?getSerializedName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1248841502
     */
    MCAPI std::string getSerializedName() const;
    /**
     * @symbol ?getUseAnimation@Item@@QEBA?AW4UseAnimation@@XZ
     * @hash   -836976050
     */
    MCAPI enum class UseAnimation getUseAnimation() const;
    /**
     * @symbol ?hasDamageValue@Item@@QEBA_NPEBVCompoundTag@@@Z
     * @hash   -2146430246
     */
    MCAPI bool hasDamageValue(class CompoundTag const *) const;
    /**
     * @symbol ?hasTag@Item@@QEBA_NAEB_K@Z
     * @hash   230123183
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @symbol ?isElytra@Item@@QEBA_NXZ
     * @hash   476851246
     */
    MCAPI bool isElytra() const;
    /**
     * @symbol ?isExplodable@Item@@QEBA_NXZ
     * @hash   1700133176
     */
    MCAPI bool isExplodable() const;
    /**
     * @symbol ?isFireResistant@Item@@QEBA_NXZ
     * @hash   669690580
     */
    MCAPI bool isFireResistant() const;
    /**
     * @symbol ?isNameTag@Item@@QEBA_NXZ
     * @hash   1011172660
     */
    MCAPI bool isNameTag() const;
    /**
     * @symbol ?isSeed@Item@@QEBA_NXZ
     * @hash   -1288761538
     */
    MCAPI bool isSeed() const;
    /**
     * @symbol ?removeDamageValue@Item@@QEBAXAEAVItemStackBase@@@Z
     * @hash   -1909696566
     */
    MCAPI void removeDamageValue(class ItemStackBase &) const;
    /**
     * @symbol ?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
     * @hash   -891215689
     */
    MCAPI class Item & setAllowOffhand(bool);
    /**
     * @symbol ?setCategory@Item@@QEAAAEAV1@W4CreativeItemCategory@@@Z
     * @hash   -1713272479
     */
    MCAPI class Item & setCategory(enum class CreativeItemCategory);
    /**
     * @symbol ?setCreativeGroup@Item@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   896043761
     */
    MCAPI class Item & setCreativeGroup(std::string const &);
    /**
     * @symbol ?setFurnaceBurnIntervalMultiplier@Item@@QEAAAEAV1@M@Z
     * @hash   1080284015
     */
    MCAPI class Item & setFurnaceBurnIntervalMultiplier(float);
    /**
     * @symbol ?setFurnaceXPmultiplier@Item@@QEAAAEAV1@M@Z
     * @hash   792016567
     */
    MCAPI class Item & setFurnaceXPmultiplier(float);
    /**
     * @symbol ?setIsMirroredArt@Item@@QEAAAEAV1@_N@Z
     * @hash   398406149
     */
    MCAPI class Item & setIsMirroredArt(bool);
    /**
     * @symbol ?setMinRequiredBaseGameVersion@Item@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
     * @hash   -314458679
     */
    MCAPI class Item & setMinRequiredBaseGameVersion(class BaseGameVersion const &);
    /**
     * @symbol ?shouldDespawn@Item@@QEBA_NXZ
     * @hash   -33099160
     */
    MCAPI bool shouldDespawn() const;
    /**
     * @symbol ?updateCustomBlockEntityTag@Item@@QEBA_NAEAVBlockSource@@AEAVItemStackBase@@AEBVBlockPos@@@Z
     * @hash   1523402673
     */
    MCAPI bool updateCustomBlockEntityTag(class BlockSource &, class ItemStackBase &, class BlockPos const &) const;
    /**
     * @symbol ?useOn@Item@@QEBA_NAEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z
     * @hash   217664664
     */
    MCAPI bool useOn(class ItemStack &, class Actor &, int, int, int, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ?ICON_DESCRIPTION_PREFIX@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1122919717
     */
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;
    /**
     * @symbol ?TAG_DAMAGE@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1973584469
     */
    MCAPI static std::string const TAG_DAMAGE;
    /**
     * @symbol ?addCreativeItem@Item@@SAXAEBVBlock@@@Z
     * @hash   2100847886
     */
    MCAPI static void addCreativeItem(class Block const &);
    /**
     * @symbol ?addCreativeItem@Item@@SAXAEBVItemInstance@@@Z
     * @hash   -1304379006
     */
    MCAPI static void addCreativeItem(class ItemInstance const &);
    /**
     * @symbol ?addCreativeItem@Item@@SAXAEBVItemStack@@@Z
     * @hash   -1128848786
     */
    MCAPI static void addCreativeItem(class ItemStack const &);
    /**
     * @symbol ?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@@Z
     * @hash   1099729203
     */
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const &);
    /**
     * @symbol ?endCreativeItemDefinitions@Item@@SAX_N@Z
     * @hash   1470001016
     */
    MCAPI static void endCreativeItemDefinitions(bool);
    /**
     * @symbol ?isElytra@Item@@SA_NAEBVItemDescriptor@@@Z
     * @hash   114274305
     */
    MCAPI static bool isElytra(class ItemDescriptor const &);
    /**
     * @symbol ?isElytraBroken@Item@@SA_NH@Z
     * @hash   499720877
     */
    MCAPI static bool isElytraBroken(int);
    /**
     * @symbol ?isFlyEnabled@Item@@SA_NAEBVItemInstance@@@Z
     * @hash   33534341
     */
    MCAPI static bool isFlyEnabled(class ItemInstance const &);
    /**
     * @symbol ?isSameTypeAndItem@Item@@SA_NAEBVItemStackBase@@0@Z
     * @hash   1474176698
     */
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const &, class ItemStackBase const &);
    /**
     * @symbol ?mActiveCreativeGroupInfo@Item@@2PEAVCreativeGroupInfo@@EA
     * @hash   -1318491589
     */
    MCAPI static class CreativeGroupInfo * mActiveCreativeGroupInfo;
    /**
     * @symbol ?mActiveCreativeItemCategory@Item@@2PEAVCreativeItemGroupCategory@@EA
     * @hash   1653360387
     */
    MCAPI static class CreativeItemGroupCategory * mActiveCreativeItemCategory;
    /**
     * @symbol ?mActiveCreativeItemRegistry@Item@@2PEAVCreativeItemRegistry@@EA
     * @hash   -1631411607
     */
    MCAPI static class CreativeItemRegistry * mActiveCreativeItemRegistry;
    /**
     * @symbol ?mGenerateDenyParticleEffect@Item@@2_NB
     * @hash   -1168262051
     */
    MCAPI static bool const mGenerateDenyParticleEffect;
    /**
     * @symbol ?startCreativeItemDefinitions@Item@@SAX_NPEAVCreativeItemRegistry@@@Z
     * @hash   1976776024
     */
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry *);
    /**
     * @symbol ?toBlockId@Item@@SA?AUNewBlockID@@F@Z
     * @hash   540660360
     */
    MCAPI static struct NewBlockID toBlockId(short);

//protected:
    /**
     * @symbol ?_helpChangeInventoryItemInPlace@Item@@IEBAXAEAVActor@@AEAVItemStack@@1W4ItemAcquisitionMethod@@@Z
     * @hash   240219114
     */
    MCAPI void _helpChangeInventoryItemInPlace(class Actor &, class ItemStack &, class ItemStack &, enum class ItemAcquisitionMethod) const;

//private:
    /**
     * @symbol ?_addLooseCreativeItemsClient@Item@@CAXXZ
     * @hash   -1683167475
     */
    MCAPI static void _addLooseCreativeItemsClient();

protected:

private:
    /**
     * @symbol ?mServerItemsUsedInCreativeItems@Item@@0V?$unique_ptr@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@U?$default_delete@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@@2@@std@@A
     * @hash   -1799784721
     */
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>> mServerItemsUsedInCreativeItems;

};