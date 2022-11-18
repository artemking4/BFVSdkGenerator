// Object: Rectangle2DProperties
// ClassId: 4618
// RuntimeId: 37599
// TypeInfo: 0x0000000144DA7020
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec2.h"

#pragma pack(push, 8)
namespace DiceCommons {
    class Rectangle2DProperties : public DiceCommons::ShapeProperties {
        Core::Vec2 MinPos; // 0x18
        Core::Vec2 MaxPos; // 0x20
    }; // 0x28
    static_assert(sizeof(Rectangle2DProperties) == 0x28);
}
#pragma pack(pop)