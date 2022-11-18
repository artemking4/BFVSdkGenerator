// Object: PointProperties
// ClassId: 4616
// RuntimeId: 18667
// TypeInfo: 0x0000000144DA7820
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class PointProperties : public DiceCommons::ShapeProperties {
        Float32 Size; // 0x18
        char pad_0x1C[0x4];
        Core::Vec3 Pos; // 0x20
    }; // 0x30
    static_assert(sizeof(PointProperties) == 0x30);
}
#pragma pack(pop)