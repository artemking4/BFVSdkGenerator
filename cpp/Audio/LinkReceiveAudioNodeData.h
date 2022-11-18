// Object: LinkReceiveAudioNodeData
// ClassId: 1019
// RuntimeId: 9881
// TypeInfo: 0x0000000144E195C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkReceiveAudioNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveAudioNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkReceiveAudioNodeEntry> AudioEntries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkReceiveAudioNodeData) == 0x20);
}
#pragma pack(pop)