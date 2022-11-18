// Object: GearboxConfigData
// ClassId: 4086
// RuntimeId: 2926
// TypeInfo: 0x0000000144E9B310
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class GearboxConfigData : public Core::DataContainer {
        Array<Float32> ForwardGearRatios; // 0x18
        Array<Float32> ForwardGearSpeeds; // 0x20
        Array<Float32> ReverseGearRatios; // 0x28
        Array<Float32> ReverseGearSpeeds; // 0x30
        Int32 GearboxType; // 0x38
        Float32 GearChangeTime; // 0x3C
        Float32 GearDownSpeedFactor; // 0x40
        Float32 OppositeDirGearChangeMaxSpeed; // 0x44
        Float32 OppositeDirGearChangeTime; // 0x48
        Float32 TransmissionEfficiency; // 0x4C
        Boolean UseAutoClutch; // 0x50
        Boolean UseNeutralGear; // 0x51
        char pad_0x52[0x6];
    }; // 0x58
    static_assert(sizeof(GearboxConfigData) == 0x58);
}
#pragma pack(pop)