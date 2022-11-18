// Object: CoordinateSystemProperties
// ClassId: 4607
// RuntimeId: 2638
// TypeInfo: 0x0000000144DA7320
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class CoordinateSystemProperties : public DiceCommons::ShapeProperties {
        char pad_0x18[0x8];
        Core::LinearTransform Transform; // 0x20
    }; // 0x60
    static_assert(sizeof(CoordinateSystemProperties) == 0x60);
}
#pragma pack(pop)