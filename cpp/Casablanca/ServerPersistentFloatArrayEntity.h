// Object: ServerPersistentFloatArrayEntity
// ClassId: 7649
// RuntimeId: 7233
// TypeInfo: 0x0000000144CEBC10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistentFloatArrayEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ServerPersistentFloatArrayEntity) == 0x80);
}