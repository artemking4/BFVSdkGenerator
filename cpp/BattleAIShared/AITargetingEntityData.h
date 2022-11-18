// Object: AITargetingEntityData
// ClassId: 2007
// RuntimeId: 16868
// TypeInfo: 0x0000000144C10C00
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AITargetingEntityData : public BattleAIShared::AIParameterEntityData {
        Float32 HumanTargetPreference; // 0x28
        Float32 ThreatDistanceMultiplier; // 0x2C
        Boolean AutomaticallySensesHumanPlayers; // 0x30
        Boolean AutomaticallySensesPlayers; // 0x31
        Boolean IsTarget; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(AITargetingEntityData) == 0x38);
}
#pragma pack(pop)