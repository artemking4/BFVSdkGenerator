// Object: LineRectangle2DProperties
// ClassId: 4614
// RuntimeId: 46904
// TypeInfo: 0x0000000144DA6FA0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace DiceCommons {
    class LineRectangle2DProperties : public DiceCommons::ShapeProperties {
        Core::Vec2 MinPos; // 0x18
        Core::Vec2 MaxPos; // 0x20
    }; // 0x28
    static_assert(sizeof(LineRectangle2DProperties) == 0x28);
}
#pragma pack(pop)