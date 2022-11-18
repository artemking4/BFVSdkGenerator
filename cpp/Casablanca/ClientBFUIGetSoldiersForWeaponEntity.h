// Object: ClientBFUIGetSoldiersForWeaponEntity
// ClassId: 6448
// RuntimeId: 43771
// TypeInfo: 0x0000000144CC4010
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSoldiersForWeaponEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientBFUIGetSoldiersForWeaponEntity) == 0x70);
}