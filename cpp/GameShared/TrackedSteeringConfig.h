// Object: TrackedSteeringConfig
// ClassId: 5232
// RuntimeId: 51434
// TypeInfo: 0x0000000144E9B010
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class TrackedSteeringConfig : public Core::DataContainer {
        Float32 YawAsThrottleScale; // 0x18
        Float32 BrakeFactor; // 0x1C
        Float32 ScaleDownBrakeByThrottle; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TrackedSteeringConfig) == 0x28);
}
#pragma pack(pop)