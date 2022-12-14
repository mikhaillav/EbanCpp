/**
 * @file  PlayerAuthInputPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerAuthInputPacket.
 *
 */
class PlayerAuthInputPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum class InputData;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERAUTHINPUTPACKET
public:
    class PlayerAuthInputPacket& operator=(class PlayerAuthInputPacket const &) = delete;
    PlayerAuthInputPacket(class PlayerAuthInputPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1265487017
     */
    virtual ~PlayerAuthInputPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerAuthInputPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1538066245
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerAuthInputPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1501308398
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerAuthInputPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   772369141
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerAuthInputPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   201274773
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PlayerAuthInputPacket@@QEAA@XZ
     * @hash   1438329877
     */
    MCAPI PlayerAuthInputPacket();
    /**
     * @symbol ??0PlayerAuthInputPacket@@QEAA@$$QEAV0@@Z
     * @hash   -113682837
     */
    MCAPI PlayerAuthInputPacket(class PlayerAuthInputPacket &&);
    /**
     * @symbol ?getInput@PlayerAuthInputPacket@@QEBA_NW4InputData@1@@Z
     * @hash   1201242961
     */
    MCAPI bool getInput(enum class PlayerAuthInputPacket::InputData) const;
    /**
     * @symbol ??4PlayerAuthInputPacket@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -308435594
     */
    MCAPI class PlayerAuthInputPacket & operator=(class PlayerAuthInputPacket &&);
    /**
     * @symbol ?readIntoComponent@PlayerAuthInputPacket@@QEBA?AUPlayerActionComponent@@XZ
     * @hash   -1843467196
     */
    MCAPI struct PlayerActionComponent readIntoComponent() const;
    /**
     * @symbol ?setInput@PlayerAuthInputPacket@@QEAAXW4InputData@1@_N@Z
     * @hash   1707352167
     */
    MCAPI void setInput(enum class PlayerAuthInputPacket::InputData, bool);
    /**
     * @symbol ?takeCopy@PlayerAuthInputPacket@@QEBA?AV1@XZ
     * @hash   -2009274738
     */
    MCAPI class PlayerAuthInputPacket takeCopy() const;

};