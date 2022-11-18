// Object: MixerReceiveNodeConfigData
// ClassId: 927
// RuntimeId: 16128
// TypeInfo: 0x0000000144E16FC0
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/MixerEntryConfig.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerReceiveNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<Audio::MixerEntryConfig> EntryConfigs; // 0x28
    }; // 0x30
    static_assert(sizeof(MixerReceiveNodeConfigData) == 0x30);
}
#pragma pack(pop)