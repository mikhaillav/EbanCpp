/**
 * @file  SerializedSkin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SerializedSkin.
 *
 */
class SerializedSkin {

#define AFTER_EXTRA
// Add Member There
    char filler[620];
#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0SerializedSkin@@QEAA@AEBVSubClientConnectionRequest@@@Z
     * @hash   913027254
     */
    MCAPI SerializedSkin(class SubClientConnectionRequest const &);
    /**
     * @symbol ??0SerializedSkin@@QEAA@AEBVConnectionRequest@@@Z
     * @hash   -2095002106
     */
    MCAPI SerializedSkin(class ConnectionRequest const &);
    /**
     * @symbol ??0SerializedSkin@@QEAA@AEBV0@@Z
     * @hash   -986991487
     */
    MCAPI SerializedSkin(class SerializedSkin const &);
    /**
     * @symbol ??0SerializedSkin@@QEAA@$$QEAV0@@Z
     * @hash   -1599727893
     */
    MCAPI SerializedSkin(class SerializedSkin &&);
    /**
     * @symbol ??0SerializedSkin@@QEAA@XZ
     * @hash   -658791731
     */
    MCAPI SerializedSkin();
    /**
     * @symbol ?getAnimationFrames@SerializedSkin@@QEBAMW4AnimatedTextureType@persona@@@Z
     * @hash   -2099915711
     */
    MCAPI float getAnimationFrames(enum class persona::AnimatedTextureType) const;
    /**
     * @symbol ?getName@SerializedSkin@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1382514676
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?isTrustedSkin@SerializedSkin@@QEBA_NXZ
     * @hash   639640866
     */
    MCAPI bool isTrustedSkin() const;
    /**
     * @symbol ??4SerializedSkin@@QEAAAEAV0@AEBV0@@Z
     * @hash   754145060
     */
    MCAPI class SerializedSkin & operator=(class SerializedSkin const &);
    /**
     * @symbol ?read@SerializedSkin@@QEAA_NAEAVReadOnlyBinaryStream@@@Z
     * @hash   -1725159141
     */
    MCAPI bool read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?setIsTrustedSkin@SerializedSkin@@QEAAX_N@Z
     * @hash   1803564848
     */
    MCAPI void setIsTrustedSkin(bool);
    /**
     * @symbol ?updateGeometryName@SerializedSkin@@QEAAXXZ
     * @hash   -809230475
     */
    MCAPI void updateGeometryName();
    /**
     * @symbol ?useBlinkingAnimation@SerializedSkin@@QEBA_NXZ
     * @hash   1313479242
     */
    MCAPI bool useBlinkingAnimation() const;
    /**
     * @symbol ?write@SerializedSkin@@QEBAXAEAVBinaryStream@@@Z
     * @hash   391280826
     */
    MCAPI void write(class BinaryStream &) const;
    /**
     * @symbol ??1SerializedSkin@@QEAA@XZ
     * @hash   -8256661
     */
    MCAPI ~SerializedSkin();
    /**
     * @symbol ?createTrustedDefaultSerializedSkin@SerializedSkin@@SA?AV1@XZ
     * @hash   1032541024
     */
    MCAPI static class SerializedSkin createTrustedDefaultSerializedSkin();
    /**
     * @symbol ?isSkinDisabled@SerializedSkin@@SA_NAEBV1@AEBVLevelData@@@Z
     * @hash   -1582488320
     */
    MCAPI static bool isSkinDisabled(class SerializedSkin const &, class LevelData const &);

};