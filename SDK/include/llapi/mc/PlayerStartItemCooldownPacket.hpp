/**
 * @file  PlayerStartItemCooldownPacket.hpp
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
 * @brief MC class PlayerStartItemCooldownPacket.
 *
 */
class PlayerStartItemCooldownPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSTARTITEMCOOLDOWNPACKET
public:
    class PlayerStartItemCooldownPacket& operator=(class PlayerStartItemCooldownPacket const &) = delete;
    PlayerStartItemCooldownPacket(class PlayerStartItemCooldownPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1947826933
     */
    virtual ~PlayerStartItemCooldownPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@PlayerStartItemCooldownPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -933998025
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@PlayerStartItemCooldownPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   90565860
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@PlayerStartItemCooldownPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1611588989
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@PlayerStartItemCooldownPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1446035373
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0PlayerStartItemCooldownPacket@@QEAA@XZ
     * @hash   163397299
     */
    MCAPI PlayerStartItemCooldownPacket();
    /**
     * @symbol ??0PlayerStartItemCooldownPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -519553451
     */
    MCAPI PlayerStartItemCooldownPacket(std::string const &, int);

};