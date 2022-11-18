// Object: EngineConfigData
// ClassId: 1553
// RuntimeId: 49423
// TypeInfo: 0x0000000144E9B290
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Global/Boolean.h"
#include "../GameShared/Boost.h"
#include "../GameShared/EngineType.h"

#pragma pack(push, 16)
namespace GameShared {
    class EngineConfigData : public Core::DataContainer {
        Array<Float32> RpmCurvePoints; // 0x18
        Array<Float32> TorqueCurvePoints; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 Position; // 0x30
        Core::FloatCurve TorqueCurve; // 0x40
        Float32 RpmMin; // 0x48
        Float32 RpmMax; // 0x4C
        Float32 EnginePowerMultiplier; // 0x50
        Float32 InternalAccelerationFactor; // 0x54
        Float32 InternalDeaccelerationFactor; // 0x58
        Float32 AngleLoadScale; // 0x5C
        Float32 TargetRpmWhenDrivingScale; // 0x60
        Float32 MaxReverseSpeed; // 0x64
        GameShared::Boost Boost; // 0x68
        Float32 MaxVehicleHeightOffset; // 0x84
        GameShared::EngineType EngineType; // 0x88
        Boolean UseAngleLoad; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(EngineConfigData) == 0x90);
}
#pragma pack(pop)