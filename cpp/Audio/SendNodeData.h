// Object: SendNodeData
// ClassId: 1091
// RuntimeId: 24153
// TypeInfo: 0x0000000144E18740
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/SendEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class SendNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::SendEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(SendNodeData) == 0x20);
}
#pragma pack(pop)