// Object: AIAnimationEvaluationData
// ClassId: 131
// RuntimeId: 3221
// TypeInfo: 0x0000000144BFF2D0
#include "../Core/Asset.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIAnimationEvaluationData : public Core::Asset {
        Ant::AntRef Actor; // 0x20
        Ant::AntRef EvaluationSceneOpMatrix; // 0x34
    }; // 0x48
    static_assert(sizeof(AIAnimationEvaluationData) == 0x48);
}
#pragma pack(pop)