// Object: GroundHeightEntity
// ClassId: 7192
// RuntimeId: 22479
// TypeInfo: 0x0000000144EC8CF0
#include "../Entity/Entity.h"

namespace WorldSim {
    class GroundHeightEntity : public Entity::Entity {
        char pad_0x20[0x2040];
    }; // 0x2060
    static_assert(sizeof(GroundHeightEntity) == 0x2060);
}