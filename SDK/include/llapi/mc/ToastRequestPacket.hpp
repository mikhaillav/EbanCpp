/**
 * @file  ToastRequestPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ToastRequestPacket.
 *
 */
class ToastRequestPacket : public Packet {

#define AFTER_EXTRA
public:
    string mTitle;
    string mMessage;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOASTREQUESTPACKET
public:
    class ToastRequestPacket& operator=(class ToastRequestPacket const &) = delete;
    ToastRequestPacket(class ToastRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   841243866
     */
    virtual ~ToastRequestPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ToastRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1503456286
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ToastRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1422443829
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ToastRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   275557148
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ToastRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1761275868
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ToastRequestPacket@@QEAA@XZ
     * @hash   -592501012
     */
    MCAPI ToastRequestPacket();
    /**
     * @symbol ??0ToastRequestPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   428837267
     */
    MCAPI ToastRequestPacket(std::string const &, std::string const &);

};