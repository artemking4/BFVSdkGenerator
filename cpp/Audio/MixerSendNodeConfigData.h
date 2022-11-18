// Object: MixerSendNodeConfigData
// ClassId: 928
// RuntimeId: 59004
// TypeInfo: 0x0000000144E16F40
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Audio/MixerEntryConfig.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerSendNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Array<Audio::MixerEntryConfig> EntryConfigs; // 0x28
    }; // 0x30
    static_assert(sizeof(MixerSendNodeConfigData) == 0x30);
}
#pragma pack(pop)