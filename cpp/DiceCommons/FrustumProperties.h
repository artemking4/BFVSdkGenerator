// Object: FrustumProperties
// ClassId: 4609
// RuntimeId: 26041
// TypeInfo: 0x0000000144DA72A0
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class FrustumProperties : public DiceCommons::ShapeProperties {
        Float32 Fov; // 0x18
        char pad_0x1C[0x4];
        Core::LinearTransform Transform; // 0x20
    }; // 0x60
    static_assert(sizeof(FrustumProperties) == 0x60);
}
#pragma pack(pop)