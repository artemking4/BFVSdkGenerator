// Object: ContextSendNodeData
// ClassId: 973
// RuntimeId: 50020
// TypeInfo: 0x0000000144E18940
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/SoundContextSendEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class ContextSendNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::SoundContextSendEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(ContextSendNodeData) == 0x20);
}
#pragma pack(pop)