// Object: RotationTransformModifierData
// ClassId: 5236
// RuntimeId: 64232
// TypeInfo: 0x0000000144DBEA30
#include "../DiceCommonsShared/TransformModifierData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class RotationTransformModifierData : public DiceCommonsShared::TransformModifierData {
        Float32 RadiansPerSecond; // 0x30
        Float32 DegreesPerSecond; // 0x34
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(RotationTransformModifierData) == 0x40);
}
#pragma pack(pop)