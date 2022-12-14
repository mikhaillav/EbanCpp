/**
 * @file  DatagramHeaderFormat.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DatagramHeaderFormat.
 *
 */
class DatagramHeaderFormat {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATAGRAMHEADERFORMAT
public:
    class DatagramHeaderFormat& operator=(class DatagramHeaderFormat const &) = delete;
    DatagramHeaderFormat(class DatagramHeaderFormat const &) = delete;
    DatagramHeaderFormat() = delete;
#endif

public:
    /**
     * @symbol ?Deserialize@DatagramHeaderFormat@@QEAAXPEAVBitStream@RakNet@@@Z
     * @hash   610355201
     */
    MCAPI void Deserialize(class RakNet::BitStream *);
    /**
     * @symbol ?Serialize@DatagramHeaderFormat@@QEAAXPEAVBitStream@RakNet@@@Z
     * @hash   681875599
     */
    MCAPI void Serialize(class RakNet::BitStream *);

};