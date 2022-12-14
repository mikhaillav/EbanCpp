/**
 * @file  MapCreateLockedCopyPacket.hpp
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
 * @brief MC class MapCreateLockedCopyPacket.
 *
 */
class MapCreateLockedCopyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPCREATELOCKEDCOPYPACKET
public:
    class MapCreateLockedCopyPacket& operator=(class MapCreateLockedCopyPacket const &) = delete;
    MapCreateLockedCopyPacket(class MapCreateLockedCopyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   150277869
     */
    virtual ~MapCreateLockedCopyPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@MapCreateLockedCopyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1597833935
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@MapCreateLockedCopyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1383162500
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@MapCreateLockedCopyPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   298847787
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@MapCreateLockedCopyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -2137496021
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0MapCreateLockedCopyPacket@@QEAA@XZ
     * @hash   -991816261
     */
    MCAPI MapCreateLockedCopyPacket();
    /**
     * @symbol ??0MapCreateLockedCopyPacket@@QEAA@UActorUniqueID@@0@Z
     * @hash   -1954040487
     */
    MCAPI MapCreateLockedCopyPacket(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @symbol ?getNewMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
     * @hash   -1512218862
     */
    MCAPI struct ActorUniqueID getNewMapId() const;
    /**
     * @symbol ?getOriginalMapId@MapCreateLockedCopyPacket@@QEBA?AUActorUniqueID@@XZ
     * @hash   1760150628
     */
    MCAPI struct ActorUniqueID getOriginalMapId() const;

};