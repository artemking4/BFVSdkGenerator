// Object: SustainFiringData
// ClassId: 4954
// RuntimeId: 9028
// TypeInfo: 0x0000000144C063E0
#include "../Core/DataContainer.h"
#include "../BattleAIShared/SustainFiringFireStyle.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/SustainFiringSweepAreaSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SustainFiringData : public Core::DataContainer {
        BattleAIShared::SustainFiringFireStyle FireStyle; // 0x18
        Float32 SpinUpDuration; // 0x1C
        Float32 SustainFireTimeMin; // 0x20
        Float32 SustainFireTimeMax; // 0x24
        Float32 CooldownDurationMin; // 0x28
        Float32 CooldownDurationMax; // 0x2C
        Float32 AimFactorBetweenFeetAndEyes; // 0x30
        Float32 TrackingRate; // 0x34
        BattleAIShared::SustainFiringSweepAreaSettings SweepAreaSettings; // 0x38
        Boolean StopSustainFireWhenShotAt; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(SustainFiringData) == 0x48);
}
#pragma pack(pop)