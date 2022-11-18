// Object: RotorParameters
// ClassId: 4578
// RuntimeId: 15759
// TypeInfo: 0x0000000144E9B190
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class RotorParameters : public Core::DataContainer {
        Float32 CyclicInputScaleRoll; // 0x18
        Float32 CyclicInputScalePitch; // 0x1C
        Float32 CollectiveThrottleInputScale; // 0x20
        Float32 CollectiveBrakeInputScale; // 0x24
        Float32 CollectiveInputIdle; // 0x28
        Float32 HorizontalForceModifier; // 0x2C
        Array<Core::Vec2> AngleOfAttack; // 0x30
        Float32 HorisontalMinEffectVelocity; // 0x38
        Float32 HorisontalMinEffectMod; // 0x3C
        Boolean ReverseThrottle; // 0x40
        Boolean EnableHorisontalMinEffect; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(RotorParameters) == 0x48);
}
#pragma pack(pop)