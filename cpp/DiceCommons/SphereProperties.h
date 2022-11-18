// Object: SphereProperties
// ClassId: 4619
// RuntimeId: 24228
// TypeInfo: 0x0000000144DA75A0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class SphereProperties : public DiceCommons::ShapeProperties {
        Float32 Radius; // 0x18
        char pad_0x1C[0x4];
        Core::Vec3 Pos; // 0x20
    }; // 0x30
    static_assert(sizeof(SphereProperties) == 0x30);
}
#pragma pack(pop)