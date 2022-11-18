// Object: BFVehicleHealthComponentData
// ClassId: 1935
// RuntimeId: 60930
// TypeInfo: 0x0000000144C7CF80
#include "../GameShared/VehicleHealthComponentData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class BFVehicleHealthComponentData : public GameShared::VehicleHealthComponentData {
        Float32 MaxHitAngleForGlancingHit; // 0xA0
        Float32 MinHitAngleForCriticalHit; // 0xA4
        Array<Float32> RepairToolStackingMultipliers; // 0xA8
    }; // 0xB0
    static_assert(sizeof(BFVehicleHealthComponentData) == 0xB0);
}
#pragma pack(pop)