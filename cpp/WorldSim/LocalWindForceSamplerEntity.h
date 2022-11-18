// Object: LocalWindForceSamplerEntity
// ClassId: 7995
// RuntimeId: 53126
// TypeInfo: 0x0000000144EC40A0
#include "../Entity/SpatialEntity.h"

namespace WorldSim {
    class LocalWindForceSamplerEntity : public Entity::SpatialEntity {
        char pad_0x30[0xD0];
    }; // 0x100
    static_assert(sizeof(LocalWindForceSamplerEntity) == 0x100);
}