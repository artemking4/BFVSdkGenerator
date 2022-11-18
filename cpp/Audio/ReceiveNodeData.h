// Object: ReceiveNodeData
// ClassId: 1083
// RuntimeId: 1188
// TypeInfo: 0x0000000144E18B40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/ReceiveEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class ReceiveNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::ReceiveEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(ReceiveNodeData) == 0x20);
}
#pragma pack(pop)