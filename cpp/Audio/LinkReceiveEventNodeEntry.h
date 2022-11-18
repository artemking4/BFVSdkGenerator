// Object: LinkReceiveEventNodeEntry
// ClassId: 1137
// RuntimeId: 5866
// TypeInfo: 0x0000000144E19A40
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/LinkSendEventNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveEventNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Output; // 0x18
        Audio::LinkSendEventNodeEntry EventSender; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkReceiveEventNodeEntry) == 0x28);
}
#pragma pack(pop)