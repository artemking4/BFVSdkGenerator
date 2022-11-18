// Object: ServerWeaponStateEntity
// ClassId: 7792
// RuntimeId: 51189
// TypeInfo: 0x0000000144F30630
#include "../Entity/Entity.h"

namespace Soldier {
    class ServerWeaponStateEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ServerWeaponStateEntity) == 0xD0);
}