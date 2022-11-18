// Object: ClientWarpAnimationEntity
// ClassId: 7053
// RuntimeId: 15532
// TypeInfo: 0x0000000144E36880
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientWarpAnimationEntity : public Entity::Entity {
        char pad_0x20[0x1E0];
    }; // 0x200
    static_assert(sizeof(ClientWarpAnimationEntity) == 0x200);
}