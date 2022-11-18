// Object: BreathControlData
// ClassId: 1278
// RuntimeId: 39688
// TypeInfo: 0x0000000144F45030
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class BreathControlData : public Core::DataContainer {
        Float32 BreathControlTime; // 0x18
        Float32 BreathControlReleaseTime; // 0x1C
        Float32 BreathControlPenaltyMultiplier; // 0x20
        Float32 BreathControlPenaltyTimeout; // 0x24
    }; // 0x28
    static_assert(sizeof(BreathControlData) == 0x28);
}
#pragma pack(pop)