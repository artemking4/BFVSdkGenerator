// Object: SimpleVolumetricsEntity
// ClassId: 7814
// RuntimeId: 63963
// TypeInfo: 0x0000000144EC8580
#include "../Entity/Entity.h"

namespace WorldSim {
    class SimpleVolumetricsEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(SimpleVolumetricsEntity) == 0x100);
}