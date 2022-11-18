// Object: LinkSendEventNodeData
// ClassId: 1024
// RuntimeId: 18108
// TypeInfo: 0x0000000144E198C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkSendEventNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendEventNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkSendEventNodeEntry> EventEntries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkSendEventNodeData) == 0x20);
}
#pragma pack(pop)