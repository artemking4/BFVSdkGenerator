// Object: LinkReceiveAudioNodeEntry
// ClassId: 1136
// RuntimeId: 45198
// TypeInfo: 0x0000000144E19640
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/LinkSendAudioNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveAudioNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Output; // 0x18
        Audio::LinkSendAudioNodeEntry AudioSender; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkReceiveAudioNodeEntry) == 0x28);
}
#pragma pack(pop)