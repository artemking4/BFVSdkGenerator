// Object: WaterDepthEntity
// ClassId: 8054
// RuntimeId: 46880
// TypeInfo: 0x0000000144E4F220
#include "../Entity/SpatialEntity.h"

namespace GameCommon {
    class WaterDepthEntity : public Entity::SpatialEntity {
        char pad_0x30[0x30];
    }; // 0x60
    static_assert(sizeof(WaterDepthEntity) == 0x60);
}