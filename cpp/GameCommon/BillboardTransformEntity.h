// Object: BillboardTransformEntity
// ClassId: 7841
// RuntimeId: 16703
// TypeInfo: 0x0000000144E4F110
#include "../Entity/SpatialEntity.h"

namespace GameCommon {
    class BillboardTransformEntity : public Entity::SpatialEntity {
        char pad_0x30[0x70];
    }; // 0xA0
    static_assert(sizeof(BillboardTransformEntity) == 0xA0);
}