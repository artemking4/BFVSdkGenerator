// Object: ClientBFUIEquipWeaponAppearanceSetEntity
// ClassId: 6390
// RuntimeId: 14718
// TypeInfo: 0x0000000144CAA960
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipWeaponAppearanceSetEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIEquipWeaponAppearanceSetEntity) == 0x40);
}