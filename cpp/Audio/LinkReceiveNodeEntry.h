// Object: LinkReceiveNodeEntry
// ClassId: 1138
// RuntimeId: 51571
// TypeInfo: 0x0000000144E19C40
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/LinkSendNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Output; // 0x18
        Audio::LinkSendNodeEntry Sender; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkReceiveNodeEntry) == 0x28);
}
#pragma pack(pop)