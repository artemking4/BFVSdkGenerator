// Object: TriangleProperties
// ClassId: 4621
// RuntimeId: 3166
// TypeInfo: 0x0000000144DA7720
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class TriangleProperties : public DiceCommons::ShapeProperties {
        char pad_0x18[0x8];
        Core::Vec3 Pos1; // 0x20
        Core::Vec3 Pos2; // 0x30
        Core::Vec3 Pos3; // 0x40
    }; // 0x50
    static_assert(sizeof(TriangleProperties) == 0x50);
}
#pragma pack(pop)