/**
 * @file  ItemStackRequestPacket.hpp
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
 * @brief MC class ItemStackRequestPacket.
 *
 */
class ItemStackRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTPACKET
public:
    class ItemStackRequestPacket& operator=(class ItemStackRequestPacket const &) = delete;
    ItemStackRequestPacket(class ItemStackRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1223190156
     */
    virtual ~ItemStackRequestPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ItemStackRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -2051463156
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ItemStackRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1042598215
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ItemStackRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   900751294
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ItemStackRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   955764414
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ItemStackRequestPacket@@QEAA@XZ
     * @hash   -1596107698
     */
    MCAPI ItemStackRequestPacket();
    /**
     * @symbol ?getRequestBatch@ItemStackRequestPacket@@QEBAAEBVItemStackRequestBatch@@XZ
     * @hash   -385369456
     */
    MCAPI class ItemStackRequestBatch const & getRequestBatch() const;

};