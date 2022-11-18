// Object: VectorShapeData
// ClassId: 1655
// RuntimeId: 56845
// TypeInfo: 0x0000000144EE37D0
#include "../Entity/BaseShapeData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class VectorShapeData : public Entity::BaseShapeData {
        Array<Core::Vec3> Points; // 0x20
        Float32 Tension; // 0x28
        Boolean IsClosed; // 0x2C
        Boolean AllowRoll; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(VectorShapeData) == 0x30);
}
#pragma pack(pop)