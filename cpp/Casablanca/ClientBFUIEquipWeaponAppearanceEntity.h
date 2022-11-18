// Object: ClientBFUIEquipWeaponAppearanceEntity
// ClassId: 6389
// RuntimeId: 46709
// TypeInfo: 0x0000000144CAAA70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipWeaponAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIEquipWeaponAppearanceEntity) == 0x48);
}