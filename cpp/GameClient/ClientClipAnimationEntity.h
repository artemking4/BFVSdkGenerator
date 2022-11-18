// Object: ClientClipAnimationEntity
// ClassId: 7064
// RuntimeId: 47029
// TypeInfo: 0x0000000144E3DDA0
#include "../GameCommon/ClipAnimationEntity.h"

namespace GameClient {
    class ClientClipAnimationEntity : public GameCommon::ClipAnimationEntity {
        char pad_0x48[0x90];
    }; // 0xD8
    static_assert(sizeof(ClientClipAnimationEntity) == 0xD8);
}