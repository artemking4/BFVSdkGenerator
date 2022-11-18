// Object: AreaProximityEntity
// ClassId: 6188
// RuntimeId: 58179
// TypeInfo: 0x0000000144E4F770
#include "../Entity/Entity.h"

namespace GameCommon {
    class AreaProximityEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(AreaProximityEntity) == 0xB0);
}