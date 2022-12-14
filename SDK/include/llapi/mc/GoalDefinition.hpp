/**
 * @file  GoalDefinition.hpp
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
 * @brief MC structure GoalDefinition.
 *
 */
struct GoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0GoalDefinition@@QEAA@XZ
     * @hash   -1051985326
     */
    MCAPI GoalDefinition();
    /**
     * @symbol ??0GoalDefinition@@QEAA@AEBU0@@Z
     * @hash   1197119855
     */
    MCAPI GoalDefinition(struct GoalDefinition const &);
    /**
     * @symbol ??0GoalDefinition@@QEAA@$$QEAU0@@Z
     * @hash   991030489
     */
    MCAPI GoalDefinition(struct GoalDefinition &&);
    /**
     * @symbol ?_getPOITypeFromString@GoalDefinition@@QEAA?AW4POIType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1007765681
     */
    MCAPI enum class POIType _getPOITypeFromString(std::string);
    /**
     * @symbol ??4GoalDefinition@@QEAAAEAU0@AEBU0@@Z
     * @hash   1930216550
     */
    MCAPI struct GoalDefinition & operator=(struct GoalDefinition const &);
    /**
     * @symbol ??4GoalDefinition@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -2082718096
     */
    MCAPI struct GoalDefinition & operator=(struct GoalDefinition &&);
    /**
     * @symbol ?parse@GoalDefinition@@QEAA_NAEBUConstDeserializeDataParams@@H@Z
     * @hash   -729345844
     */
    MCAPI bool parse(struct ConstDeserializeDataParams const &, int);
    /**
     * @symbol ??1GoalDefinition@@QEAA@XZ
     * @hash   1360782320
     */
    MCAPI ~GoalDefinition();
    /**
     * @symbol ?CreateGoal@GoalDefinition@@SA?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBU1@@Z
     * @hash   796108629
     */
    MCAPI static std::unique_ptr<class Goal> CreateGoal(class Mob &, struct GoalDefinition const &);
    /**
     * @symbol ?GoalExists@GoalDefinition@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1465616667
     */
    MCAPI static bool GoalExists(std::string const &);
    /**
     * @symbol ?init@GoalDefinition@@SAXXZ
     * @hash   -1068012573
     */
    MCAPI static void init();
    /**
     * @symbol ?mGoalMap@GoalDefinition@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBUGoalDefinition@@@Z@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6A?AV?$unique_ptr@VGoal@@U?$default_delete@VGoal@@@std@@@std@@AEAVMob@@AEBUGoalDefinition@@@Z@2@@std@@@2@@std@@A
     * @hash   -885322811
     */
    MCAPI static class std::unordered_map<std::string, class std::function<std::unique_ptr<class Goal> (class Mob &, struct GoalDefinition const &)>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::function<std::unique_ptr<class Goal> (class Mob &, struct GoalDefinition const &)>>>> mGoalMap;
    /**
     * @symbol ?shutdown@GoalDefinition@@SAXXZ
     * @hash   -239180413
     */
    MCAPI static void shutdown();

};