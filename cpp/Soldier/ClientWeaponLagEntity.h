// Object: ClientWeaponLagEntity
// ClassId: 7055
// RuntimeId: 43417
// TypeInfo: 0x0000000144F36A70
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientWeaponLagEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientWeaponLagEntity) == 0xE0);
}