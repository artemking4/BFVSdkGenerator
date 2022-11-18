// Object: ClientUIGlobeCameraEntity
// ClassId: 6952
// RuntimeId: 25033
// TypeInfo: 0x0000000144CB2B70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGlobeCameraEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ClientUIGlobeCameraEntity) == 0x100);
}