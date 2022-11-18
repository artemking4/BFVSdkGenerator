// Object: LineTriangleProperties
// ClassId: 4615
// RuntimeId: 56666
// TypeInfo: 0x0000000144DA7220
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class LineTriangleProperties : public DiceCommons::ShapeProperties {
        char pad_0x18[0x8];
        Core::Vec3 Pos1; // 0x20
        Core::Vec3 Pos2; // 0x30
        Core::Vec3 Pos3; // 0x40
    }; // 0x50
    static_assert(sizeof(LineTriangleProperties) == 0x50);
}
#pragma pack(pop)