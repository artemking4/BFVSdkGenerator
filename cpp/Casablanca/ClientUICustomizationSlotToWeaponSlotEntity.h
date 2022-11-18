// Object: ClientUICustomizationSlotToWeaponSlotEntity
// ClassId: 6929
// RuntimeId: 62743
// TypeInfo: 0x0000000144C58C00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUICustomizationSlotToWeaponSlotEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUICustomizationSlotToWeaponSlotEntity) == 0x40);
}