// Object: LineBoxProperties
// ClassId: 4611
// RuntimeId: 56501
// TypeInfo: 0x0000000144DA71A0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class LineBoxProperties : public DiceCommons::ShapeProperties {
        char pad_0x18[0x8];
        Core::Vec3 Size; // 0x20
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(LineBoxProperties) == 0x70);
}
#pragma pack(pop)