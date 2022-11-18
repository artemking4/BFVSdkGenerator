// Object: ClientLocalPlayerEventEntity
// ClassId: 6741
// RuntimeId: 42411
// TypeInfo: 0x0000000144E34A80
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientLocalPlayerEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientLocalPlayerEventEntity) == 0x38);
}