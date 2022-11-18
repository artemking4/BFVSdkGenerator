// Object: SphereData
// ClassId: 1654
// RuntimeId: 49426
// TypeInfo: 0x0000000144EE3950
#include "../Entity/BaseShapeData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Entity {
    class SphereData : public Entity::BaseShapeData {
        Float32 Radius; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Position; // 0x30
    }; // 0x40
    static_assert(sizeof(SphereData) == 0x40);
}
#pragma pack(pop)