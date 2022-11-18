// Object: LinkReceiveAssetNodeEntry
// ClassId: 1135
// RuntimeId: 10865
// TypeInfo: 0x0000000144E19840
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/LinkSendAssetNodeEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkReceiveAssetNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Output; // 0x18
        Audio::LinkSendAssetNodeEntry AssetSender; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkReceiveAssetNodeEntry) == 0x28);
}
#pragma pack(pop)