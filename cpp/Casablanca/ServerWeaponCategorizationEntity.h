// Object: ServerWeaponCategorizationEntity
// ClassId: 7791
// RuntimeId: 13788
// TypeInfo: 0x0000000144CEFCF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerWeaponCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerWeaponCategorizationEntity) == 0x48);
}