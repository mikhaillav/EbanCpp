/**
 * @file  RakTcpProxy.hpp
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
 * @brief MC class RakTcpProxy.
 *
 */
class RakTcpProxy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKTCPPROXY
public:
    class RakTcpProxy& operator=(class RakTcpProxy const &) = delete;
    RakTcpProxy(class RakTcpProxy const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   67089431
     */
    virtual ~RakTcpProxy();
    /**
     * @vftbl  1
     * @symbol ?start@RakTcpProxy@@UEAA_NGGG@Z
     * @hash   -2084028133
     */
    virtual bool start(unsigned short, unsigned short, unsigned short);
    /**
     * @vftbl  2
     * @symbol ?connect@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
     * @hash   -1190708495
     */
    virtual struct RakNet::SystemAddress connect(std::string const &, unsigned short);
    /**
     * @vftbl  3
     * @symbol ?send@RakTcpProxy@@UEAAXPEBDIUSystemAddress@RakNet@@@Z
     * @hash   155827297
     */
    virtual void send(char const *, unsigned int, struct RakNet::SystemAddress);
    /**
     * @vftbl  4
     * @symbol ?close@RakTcpProxy@@UEAAXUSystemAddress@RakNet@@@Z
     * @hash   1482732700
     */
    virtual void close(struct RakNet::SystemAddress);
    /**
     * @vftbl  5
     * @symbol ?packetsAvailable@RakTcpProxy@@UEAA_NXZ
     * @hash   -1549397282
     */
    virtual bool packetsAvailable();
    /**
     * @vftbl  6
     * @symbol ?nextPacket@RakTcpProxy@@UEAAPEAUPacket@RakNet@@XZ
     * @hash   -1523400757
     */
    virtual struct RakNet::Packet * nextPacket();
    /**
     * @vftbl  7
     * @symbol ?deallocatePacket@RakTcpProxy@@UEAAXPEAUPacket@RakNet@@@Z
     * @hash   1584101448
     */
    virtual void deallocatePacket(struct RakNet::Packet *);
    /**
     * @vftbl  8
     * @symbol ?nextCompletedConnectionAttempt@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ
     * @hash   -954036627
     */
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt();
    /**
     * @vftbl  9
     * @symbol ?nextFailedConnectionAttempt@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ
     * @hash   415226037
     */
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt();
    /**
     * @vftbl  10
     * @symbol ?nextLostConnection@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ
     * @hash   -1382428597
     */
    virtual struct RakNet::SystemAddress nextLostConnection();
    /**
     * @symbol ??0RakTcpProxy@@QEAA@XZ
     * @hash   300261317
     */
    MCAPI RakTcpProxy();

};