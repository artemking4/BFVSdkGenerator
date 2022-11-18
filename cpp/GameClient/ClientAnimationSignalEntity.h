// Object: ClientAnimationSignalEntity
// ClassId: 6327
// RuntimeId: 16460
// TypeInfo: 0x0000000144E3E2F0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientAnimationSignalEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientAnimationSignalEntity) == 0xC0);
}