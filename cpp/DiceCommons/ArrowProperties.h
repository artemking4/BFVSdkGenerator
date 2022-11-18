// Object: ArrowProperties
// ClassId: 4602
// RuntimeId: 45861
// TypeInfo: 0x0000000144DA73A0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class ArrowProperties : public DiceCommons::ShapeProperties {
        char pad_0x18[0x8];
        Core::Vec3 Pos1; // 0x20
        Core::Vec3 Pos2; // 0x30
        Core::Vec3 Up; // 0x40
    }; // 0x50
    static_assert(sizeof(ArrowProperties) == 0x50);
}
#pragma pack(pop)