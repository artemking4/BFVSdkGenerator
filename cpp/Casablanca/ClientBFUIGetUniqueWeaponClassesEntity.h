// Object: ClientBFUIGetUniqueWeaponClassesEntity
// ClassId: 6462
// RuntimeId: 10226
// TypeInfo: 0x0000000144CC3BD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetUniqueWeaponClassesEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIGetUniqueWeaponClassesEntity) == 0x48);
}