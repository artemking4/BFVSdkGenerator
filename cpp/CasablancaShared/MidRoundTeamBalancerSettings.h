// Object: MidRoundTeamBalancerSettings
// ClassId: 4998
// RuntimeId: 38911
// TypeInfo: 0x0000000144D311A0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MidRoundTeamBalancerSettings : public Core::SystemSettings {
        Int32 ThresholdWorth; // 0x20
        Int32 InitialWorth; // 0x24
        Int32 WorthIncrement; // 0x28
        Int32 SquadWorth; // 0x2C
        Int32 PartyWorth; // 0x30
        Int32 ForceTeamWorth; // 0x34
        Int32 MinuteWorth; // 0x38
        Float32 ScoreWorth; // 0x3C
        Float32 TimeToCheck; // 0x40
        Float32 TimeToSwitch; // 0x44
        Int32 MoveThreshold; // 0x48
        Int32 MinServerPopulation; // 0x4C
        Float32 AiWorth; // 0x50
        Boolean LogEnabled; // 0x54
        char pad_0x55[0x3];
    }; // 0x58
    static_assert(sizeof(MidRoundTeamBalancerSettings) == 0x58);
}
#pragma pack(pop)