// Object: ServerAddSoldierWeaponUnlocksEntity
// ClassId: 7428
// RuntimeId: 23987
// TypeInfo: 0x0000000144F30A70
#include "../Entity/Entity.h"

namespace Soldier {
    class ServerAddSoldierWeaponUnlocksEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ServerAddSoldierWeaponUnlocksEntity) == 0x58);
}