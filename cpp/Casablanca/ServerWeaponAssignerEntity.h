// Object: ServerWeaponAssignerEntity
// ClassId: 7790
// RuntimeId: 3750
// TypeInfo: 0x0000000144CE1AC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerWeaponAssignerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerWeaponAssignerEntity) == 0x68);
}