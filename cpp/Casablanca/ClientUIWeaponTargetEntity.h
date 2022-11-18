// Object: ClientUIWeaponTargetEntity
// ClassId: 7027
// RuntimeId: 26068
// TypeInfo: 0x0000000144CB6D20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIWeaponTargetEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientUIWeaponTargetEntity) == 0x70);
}