// Object: InterpolationManagerSettings
// ClassId: 4199
// RuntimeId: 6032
// TypeInfo: 0x0000000144EA4F90
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Network {
    class InterpolationManagerSettings : public Core::DataContainer {
        Float32 TimeNudgePIDConstKPos; // 0x18
        Float32 TimeNudgePIDConstKNeg; // 0x1C
        Float32 TimeNudgePIDConstTIPos; // 0x20
        Float32 TimeNudgePIDConstTINeg; // 0x24
        Float32 TimeNudgePIDConstTDPos; // 0x28
        Float32 TimeNudgePIDConstTDNeg; // 0x2C
        Float32 TimeNudgePIDMaxChangePerSec; // 0x30
        Float32 PIDMissingPacketTime; // 0x34
        Float32 PIDMissingPacketCorrTimer; // 0x38
        Int32 AveragePacketSampleCount; // 0x3C
        Float32 InterpolationBias; // 0x40
        Boolean UseWeightedDeviation; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(InterpolationManagerSettings) == 0x48);
}
#pragma pack(pop)