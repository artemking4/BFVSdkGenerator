// Object: ContextReceiveNodeData
// ClassId: 972
// RuntimeId: 1511
// TypeInfo: 0x0000000144E18A40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/SoundContextReceiveEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class ContextReceiveNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::SoundContextReceiveEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(ContextReceiveNodeData) == 0x20);
}
#pragma pack(pop)