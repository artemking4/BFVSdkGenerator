// Object: ServerWeaponTransformProviderEntity
// ClassId: 7794
// RuntimeId: 35645
// TypeInfo: 0x0000000144F74A40
#include "../Entity/Entity.h"

namespace Weapon {
    class ServerWeaponTransformProviderEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ServerWeaponTransformProviderEntity) == 0xA0);
}