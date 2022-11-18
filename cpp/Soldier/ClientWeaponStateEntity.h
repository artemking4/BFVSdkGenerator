// Object: ClientWeaponStateEntity
// ClassId: 7056
// RuntimeId: 20579
// TypeInfo: 0x0000000144F34FA0
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientWeaponStateEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ClientWeaponStateEntity) == 0x100);
}