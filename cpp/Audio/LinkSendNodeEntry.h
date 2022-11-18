// Object: LinkSendNodeEntry
// ClassId: 1142
// RuntimeId: 5681
// TypeInfo: 0x0000000144E19B40
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Input; // 0x18
        CString SendName; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkSendNodeEntry) == 0x28);
}
#pragma pack(pop)