/**
 * @file  ClientToServerHandshakePacket.hpp
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
 * @brief MC class ClientToServerHandshakePacket.
 *
 */
class ClientToServerHandshakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTTOSERVERHANDSHAKEPACKET
public:
    class ClientToServerHandshakePacket& operator=(class ClientToServerHandshakePacket const &) = delete;
    ClientToServerHandshakePacket(class ClientToServerHandshakePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -426666140
     */
    virtual ~ClientToServerHandshakePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ClientToServerHandshakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1152205016
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ClientToServerHandshakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1868790661
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ClientToServerHandshakePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1574050914
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ClientToServerHandshakePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1721888594
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ClientToServerHandshakePacket@@QEAA@XZ
     * @hash   739632866
     */
    MCAPI ClientToServerHandshakePacket();

};