// Object: ClientFootprintConduitEntity
// ClassId: 6714
// RuntimeId: 11871
// TypeInfo: 0x0000000144C222C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFootprintConduitEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientFootprintConduitEntity) == 0xF0);
}