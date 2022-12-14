/**
 * @file  RakWebSocket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakWebSocket.
 *
 */
class RakWebSocket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKET
public:
    class RakWebSocket& operator=(class RakWebSocket const &) = delete;
    RakWebSocket(class RakWebSocket const &) = delete;
    RakWebSocket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1842135051
     */
    virtual ~RakWebSocket();
    /**
     * @vftbl  1
     * @symbol ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     * @hash   1831464844
     */
    virtual enum class WSConnectionResult connect(std::string const &, std::vector<std::string> const &);
    /**
     * @vftbl  2
     * @symbol ?connect@RakWebSocket@@UEAA?AW4WSConnectionResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1410677315
     */
    virtual enum class WSConnectionResult connect(std::string const &);
    /**
     * @vftbl  3
     * @symbol ?isReady@RakWebSocket@@UEBA_NXZ
     * @hash   -2102570074
     */
    virtual bool isReady() const;
    /**
     * @vftbl  4
     * @symbol ?setOnMessageReceivedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBVRakWebSocketDataFrame@@@Z@std@@@Z
     * @hash   -409919231
     */
    virtual void setOnMessageReceivedHandler(class std::function<void (class RakWebSocketDataFrame const &)> const &);
    /**
     * @vftbl  5
     * @symbol ?setOnCloseHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXW4CloseStatusCode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     * @hash   807536830
     */
    virtual void setOnCloseHandler(class std::function<void (enum class CloseStatusCode, std::string const &)> const &);
    /**
     * @vftbl  6
     * @symbol ?setOnConnectedHandler@RakWebSocket@@UEAAXAEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     * @hash   801770851
     */
    virtual void setOnConnectedHandler(class std::function<void (std::string const &)> const &);
    /**
     * @vftbl  7
     * @symbol ?tick@RakWebSocket@@UEAAXXZ
     * @hash   -200258375
     */
    virtual void tick();
    /**
     * @vftbl  8
     * @symbol ?_updateState@RakWebSocketClient@@MEAAXXZ
     * @hash   -400294103
     */
    virtual void _updateState() = 0;
    /**
     * @vftbl  9
     * @symbol ?_genMaskingKey@RakWebSocketClient@@MEBAIXZ
     * @hash   1983950249
     */
    virtual unsigned int _genMaskingKey() const = 0;
    /**
     * @symbol ??0RakWebSocket@@QEAA@V?$unique_ptr@VTcpProxy@@U?$default_delete@VTcpProxy@@@std@@@std@@_N@Z
     * @hash   1175345873
     */
    MCAPI RakWebSocket(std::unique_ptr<class TcpProxy>, bool);
    /**
     * @symbol ?close@RakWebSocket@@QEAAX_N0@Z
     * @hash   853919534
     */
    MCAPI void close(bool, bool);
    /**
     * @symbol ?getUri@RakWebSocket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1370917998
     */
    MCAPI std::string getUri() const;
    /**
     * @symbol ?isDisconnected@RakWebSocket@@QEBA_NXZ
     * @hash   -345805390
     */
    MCAPI bool isDisconnected() const;
    /**
     * @symbol ?send@RakWebSocket@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   840584697
     */
    MCAPI bool send(std::string const &);
    /**
     * @symbol ?sendBinary@RakWebSocket@@QEAA_NPEBE_K@Z
     * @hash   562661310
     */
    MCAPI bool sendBinary(unsigned char const *, unsigned __int64);

//protected:
    /**
     * @symbol ?_close@RakWebSocket@@IEAAXW4CloseStatusCode@@@Z
     * @hash   -1749586302
     */
    MCAPI void _close(enum class CloseStatusCode);
    /**
     * @symbol ?_createWebSocketKey@RakWebSocket@@IEAAXXZ
     * @hash   1929040379
     */
    MCAPI void _createWebSocketKey();
    /**
     * @symbol ?_fail@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CloseStatusCode@@@Z
     * @hash   -1112394996
     */
    MCAPI void _fail(std::string const &, enum class CloseStatusCode);
    /**
     * @symbol ?_generateBase64SHA1Key@RakWebSocket@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   1773026529
     */
    MCAPI std::string _generateBase64SHA1Key(std::string const &);
    /**
     * @symbol ?_invokeOnCloseHandler@RakWebSocket@@IEAAXXZ
     * @hash   -1460783248
     */
    MCAPI void _invokeOnCloseHandler();
    /**
     * @symbol ?_processClosingFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   -359103011
     */
    MCAPI void _processClosingFrames(class RakNet::BitStream &);
    /**
     * @symbol ?_processClosingHandshake@RakWebSocket@@IEAAX_N@Z
     * @hash   356226010
     */
    MCAPI void _processClosingHandshake(bool);
    /**
     * @symbol ?_processDataFrames@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   1633597000
     */
    MCAPI void _processDataFrames(class RakNet::BitStream &);
    /**
     * @symbol ?_processOpenHandshakePackets@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   1677345978
     */
    MCAPI void _processOpenHandshakePackets(class RakNet::BitStream &);
    /**
     * @symbol ?_processPacket@RakWebSocket@@IEAA_NAEBV?$function@$$A6AXAEAVBitStream@RakNet@@@Z@std@@_N@Z
     * @hash   -1770215545
     */
    MCAPI bool _processPacket(class std::function<void (class RakNet::BitStream &)> const &, bool);
    /**
     * @symbol ?_reset@RakWebSocket@@IEAAXXZ
     * @hash   -214368632
     */
    MCAPI void _reset();
    /**
     * @symbol ?_sendControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
     * @hash   1387021829
     */
    MCAPI bool _sendControlFrame(unsigned char const *, unsigned __int64, enum class OpCode);
    /**
     * @symbol ?_sendDataFrame@RakWebSocket@@IEAA_NPEBEIW4OpCode@@_N@Z
     * @hash   -1736757390
     */
    MCAPI bool _sendDataFrame(unsigned char const *, unsigned int, enum class OpCode, bool);
    /**
     * @symbol ?_sendNonControlFrame@RakWebSocket@@IEAA_NPEBE_KW4OpCode@@@Z
     * @hash   -865226346
     */
    MCAPI bool _sendNonControlFrame(unsigned char const *, unsigned __int64, enum class OpCode);
    /**
     * @symbol ?_splitWebSocketURI@RakWebSocket@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@11@Z
     * @hash   761955547
     */
    MCAPI void _splitWebSocketURI(std::string const &, std::string &, std::string &, std::string &);
    /**
     * @symbol ?_subProcessHttpResponse@RakWebSocket@@IEAAXAEAVBitStream@RakNet@@@Z
     * @hash   455851361
     */
    MCAPI void _subProcessHttpResponse(class RakNet::BitStream &);
    /**
     * @symbol ?_validateFields@RakWebSocket@@IEAAXXZ
     * @hash   -1990790618
     */
    MCAPI void _validateFields();
    /**
     * @symbol ?_validateWebSocketURI@RakWebSocket@@IEAA_NXZ
     * @hash   776277020
     */
    MCAPI bool _validateWebSocketURI();

protected:

};