// Object: ServerShrinkingPlayAreaWeight
// ClassId: 8036
// RuntimeId: 12485
// TypeInfo: 0x0000000144C5E030
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerShrinkingPlayAreaWeight : public Entity::SpatialEntity {
        char pad_0x30[0x30];
    }; // 0x60
    static_assert(sizeof(ServerShrinkingPlayAreaWeight) == 0x60);
}