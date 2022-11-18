// Object: ClientBFUIGetWeaponLoadoutEntity
// ClassId: 6477
// RuntimeId: 58352
// TypeInfo: 0x0000000144CA8EF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetWeaponLoadoutEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientBFUIGetWeaponLoadoutEntity) == 0xD0);
}