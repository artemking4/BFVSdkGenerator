// Object: LinkReceiveEventNodeData
// ClassId: 1020
// RuntimeId: 55442
// TypeInfo: 0x0000000144E199C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkReceiveEventNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveEventNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkReceiveEventNodeEntry> EventEntries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkReceiveEventNodeData) == 0x20);
}
#pragma pack(pop)