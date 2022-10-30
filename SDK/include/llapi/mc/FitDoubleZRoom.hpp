/**
 * @file  FitDoubleZRoom.hpp
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
 * @brief MC class FitDoubleZRoom.
 *
 */
class FitDoubleZRoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITDOUBLEZROOM
public:
    class FitDoubleZRoom& operator=(class FitDoubleZRoom const &) = delete;
    FitDoubleZRoom(class FitDoubleZRoom const &) = delete;
    FitDoubleZRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -334234723
     */
    virtual ~FitDoubleZRoom();
    /**
     * @vftbl  1
     * @symbol ?fits@FitDoubleZRoom@@UEBA_NAEBVRoomDefinition@@@Z
     * @hash   1231201850
     */
    virtual bool fits(class RoomDefinition const &) const;
    /**
     * @vftbl  2
     * @symbol ?create@FitDoubleZRoom@@UEAA?AV?$unique_ptr@VOceanMonumentPiece@@U?$default_delete@VOceanMonumentPiece@@@std@@@std@@AEAHV?$shared_ptr@VRoomDefinition@@@3@AEAVRandom@@@Z
     * @hash   -1382446461
     */
    virtual std::unique_ptr<class OceanMonumentPiece> create(int &, class std::shared_ptr<class RoomDefinition>, class Random &);

};