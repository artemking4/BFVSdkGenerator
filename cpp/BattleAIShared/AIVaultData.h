// Object: AIVaultData
// ClassId: 285
// RuntimeId: 27675
// TypeInfo: 0x0000000144C13680
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/AILocoVaultBinding.h"
#include "../Ant/AntRef.h"
#include "../BattleAIShared/AIAnimationEvaluationData.h"
#include "../BattleAIShared/AIVaultAnimationInstance.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIVaultData : public Core::DataContainerPolicyAsset {
        BattleAIShared::AILocoVaultBinding VaultBinding; // 0x20
        Ant::AntRef VaultDatabase; // 0xC0
        char pad_0xD4[0x4];
        BattleAIShared::AIAnimationEvaluationData EvaluationData; // 0xD8
        Array<BattleAIShared::AIVaultAnimationInstance> VaultInstances; // 0xE0
    }; // 0xE8
    static_assert(sizeof(AIVaultData) == 0xE8);
}
#pragma pack(pop)