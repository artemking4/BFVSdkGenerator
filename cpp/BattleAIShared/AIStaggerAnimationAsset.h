// Object: AIStaggerAnimationAsset
// ClassId: 137
// RuntimeId: 26529
// TypeInfo: 0x0000000144C068E0
#include "../Core/Asset.h"
#include "../BattleAIShared/AIAnimationEvaluationData.h"
#include "../BattleAIShared/StaggerVariation.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIStaggerAnimationAsset : public Core::Asset {
        BattleAIShared::AIAnimationEvaluationData EvaluationData; // 0x20
        Array<BattleAIShared::StaggerVariation> StaggerVariations; // 0x28
    }; // 0x30
    static_assert(sizeof(AIStaggerAnimationAsset) == 0x30);
}
#pragma pack(pop)