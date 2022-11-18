// Object: LinkSendAudioNodeData
// ClassId: 1023
// RuntimeId: 42650
// TypeInfo: 0x0000000144E194C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkSendAudioNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendAudioNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkSendAudioNodeEntry> AudioEntries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkSendAudioNodeData) == 0x20);
}
#pragma pack(pop)