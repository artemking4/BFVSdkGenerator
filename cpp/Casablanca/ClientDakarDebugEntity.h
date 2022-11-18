// Object: ClientDakarDebugEntity
// ClassId: 6654
// RuntimeId: 43359
// TypeInfo: 0x0000000144C88F80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarDebugEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientDakarDebugEntity) == 0x50);
}