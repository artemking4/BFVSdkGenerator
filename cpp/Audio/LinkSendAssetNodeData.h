// Object: LinkSendAssetNodeData
// ClassId: 1022
// RuntimeId: 47279
// TypeInfo: 0x0000000144E196C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkSendAssetNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendAssetNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkSendAssetNodeEntry> AssetEntries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkSendAssetNodeData) == 0x20);
}
#pragma pack(pop)