// Object: ClientUIGetLoadoutUnlockEntity
// ClassId: 6948
// RuntimeId: 56781
// TypeInfo: 0x0000000144C58AF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGetLoadoutUnlockEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientUIGetLoadoutUnlockEntity) == 0x70);
}