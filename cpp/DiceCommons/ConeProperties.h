// Object: ConeProperties
// ClassId: 4606
// RuntimeId: 22010
// TypeInfo: 0x0000000144DA7520
#include "../DiceCommons/ShapeProperties.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class ConeProperties : public DiceCommons::ShapeProperties {
        Float32 Radius; // 0x18
        char pad_0x1C[0x4];
        Core::Vec3 Pos1; // 0x20
        Core::Vec3 Pos2; // 0x30
    }; // 0x40
    static_assert(sizeof(ConeProperties) == 0x40);
}
#pragma pack(pop)