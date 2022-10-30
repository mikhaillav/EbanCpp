/**
 * @file  ScriptMessagePacket.hpp
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
 * @brief MC class ScriptMessagePacket.
 *
 */
class ScriptMessagePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMESSAGEPACKET
public:
    class ScriptMessagePacket& operator=(class ScriptMessagePacket const &) = delete;
    ScriptMessagePacket(class ScriptMessagePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   757589426
     */
    virtual ~ScriptMessagePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ScriptMessagePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1496524294
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ScriptMessagePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1222774967
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ScriptMessagePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   631519408
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ScriptMessagePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -658671264
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ScriptMessagePacket@@QEAA@XZ
     * @hash   -905387664
     */
    MCAPI ScriptMessagePacket();
    /**
     * @symbol ??0ScriptMessagePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   -1845168361
     */
    MCAPI ScriptMessagePacket(std::string const &, std::string const &);
    /**
     * @symbol ?getMessageId@ScriptMessagePacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -293204540
     */
    MCAPI std::string const & getMessageId() const;
    /**
     * @symbol ?getMessageValue@ScriptMessagePacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1971747534
     */
    MCAPI std::string const & getMessageValue() const;

};