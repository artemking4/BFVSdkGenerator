// Object: AICoverQueryEntityData
// ClassId: 1988
// RuntimeId: 8929
// TypeInfo: 0x0000000144C12900
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../BattleAIShared/CoverQueryData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AICoverQueryEntityData : public BattleAIShared::AIParameterEntityData {
        BattleAIShared::CoverQueryData AttackCoverQuery; // 0x28
    }; // 0x30
    static_assert(sizeof(AICoverQueryEntityData) == 0x30);
}
#pragma pack(pop)