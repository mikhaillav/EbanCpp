/**
 * @file  EnchantUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantUtils.
 *
 */
class EnchantUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTUTILS
public:
    class EnchantUtils& operator=(class EnchantUtils const &) = delete;
    EnchantUtils(class EnchantUtils const &) = delete;
    EnchantUtils() = delete;
#endif

public:
    /**
     * @symbol ?MAX_EXP_REPAIR_COST@EnchantUtils@@2HB
     * @hash   -299148665
     */
    MCAPI static int const MAX_EXP_REPAIR_COST;
    /**
     * @symbol ?PROTECTIONFACTOR_PRIMARYCAP@EnchantUtils@@2HB
     * @hash   -744367393
     */
    MCAPI static int const PROTECTIONFACTOR_PRIMARYCAP;
    /**
     * @symbol ?PROTECTIONFACTOR_SECONDARYCAP@EnchantUtils@@2HB
     * @hash   -1508886429
     */
    MCAPI static int const PROTECTIONFACTOR_SECONDARYCAP;
    /**
     * @symbol ?appendEnchantToFormattedText@EnchantUtils@@SAXW4Type@Enchant@@V?$basic_string_span@$$CBD$0?0@gsl@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1519643120
     */
    MCAPI static void appendEnchantToFormattedText(enum class Enchant::Type, class gsl::basic_string_span<char const, -1>, std::string &);
    /**
     * @symbol ?applyEnchant@EnchantUtils@@SAHAEAVItemStackBase@@AEBVItemEnchants@@_N@Z
     * @hash   1162192717
     */
    MCAPI static int applyEnchant(class ItemStackBase &, class ItemEnchants const &, bool);
    /**
     * @symbol ?applyEnchant@EnchantUtils@@SA_NAEAVItemStackBase@@AEBVEnchantmentInstance@@_N@Z
     * @hash   -712253333
     */
    MCAPI static bool applyEnchant(class ItemStackBase &, class EnchantmentInstance const &, bool);
    /**
     * @symbol ?applyEnchant@EnchantUtils@@SA_NAEAVItemStackBase@@W4Type@Enchant@@H_N@Z
     * @hash   -1533048654
     */
    MCAPI static bool applyEnchant(class ItemStackBase &, enum class Enchant::Type, int, bool);
    /**
     * @symbol ?canEnchant@EnchantUtils@@SA?AUEnchantResult@@AEBVItemStackBase@@AEBVEnchantmentInstance@@_N@Z
     * @hash   2038535017
     */
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const &, class EnchantmentInstance const &, bool);
    /**
     * @symbol ?canEnchant@EnchantUtils@@SA?AUEnchantResult@@AEBVItemStackBase@@W4Type@Enchant@@H_N@Z
     * @hash   1063586794
     */
    MCAPI static struct EnchantResult canEnchant(class ItemStackBase const &, enum class Enchant::Type, int, bool);
    /**
     * @symbol ?combineEnchantedItems@EnchantUtils@@SAHAEBVItemStack@@0AEAV2@_N@Z
     * @hash   83825730
     */
    MCAPI static int combineEnchantedItems(class ItemStack const &, class ItemStack const &, class ItemStack &, bool);
    /**
     * @symbol ?determineActivation@EnchantUtils@@SAHW4Type@Enchant@@@Z
     * @hash   2097500321
     */
    MCAPI static int determineActivation(enum class Enchant::Type);
    /**
     * @symbol ?determineCompatibility@EnchantUtils@@SAHW4Type@Enchant@@@Z
     * @hash   1564646171
     */
    MCAPI static int determineCompatibility(enum class Enchant::Type);
    /**
     * @symbol ?doPostDamageEffects@EnchantUtils@@SAXAEAVActor@@0@Z
     * @hash   1183484885
     */
    MCAPI static void doPostDamageEffects(class Actor &, class Actor &);
    /**
     * @symbol ?doPostHurtEffects@EnchantUtils@@SAXAEAVMob@@0@Z
     * @hash   554548064
     */
    MCAPI static void doPostHurtEffects(class Mob &, class Mob &);
    /**
     * @symbol ?generateEnchantedBook@EnchantUtils@@SA?AVItemInstance@@AEBVEnchantmentInstance@@@Z
     * @hash   -2026190333
     */
    MCAPI static class ItemInstance generateEnchantedBook(class EnchantmentInstance const &);
    /**
     * @symbol ?getAvailableEnchantmentResults@EnchantUtils@@SA?AV?$vector@U?$pair@VEnchantmentInstance@@H@std@@V?$allocator@U?$pair@VEnchantmentInstance@@H@std@@@2@@std@@PEBVItem@@H_N@Z
     * @hash   420033343
     */
    MCAPI static std::vector<struct std::pair<class EnchantmentInstance, int>> getAvailableEnchantmentResults(class Item const *, int, bool);
    /**
     * @symbol ?getBookCasePositions@EnchantUtils@@SA?AV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   1061852190
     */
    MCAPI static std::vector<class Vec3> getBookCasePositions(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?getCurses@EnchantUtils@@SAXAEBVItemStackBase@@AEAV?$vector@VEnchantmentInstance@@V?$allocator@VEnchantmentInstance@@@std@@@std@@@Z
     * @hash   -832166793
     */
    MCAPI static void getCurses(class ItemStackBase const &, std::vector<class EnchantmentInstance> &);
    /**
     * @symbol ?getDamageReduction@EnchantUtils@@SAMAEBVActorDamageSource@@AEBVMob@@@Z
     * @hash   -583078964
     */
    MCAPI static float getDamageReduction(class ActorDamageSource const &, class Mob const &);
    /**
     * @symbol ?getEnchantCosts@EnchantUtils@@SA?AV?$vector@HV?$allocator@H@std@@@std@@AEBVItemStackBase@@H@Z
     * @hash   -1496238998
     */
    MCAPI static std::vector<int> getEnchantCosts(class ItemStackBase const &, int);
    /**
     * @symbol ?getEnchantLevel@EnchantUtils@@SAHW4Type@Enchant@@AEBVItemStackBase@@@Z
     * @hash   -1366060524
     */
    MCAPI static int getEnchantLevel(enum class Enchant::Type, class ItemStackBase const &);
    /**
     * @symbol ?getEnchantNameAndLevel@EnchantUtils@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@Enchant@@H@Z
     * @hash   -1068960782
     */
    MCAPI static std::string getEnchantNameAndLevel(enum class Enchant::Type, int);
    /**
     * @symbol ?getEnchantingTablePositions@EnchantUtils@@SA?AV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     * @hash   -126644880
     */
    MCAPI static std::vector<class Vec3> getEnchantingTablePositions(class BlockSource &, class Vec3 const &);
    /**
     * @symbol ?getEnchantmentId@EnchantUtils@@SA?AW4Type@Enchant@@AEBVHashedString@@@Z
     * @hash   144880355
     */
    MCAPI static enum class Enchant::Type getEnchantmentId(class HashedString const &);
    /**
     * @symbol ?getLegalEnchants@EnchantUtils@@SA?AV?$vector@HV?$allocator@H@std@@@std@@PEBVItem@@@Z
     * @hash   -443965828
     */
    MCAPI static std::vector<int> getLegalEnchants(class Item const *);
    /**
     * @symbol ?getLootableRandomEnchantIndex@EnchantUtils@@SAHAEAVRandom@@@Z
     * @hash   880284609
     */
    MCAPI static int getLootableRandomEnchantIndex(class Random &);
    /**
     * @symbol ?getMeleeDamageBonus@EnchantUtils@@SAMAEBVActor@@AEAV2@@Z
     * @hash   -186839457
     */
    MCAPI static float getMeleeDamageBonus(class Actor const &, class Actor &);
    /**
     * @symbol ?getRandomDamagedItemWithMending@EnchantUtils@@SAAEBVItemStack@@AEBVMob@@@Z
     * @hash   -352999629
     */
    MCAPI static class ItemStack const & getRandomDamagedItemWithMending(class Mob const &);
    /**
     * @symbol ?getRandomItemWith@EnchantUtils@@SAAEBVItemStack@@W4Type@Enchant@@AEBVMob@@W4EquipmentFilter@@@Z
     * @hash   712764783
     */
    MCAPI static class ItemStack const & getRandomItemWith(enum class Enchant::Type, class Mob const &, enum class EquipmentFilter);
    /**
     * @symbol ?getRandomName@EnchantUtils@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1468877328
     */
    MCAPI static std::string getRandomName();
    /**
     * @symbol ?getTotalProtectionLevels@EnchantUtils@@SAHW4Type@Enchant@@AEBVMob@@@Z
     * @hash   1893125336
     */
    MCAPI static int getTotalProtectionLevels(enum class Enchant::Type, class Mob const &);
    /**
     * @symbol ?hasCurse@EnchantUtils@@SA_NAEBVItemStackBase@@@Z
     * @hash   285018933
     */
    MCAPI static bool hasCurse(class ItemStackBase const &);
    /**
     * @symbol ?hasEnchant@EnchantUtils@@SA_NW4Type@Enchant@@AEBVItemStackBase@@@Z
     * @hash   1240388570
     */
    MCAPI static bool hasEnchant(enum class Enchant::Type, class ItemStackBase const &);
    /**
     * @symbol ?isCurse@EnchantUtils@@SA_NW4Type@Enchant@@@Z
     * @hash   495909677
     */
    MCAPI static bool isCurse(enum class Enchant::Type);
    /**
     * @symbol ?randomlyEnchant@EnchantUtils@@SAXAEAVItemStack@@HH_N@Z
     * @hash   -1088006733
     */
    MCAPI static void randomlyEnchant(class ItemStack &, int, int, bool);
    /**
     * @symbol ?randomlyEnchant@EnchantUtils@@SAXAEAVItemInstance@@HH_N@Z
     * @hash   1848175641
     */
    MCAPI static void randomlyEnchant(class ItemInstance &, int, int, bool);
    /**
     * @symbol ?removeEnchants@EnchantUtils@@SAXAEAVItemStack@@@Z
     * @hash   -1129028912
     */
    MCAPI static void removeEnchants(class ItemStack &);
    /**
     * @symbol ?selectEnchantments@EnchantUtils@@SA?AVItemEnchants@@PEBVItem@@HH_N@Z
     * @hash   -111460171
     */
    MCAPI static class ItemEnchants selectEnchantments(class Item const *, int, int, bool);

//private:
    /**
     * @symbol ?_convertBookCheck@EnchantUtils@@CAXAEAVItemStackBase@@@Z
     * @hash   -1864762185
     */
    MCAPI static void _convertBookCheck(class ItemStackBase &);

private:
    /**
     * @symbol ?mEnchantmentNames@EnchantUtils@@0V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
     * @hash   764358183
     */
    MCAPI static std::vector<std::string> mEnchantmentNames;

};