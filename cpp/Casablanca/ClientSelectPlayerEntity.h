// Object: ClientSelectPlayerEntity
// ClassId: 6850
// RuntimeId: 15556
// TypeInfo: 0x0000000144CD7EF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSelectPlayerEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientSelectPlayerEntity) == 0x78);
}