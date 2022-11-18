// Object: ClientBFUIEquipWeaponEntity
// ClassId: 6391
// RuntimeId: 14515
// TypeInfo: 0x0000000144CAA850
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipWeaponEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIEquipWeaponEntity) == 0x40);
}