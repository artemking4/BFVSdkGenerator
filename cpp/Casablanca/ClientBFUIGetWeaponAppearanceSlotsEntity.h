// Object: ClientBFUIGetWeaponAppearanceSlotsEntity
// ClassId: 6474
// RuntimeId: 6682
// TypeInfo: 0x0000000144CC3130
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetWeaponAppearanceSlotsEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientBFUIGetWeaponAppearanceSlotsEntity) == 0xB0);
}