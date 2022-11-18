// Object: MixerSendNodeData
// ClassId: 1045
// RuntimeId: 6363
// TypeInfo: 0x0000000144E170C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerSendEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerSendNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MixerSendEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(MixerSendNodeData) == 0x20);
}
#pragma pack(pop)