// Object: ClientBFUIGetWeaponAppearanceSetStatusEntity
// ClassId: 6473
// RuntimeId: 8422
// TypeInfo: 0x0000000144CC3350
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetWeaponAppearanceSetStatusEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientBFUIGetWeaponAppearanceSetStatusEntity) == 0x88);
}