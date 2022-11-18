// Object: ServerSoldierLinkEntity
// ClassId: 7714
// RuntimeId: 62516
// TypeInfo: 0x0000000144CE0440
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSoldierLinkEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerSoldierLinkEntity) == 0x38);
}