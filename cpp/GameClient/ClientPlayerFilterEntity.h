// Object: ClientPlayerFilterEntity
// ClassId: 6803
// RuntimeId: 60909
// TypeInfo: 0x0000000144E3C530
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientPlayerFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientPlayerFilterEntity) == 0x30);
}