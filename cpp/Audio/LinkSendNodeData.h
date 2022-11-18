// Object: LinkSendNodeData
// ClassId: 1025
// RuntimeId: 11131
// TypeInfo: 0x0000000144E19AC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkSendNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkSendNodeEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkSendNodeData) == 0x20);
}
#pragma pack(pop)