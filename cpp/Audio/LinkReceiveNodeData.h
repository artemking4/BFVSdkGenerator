// Object: LinkReceiveNodeData
// ClassId: 1021
// RuntimeId: 27457
// TypeInfo: 0x0000000144E19BC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkReceiveNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkReceiveNodeEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkReceiveNodeData) == 0x20);
}
#pragma pack(pop)