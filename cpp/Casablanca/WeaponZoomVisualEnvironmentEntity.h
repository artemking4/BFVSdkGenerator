// Object: WeaponZoomVisualEnvironmentEntity
// ClassId: 8274
// RuntimeId: 55187
// TypeInfo: 0x0000000144C4B6C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class WeaponZoomVisualEnvironmentEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(WeaponZoomVisualEnvironmentEntity) == 0x50);
}