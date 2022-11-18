// Object: ClientLocalPlayerFilterEntity
// ClassId: 6742
// RuntimeId: 11203
// TypeInfo: 0x0000000144E3C420
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientLocalPlayerFilterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientLocalPlayerFilterEntity) == 0x38);
}