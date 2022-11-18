// Object: MixerInputNodeData
// ClassId: 1041
// RuntimeId: 30705
// TypeInfo: 0x0000000144E17640
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerInputEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerInputNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MixerInputEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(MixerInputNodeData) == 0x20);
}
#pragma pack(pop)