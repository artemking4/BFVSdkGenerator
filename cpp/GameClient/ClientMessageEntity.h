// Object: ClientMessageEntity
// ClassId: 6751
// RuntimeId: 1973
// TypeInfo: 0x0000000144E3C860
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientMessageEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientMessageEntity) == 0x38);
}