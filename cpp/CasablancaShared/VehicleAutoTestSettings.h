// Object: VehicleAutoTestSettings
// ClassId: 5039
// RuntimeId: 33894
// TypeInfo: 0x0000000144D6C930
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VehicleAutoTestSettings : public Core::SystemSettings {
        Int32 VehicleBundleIndex; // 0x20
        Int32 VehicleCount; // 0x24
        Float32 PerVehicleTestDuration; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(VehicleAutoTestSettings) == 0x30);
}
#pragma pack(pop)