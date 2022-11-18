// Object: LinkSendAssetNodeEntry
// ClassId: 1139
// RuntimeId: 37547
// TypeInfo: 0x0000000144E19740
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendAssetNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Input; // 0x18
        CString SendAssetName; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkSendAssetNodeEntry) == 0x28);
}
#pragma pack(pop)