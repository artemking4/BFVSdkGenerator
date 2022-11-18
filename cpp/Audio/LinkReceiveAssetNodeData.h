// Object: LinkReceiveAssetNodeData
// ClassId: 1018
// RuntimeId: 36194
// TypeInfo: 0x0000000144E197C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/LinkReceiveAssetNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveAssetNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::LinkReceiveAssetNodeEntry> AssetEntries; // 0x18
    }; // 0x20
    static_assert(sizeof(LinkReceiveAssetNodeData) == 0x20);
}
#pragma pack(pop)