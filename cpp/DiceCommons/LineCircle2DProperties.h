// Object: LineCircle2DProperties
// ClassId: 4612
// RuntimeId: 23320
// TypeInfo: 0x0000000144DA6EA0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommons {
    class LineCircle2DProperties : public DiceCommons::ShapeProperties {
        Core::Vec2 Pos; // 0x18
        Float32 Radius; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(LineCircle2DProperties) == 0x28);
}
#pragma pack(pop)