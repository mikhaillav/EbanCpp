/**
 * @file  RoomDefinition.hpp
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
 * @brief MC class RoomDefinition.
 *
 */
class RoomDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROOMDEFINITION
public:
    class RoomDefinition& operator=(class RoomDefinition const &) = delete;
    RoomDefinition() = delete;
#endif

public:
    /**
     * @symbol ??0RoomDefinition@@QEAA@H@Z
     * @hash   -306396015
     */
    MCAPI RoomDefinition(int);
    /**
     * @symbol ??0RoomDefinition@@QEAA@AEBV0@@Z
     * @hash   1047861265
     */
    MCAPI RoomDefinition(class RoomDefinition const &);
    /**
     * @symbol ?findSource@RoomDefinition@@QEAA_NH@Z
     * @hash   -1935541311
     */
    MCAPI bool findSource(int);
    /**
     * @symbol ?setConnection@RoomDefinition@@QEAAXAEBEV?$shared_ptr@VRoomDefinition@@@std@@@Z
     * @hash   741060602
     */
    MCAPI void setConnection(unsigned char const &, class std::shared_ptr<class RoomDefinition>);
    /**
     * @symbol ??1RoomDefinition@@QEAA@XZ
     * @hash   -552051496
     */
    MCAPI ~RoomDefinition();

};