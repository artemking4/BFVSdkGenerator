// Object: BFBuildSettingsEntity
// ClassId: 6195
// RuntimeId: 11639
// TypeInfo: 0x0000000144C962F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFBuildSettingsEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(BFBuildSettingsEntity) == 0x58);
}