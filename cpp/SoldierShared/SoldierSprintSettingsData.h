// Object: SoldierSprintSettingsData
// ClassId: 4642
// RuntimeId: 64883
// TypeInfo: 0x0000000144F451B0
#include "../SoldierShared/SoldierFOVEffect.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierSprintSettingsData : public SoldierShared::SoldierFOVEffect {
        Float32 RecoverTime; // 0x30
        Float32 SprintToProneRecoverTime; // 0x34
        Float32 MinSpeedForSprintSlide; // 0x38
        char pad_0x3C[0x4];
        Array<Int32> InterruptingActions; // 0x40
    }; // 0x48
    static_assert(sizeof(SoldierSprintSettingsData) == 0x48);
}
#pragma pack(pop)