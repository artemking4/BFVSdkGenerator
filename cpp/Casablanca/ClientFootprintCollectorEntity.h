// Object: ClientFootprintCollectorEntity
// ClassId: 6713
// RuntimeId: 58796
// TypeInfo: 0x0000000144C223D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFootprintCollectorEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ClientFootprintCollectorEntity) == 0xB8);
}