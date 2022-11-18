// Object: LinkSendAudioNodeEntry
// ClassId: 1140
// RuntimeId: 43295
// TypeInfo: 0x0000000144E19540
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendAudioNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Input; // 0x18
        CString SendAudioName; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkSendAudioNodeEntry) == 0x28);
}
#pragma pack(pop)