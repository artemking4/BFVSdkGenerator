// Object: Line2DProperties
// ClassId: 4610
// RuntimeId: 28379
// TypeInfo: 0x0000000144DA7120
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace DiceCommons {
    class Line2DProperties : public DiceCommons::ShapeProperties {
        Core::Vec2 Pos1; // 0x18
        Core::Vec2 Pos2; // 0x20
    }; // 0x28
    static_assert(sizeof(Line2DProperties) == 0x28);
}
#pragma pack(pop)