// Object: LinkSendEventNodeEntry
// ClassId: 1141
// RuntimeId: 58047
// TypeInfo: 0x0000000144E19940
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class LinkSendEventNodeEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Input; // 0x18
        CString SendEventName; // 0x20
    }; // 0x28
    static_assert(sizeof(LinkSendEventNodeEntry) == 0x28);
}
#pragma pack(pop)