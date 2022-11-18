// Object: ClientWeaponTransformProviderEntity
// ClassId: 7058
// RuntimeId: 47255
// TypeInfo: 0x0000000144F754A0
#include "../Entity/Entity.h"

namespace Weapon {
    class ClientWeaponTransformProviderEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientWeaponTransformProviderEntity) == 0xA0);
}