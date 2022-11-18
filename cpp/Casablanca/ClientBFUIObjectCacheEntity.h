// Object: ClientBFUIObjectCacheEntity
// ClassId: 6492
// RuntimeId: 28377
// TypeInfo: 0x0000000144CA8BC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIObjectCacheEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUIObjectCacheEntity) == 0x68);
}