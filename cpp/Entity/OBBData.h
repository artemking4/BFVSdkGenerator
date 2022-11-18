// Object: OBBData
// ClassId: 1652
// RuntimeId: 24418
// TypeInfo: 0x0000000144EE3850
#include "../Entity/BaseShapeData.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Entity {
    class OBBData : public Entity::BaseShapeData {
        Core::LinearTransform Transform; // 0x20
        Core::Vec3 HalfExtents; // 0x60
    }; // 0x70
    static_assert(sizeof(OBBData) == 0x70);
}
#pragma pack(pop)