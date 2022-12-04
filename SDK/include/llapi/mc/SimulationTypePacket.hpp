/**
 * @file  SimulationTypePacket.hpp
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
 * @brief MC class SimulationTypePacket.
 *
 */
class SimulationTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMULATIONTYPEPACKET
public:
    class SimulationTypePacket& operator=(class SimulationTypePacket const &) = delete;
    SimulationTypePacket(class SimulationTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2105160301
     */
    virtual ~SimulationTypePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SimulationTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1902190427
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SimulationTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -822014126
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SimulationTypePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   117008117
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SimulationTypePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -280037339
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SimulationTypePacket@@QEAA@XZ
     * @hash   -1109012779
     */
    MCAPI SimulationTypePacket();

};