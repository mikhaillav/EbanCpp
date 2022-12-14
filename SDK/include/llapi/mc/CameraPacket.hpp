/**
 * @file  CameraPacket.hpp
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
 * @brief MC class CameraPacket.
 *
 */
class CameraPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAPACKET
public:
    class CameraPacket& operator=(class CameraPacket const &) = delete;
    CameraPacket(class CameraPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1276887
     */
    virtual ~CameraPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@CameraPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   771110481
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@CameraPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1364204290
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@CameraPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -980263527
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@CameraPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1397414809
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0CameraPacket@@QEAA@XZ
     * @hash   -1299612231
     */
    MCAPI CameraPacket();
    /**
     * @symbol ??0CameraPacket@@QEAA@UActorUniqueID@@0@Z
     * @hash   -804521605
     */
    MCAPI CameraPacket(struct ActorUniqueID, struct ActorUniqueID);

};