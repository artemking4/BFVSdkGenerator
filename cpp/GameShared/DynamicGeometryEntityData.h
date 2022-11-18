// Object: DynamicGeometryEntityData
// ClassId: 2675
// RuntimeId: 1398
// TypeInfo: 0x0000000144E6DDD0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class DynamicGeometryEntityData : public Entity::EntityData {
        Int32 EndGeometryIndex; // 0x20
        Float32 GeometryInterpolation; // 0x24
        Boolean UseRandomEndGeometry; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(DynamicGeometryEntityData) == 0x30);
}
#pragma pack(pop)