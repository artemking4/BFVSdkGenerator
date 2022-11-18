// Object: SpartaFeatureFlagsEntity
// ClassId: 7826
// RuntimeId: 55989
// TypeInfo: 0x0000000144C57220
#include "../Entity/Entity.h"

namespace Casablanca {
    class SpartaFeatureFlagsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(SpartaFeatureFlagsEntity) == 0x30);
}