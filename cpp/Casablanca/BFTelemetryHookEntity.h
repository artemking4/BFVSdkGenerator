// Object: BFTelemetryHookEntity
// ClassId: 6245
// RuntimeId: 43059
// TypeInfo: 0x0000000144C408B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFTelemetryHookEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(BFTelemetryHookEntity) == 0x30);
}