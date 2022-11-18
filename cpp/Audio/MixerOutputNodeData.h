// Object: MixerOutputNodeData
// ClassId: 1043
// RuntimeId: 64318
// TypeInfo: 0x0000000144E17540
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerOutputEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerOutputNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MixerOutputEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(MixerOutputNodeData) == 0x20);
}
#pragma pack(pop)