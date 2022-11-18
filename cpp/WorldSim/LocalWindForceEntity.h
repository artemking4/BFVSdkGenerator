// Object: LocalWindForceEntity
// ClassId: 7991
// RuntimeId: 64581
// TypeInfo: 0x0000000144EC8140
#include "../Entity/SpatialEntity.h"

namespace WorldSim {
    class LocalWindForceEntity : public Entity::SpatialEntity {
        char pad_0x30[0xC0];
    }; // 0xF0
    static_assert(sizeof(LocalWindForceEntity) == 0xF0);
}