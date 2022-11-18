// Object: ClientCameraDistanceLinkEntity
// ClassId: 6616
// RuntimeId: 33003
// TypeInfo: 0x0000000144C9EDE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCameraDistanceLinkEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientCameraDistanceLinkEntity) == 0x78);
}