// Object: AlertTransitionsAsset
// ClassId: 302
// RuntimeId: 49351
// TypeInfo: 0x0000000144BFF1D0
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/AIAnimationEvaluationData.h"
#include "../BattleAIShared/AlertDistanceDefinition.h"
#include "../BattleAIShared/AlertTransitionVariation.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AlertTransitionsAsset : public Core::DataContainerPolicyAsset {
        BattleAIShared::AIAnimationEvaluationData EvaluationData; // 0x20
        BattleAIShared::AlertDistanceDefinition Distances; // 0x28
        Array<BattleAIShared::AlertTransitionVariation> AlertTransitions; // 0x30
    }; // 0x38
    static_assert(sizeof(AlertTransitionsAsset) == 0x38);
}
#pragma pack(pop)