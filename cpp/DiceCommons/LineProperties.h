// Object: LineProperties
// ClassId: 4613
// RuntimeId: 60356
// TypeInfo: 0x0000000144DA77A0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class LineProperties : public DiceCommons::ShapeProperties {
        char pad_0x18[0x8];
        Core::Vec3 Pos1; // 0x20
        Core::Vec3 Pos2; // 0x30
    }; // 0x40
    static_assert(sizeof(LineProperties) == 0x40);
}
#pragma pack(pop)