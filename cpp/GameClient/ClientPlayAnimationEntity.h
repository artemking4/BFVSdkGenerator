// Object: ClientPlayAnimationEntity
// ClassId: 6789
// RuntimeId: 27227
// TypeInfo: 0x0000000144E3F9B0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientPlayAnimationEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientPlayAnimationEntity) == 0x90);
}