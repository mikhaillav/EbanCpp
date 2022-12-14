/**
 * @file  NpcSceneDialogueData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "NpcComponent.hpp"
#include "WeakEntityRef.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class NpcSceneDialogueData.
 *
 */
class NpcSceneDialogueData {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
public:
    WeakEntityRef mWer;
    string mString;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCSCENEDIALOGUEDATA
public:
    class NpcSceneDialogueData& operator=(class NpcSceneDialogueData const &) = delete;
    NpcSceneDialogueData(class NpcSceneDialogueData const &) = delete;
    NpcSceneDialogueData() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -803659465
     */
    virtual ~NpcSceneDialogueData();
    /**
     * @vftbl  1
     * @symbol ?getDialogueText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   736734774
     */
    virtual std::string const & getDialogueText() const;
    /**
     * @vftbl  2
     * @hash   575795170
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getNameText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1087254185
     */
    virtual std::string const & getNameText() const;
    /**
     * @vftbl  4
     * @symbol ?getNameRawText@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1669522143
     */
    virtual std::string const & getNameRawText() const;
    /**
     * @vftbl  5
     * @symbol ?getSceneName@NpcSceneDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1010043580
     */
    virtual std::string const & getSceneName() const;
    /**
     * @vftbl  6
     * @hash   548635814
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @hash   549559335
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol ?getActorUniqueID@NpcSceneDialogueData@@UEAA?AUActorUniqueID@@XZ
     * @hash   1273486488
     */
    virtual struct ActorUniqueID getActorUniqueID();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCSCENEDIALOGUEDATA
    /**
     * @symbol ?getActionsContainer@NpcSceneDialogueData@@UEAAPEAUNpcActionsContainer@@XZ
     * @hash   -970668176
     */
    MCVAPI struct NpcActionsContainer * getActionsContainer();
    /**
     * @symbol ?getActionsContainer@NpcSceneDialogueData@@UEBAPEBUNpcActionsContainer@@XZ
     * @hash   -1538709588
     */
    MCVAPI struct NpcActionsContainer const * getActionsContainer() const;
    /**
     * @symbol ?getActor@NpcSceneDialogueData@@UEAAPEAVActor@@XZ
     * @hash   1435832786
     */
    MCVAPI class Actor * getActor();
    /**
     * @symbol ?getActor@NpcSceneDialogueData@@UEBAPEBVActor@@XZ
     * @hash   717796430
     */
    MCVAPI class Actor const * getActor() const;
#endif
    /**
     * @symbol ??0NpcSceneDialogueData@@QEAA@VWeakEntityRef@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   161209683
     */
    MCAPI NpcSceneDialogueData(class WeakEntityRef, std::string const &);

};