// Object: MixerReceiveNodeData
// ClassId: 1044
// RuntimeId: 57759
// TypeInfo: 0x0000000144E171C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerReceiveEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerReceiveNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MixerReceiveEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(MixerReceiveNodeData) == 0x20);
}
#pragma pack(pop)