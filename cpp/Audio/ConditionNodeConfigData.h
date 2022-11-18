// Object: ConditionNodeConfigData
// ClassId: 925
// RuntimeId: 1588
// TypeInfo: 0x0000000144E1A540
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/ConditionGroupConfig.h"

#pragma pack(push, 8)
namespace Audio {
    class ConditionNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<Audio::ConditionGroupConfig> Conditions; // 0x28
    }; // 0x30
    static_assert(sizeof(ConditionNodeConfigData) == 0x30);
}
#pragma pack(pop)