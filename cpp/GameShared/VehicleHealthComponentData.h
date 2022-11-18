// Object: VehicleHealthComponentData
// ClassId: 1934
// RuntimeId: 44194
// TypeInfo: 0x0000000144E8D3E0
#include "../GameplaySim/ControllableHealthComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleHealthComponentData : public GameplaySim::ControllableHealthComponentData {
        Float32 ForceMinDamageAngleRadius; // 0x80
        Float32 MaxArmor; // 0x84
        Float32 ArmorToAdd; // 0x88
        Float32 AdjustRepairLimitBy; // 0x8C
        Boolean WhenRepairingVehicleAlsoRepairAllParts; // 0x90
        Boolean UseRepairLimit; // 0x91
        char pad_0x92[0xE];
    }; // 0xA0
    static_assert(sizeof(VehicleHealthComponentData) == 0xA0);
}
#pragma pack(pop)