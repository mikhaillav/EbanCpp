/**
 * @file  ContainerClosePacket.hpp
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
 * @brief MC class ContainerClosePacket.
 *
 */
class ContainerClosePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCLOSEPACKET
public:
    class ContainerClosePacket& operator=(class ContainerClosePacket const &) = delete;
    ContainerClosePacket(class ContainerClosePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   342599209
     */
    virtual ~ContainerClosePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ContainerClosePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -94404225
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ContainerClosePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1124593708
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ContainerClosePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1973107515
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ContainerClosePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1852838437
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ContainerClosePacket@@QEAA@XZ
     * @hash   241117579
     */
    MCAPI ContainerClosePacket();
    /**
     * @symbol ??0ContainerClosePacket@@QEAA@W4ContainerID@@_N@Z
     * @hash   -1414098011
     */
    MCAPI ContainerClosePacket(enum class ContainerID, bool);

};