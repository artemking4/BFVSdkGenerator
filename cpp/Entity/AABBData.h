// Object: AABBData
// ClassId: 1651
// RuntimeId: 31040
// TypeInfo: 0x0000000144EE38D0
#include "../Entity/BaseShapeData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Entity {
    class AABBData : public Entity::BaseShapeData {
        Core::Vec3 Position; // 0x20
        Core::Vec3 HalfExtents; // 0x30
    }; // 0x40
    static_assert(sizeof(AABBData) == 0x40);
}
#pragma pack(pop)