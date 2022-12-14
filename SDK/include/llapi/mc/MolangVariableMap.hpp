/**
 * @file  MolangVariableMap.hpp
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
 * @brief MC class MolangVariableMap.
 *
 */
class MolangVariableMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGVARIABLEMAP
public:
    MolangVariableMap() = delete;
#endif

public:
    /**
     * @symbol ??0MolangVariableMap@@QEAA@AEBV0@@Z
     * @hash   -1426358095
     */
    MCAPI MolangVariableMap(class MolangVariableMap const &);
    /**
     * @symbol ??0MolangVariableMap@@QEAA@$$QEAV0@@Z
     * @hash   -1232581431
     */
    MCAPI MolangVariableMap(class MolangVariableMap &&);
    /**
     * @symbol ?clear@MolangVariableMap@@QEAAAEAV1@XZ
     * @hash   -1054766883
     */
    MCAPI class MolangVariableMap & clear();
    /**
     * @symbol ?getConstScriptArgReference@MolangVariableMap@@QEBAPEBUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
     * @hash   -1012053226
     */
    MCAPI struct MolangScriptArg const * getConstScriptArgReference(enum class MolangVariableIndex const &) const;
    /**
     * @symbol ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEBW4MolangVariableIndex@@AEA_N@Z
     * @hash   -47509707
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(enum class MolangVariableIndex const &, bool &) const;
    /**
     * @symbol ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEB_KAEA_N@Z
     * @hash   1992015843
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64 const &, bool &) const;
    /**
     * @symbol ?getMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@_KPEBD@Z
     * @hash   -739569502
     */
    MCAPI struct MolangScriptArg const & getMolangVariable(unsigned __int64, char const *) const;
    /**
     * @symbol ?getNonConstScriptArgReference@MolangVariableMap@@QEAAPEAUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
     * @hash   804722392
     */
    MCAPI struct MolangScriptArg * getNonConstScriptArgReference(enum class MolangVariableIndex const &);
    /**
     * @symbol ?getOrAddNonConstScriptArgReference@MolangVariableMap@@QEAAPEAUMolangScriptArg@@AEBW4MolangVariableIndex@@@Z
     * @hash   -1862981770
     */
    MCAPI struct MolangScriptArg * getOrAddNonConstScriptArgReference(enum class MolangVariableIndex const &);
    /**
     * @symbol ?getPublicMolangVariable@MolangVariableMap@@QEBAAEBUMolangScriptArg@@AEBW4MolangVariableIndex@@AEA_N@Z
     * @hash   454283317
     */
    MCAPI struct MolangScriptArg const & getPublicMolangVariable(enum class MolangVariableIndex const &, bool &) const;
    /**
     * @symbol ?getVariables@MolangVariableMap@@QEBAAEBV?$vector@V?$unique_ptr@VMolangVariable@@U?$default_delete@VMolangVariable@@@std@@@std@@V?$allocator@V?$unique_ptr@VMolangVariable@@U?$default_delete@VMolangVariable@@@std@@@std@@@2@@std@@XZ
     * @hash   -412922613
     */
    MCAPI std::vector<std::unique_ptr<class MolangVariable>> const & getVariables() const;
    /**
     * @symbol ??4MolangVariableMap@@QEAAAEAV0@AEBV0@@Z
     * @hash   -558789172
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap const &);
    /**
     * @symbol ??4MolangVariableMap@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -954548812
     */
    MCAPI class MolangVariableMap & operator=(class MolangVariableMap &&);
    /**
     * @symbol ?setMolangStructMember@MolangVariableMap@@QEAAXAEBVHashedString@@0AEBUMolangScriptArg@@@Z
     * @hash   422380656
     */
    MCAPI void setMolangStructMember(class HashedString const &, class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariable@MolangVariableMap@@QEAAXAEBVHashedString@@AEBUMolangScriptArg@@@Z
     * @hash   707520107
     */
    MCAPI void setMolangVariable(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariable@MolangVariableMap@@QEAAXW4MolangVariableIndex@@AEBUMolangScriptArg@@@Z
     * @hash   -885885349
     */
    MCAPI void setMolangVariable(enum class MolangVariableIndex, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariable@MolangVariableMap@@QEAAX_KPEBDAEBUMolangScriptArg@@@Z
     * @hash   605040168
     */
    MCAPI void setMolangVariable(unsigned __int64, char const *, struct MolangScriptArg const &);
    /**
     * @symbol ?setMolangVariableSettings@MolangVariableMap@@QEAAXAEBUMolangVariableSettings@@@Z
     * @hash   1631802970
     */
    MCAPI void setMolangVariableSettings(struct MolangVariableSettings const &);
    /**
     * @symbol ??1MolangVariableMap@@QEAA@XZ
     * @hash   -125769204
     */
    MCAPI ~MolangVariableMap();

//private:
    /**
     * @symbol ?_getMolangVariable@MolangVariableMap@@AEBAPEBVMolangVariable@@W4MolangVariableIndex@@@Z
     * @hash   -852433915
     */
    MCAPI class MolangVariable const * _getMolangVariable(enum class MolangVariableIndex) const;
    /**
     * @symbol ?_getOrAddMolangVariable@MolangVariableMap@@AEAAPEAVMolangVariable@@AEB_KPEBD_N@Z
     * @hash   -814963925
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(unsigned __int64 const &, char const *, bool);
    /**
     * @symbol ?_getOrAddMolangVariable@MolangVariableMap@@AEAAPEAVMolangVariable@@W4MolangVariableIndex@@@Z
     * @hash   -442182429
     */
    MCAPI class MolangVariable * _getOrAddMolangVariable(enum class MolangVariableIndex);

private:

};