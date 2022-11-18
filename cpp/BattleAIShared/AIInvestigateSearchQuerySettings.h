// Object: AIInvestigateSearchQuerySettings
// ClassId: 133
// RuntimeId: 63050
// TypeInfo: 0x0000000144C12D80
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIInvestigateSearchQuerySettings : public Core::Asset {
        Float32 SearchAreaWidth; // 0x20
        Int32 NumberOfPositionsPerAxis; // 0x24
        Float32 MaximumAcceptablePathCost; // 0x28
        Float32 ClearingRadius; // 0x2C
        Float32 TimeSpentClearing; // 0x30
        Int32 MaximumSearchTargetCount; // 0x34
        Boolean OnlySearchInDefendArea; // 0x38
        Boolean OnlyClearCurrentSearchTarget; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(AIInvestigateSearchQuerySettings) == 0x40);
}
#pragma pack(pop)