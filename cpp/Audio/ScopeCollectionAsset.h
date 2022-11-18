// Object: ScopeCollectionAsset
// ClassId: 717
// RuntimeId: 34537
// TypeInfo: 0x0000000144E163C0
#include "../Core/Asset.h"
#include "../Audio/SoundScopeData.h"
#include "../Audio/SoundScopeAggregateData.h"
#include "../Audio/SoundScopeStrategyData.h"
#include "../Audio/SoundScopeSetupData.h"

#pragma pack(push, 8)
namespace Audio {
    class ScopeCollectionAsset : public Core::Asset {
        Array<Audio::SoundScopeData> Scopes; // 0x20
        Array<Audio::SoundScopeAggregateData> Aggregates; // 0x28
        Array<Audio::SoundScopeStrategyData> ScopeStrategies; // 0x30
        Array<Audio::SoundScopeSetupData> ScopeSetups; // 0x38
    }; // 0x40
    static_assert(sizeof(ScopeCollectionAsset) == 0x40);
}
#pragma pack(pop)