// Object: FogVolumeEntity
// ClassId: 7986
// RuntimeId: 35336
// TypeInfo: 0x0000000144EC8E00
#include "../Entity/SpatialEntity.h"

namespace WorldSim {
    class FogVolumeEntity : public Entity::SpatialEntity {
        char pad_0x30[0xA0];
    }; // 0xD0
    static_assert(sizeof(FogVolumeEntity) == 0xD0);
}