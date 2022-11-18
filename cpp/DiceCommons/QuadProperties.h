// Object: QuadProperties
// ClassId: 4617
// RuntimeId: 27578
// TypeInfo: 0x0000000144DA76A0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class QuadProperties : public DiceCommons::ShapeProperties {
        char pad_0x18[0x8];
        Core::Vec3 Pos1; // 0x20
        Core::Vec3 Pos2; // 0x30
        Core::Vec3 Pos3; // 0x40
        Core::Vec3 Pos4; // 0x50
    }; // 0x60
    static_assert(sizeof(QuadProperties) == 0x60);
}
#pragma pack(pop)