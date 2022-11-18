// Object: ClientExplosionEntity
// ClassId: 6693
// RuntimeId: 11764
// TypeInfo: 0x0000000144E3A060
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientExplosionEntity : public Entity::Entity {
        char pad_0x20[0x2F0];
    }; // 0x310
    static_assert(sizeof(ClientExplosionEntity) == 0x310);
}