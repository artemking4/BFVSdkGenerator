// Object: Triangle2DProperties
// ClassId: 4620
// RuntimeId: 28160
// TypeInfo: 0x0000000144DA70A0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace DiceCommons {
    class Triangle2DProperties : public DiceCommons::ShapeProperties {
        Core::Vec2 Pos1; // 0x18
        Core::Vec2 Pos2; // 0x20
        Core::Vec2 Pos3; // 0x28
    }; // 0x30
    static_assert(sizeof(Triangle2DProperties) == 0x30);
}
#pragma pack(pop)