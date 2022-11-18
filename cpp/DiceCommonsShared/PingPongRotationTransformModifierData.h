// Object: PingPongRotationTransformModifierData
// ClassId: 5235
// RuntimeId: 33538
// TypeInfo: 0x0000000144DBE9B0
#include "../DiceCommonsShared/TransformModifierData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class PingPongRotationTransformModifierData : public DiceCommonsShared::TransformModifierData {
        Float32 MinAngleInRadians; // 0x30
        Float32 MaxAngleInRadians; // 0x34
        Float32 MinAngleInDegrees; // 0x38
        Float32 MaxAngleInDegrees; // 0x3C
        Float32 Frequency; // 0x40
        char pad_0x44[0xC];
    }; // 0x50
    static_assert(sizeof(PingPongRotationTransformModifierData) == 0x50);
}
#pragma pack(pop)