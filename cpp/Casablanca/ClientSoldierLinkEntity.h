// Object: ClientSoldierLinkEntity
// ClassId: 6861
// RuntimeId: 13182
// TypeInfo: 0x0000000144C54990
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSoldierLinkEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientSoldierLinkEntity) == 0x38);
}