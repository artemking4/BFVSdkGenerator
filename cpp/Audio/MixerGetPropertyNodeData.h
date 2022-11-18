// Object: MixerGetPropertyNodeData
// ClassId: 1040
// RuntimeId: 51459
// TypeInfo: 0x0000000144E172C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerGetPropertyEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerGetPropertyNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MixerGetPropertyEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(MixerGetPropertyNodeData) == 0x20);
}
#pragma pack(pop)