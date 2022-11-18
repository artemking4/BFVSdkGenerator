// Object: MixerNodeData
// ClassId: 1042
// RuntimeId: 35293
// TypeInfo: 0x0000000144E03270
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerEntry.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MixerEntry> Entries; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
    }; // 0x28
    static_assert(sizeof(MixerNodeData) == 0x28);
}
#pragma pack(pop)