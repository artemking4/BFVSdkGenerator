// Object: ClientBFUIGetPlayerWeaponLoadoutEntity
// ClassId: 6439
// RuntimeId: 29587
// TypeInfo: 0x0000000144CC54D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetPlayerWeaponLoadoutEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientBFUIGetPlayerWeaponLoadoutEntity) == 0x98);
}