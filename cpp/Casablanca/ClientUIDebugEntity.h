// Object: ClientUIDebugEntity
// ClassId: 6934
// RuntimeId: 34128
// TypeInfo: 0x0000000144CB0B00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDebugEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientUIDebugEntity) == 0x78);
}