// Object: SoundTargetingData
// ClassId: 392
// RuntimeId: 38167
// TypeInfo: 0x0000000144C183B0
#include "../Core/DataContainerPolicyAsset.h"
#include "../BattleAIShared/SoundTargetingEntry.h"
#include "../BattleAIShared/SoundRelevanceEntry.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SoundTargetingData : public Core::DataContainerPolicyAsset {
        Array<BattleAIShared::SoundTargetingEntry> Relevances; // 0x20
        Array<BattleAIShared::SoundRelevanceEntry> RelevanceArray; // 0x28
    }; // 0x30
    static_assert(sizeof(SoundTargetingData) == 0x30);
}
#pragma pack(pop)