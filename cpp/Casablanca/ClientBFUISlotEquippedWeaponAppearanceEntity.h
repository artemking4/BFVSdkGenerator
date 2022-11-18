// Object: ClientBFUISlotEquippedWeaponAppearanceEntity
// ClassId: 6574
// RuntimeId: 53038
// TypeInfo: 0x0000000144CC8640
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISlotEquippedWeaponAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUISlotEquippedWeaponAppearanceEntity) == 0x68);
}