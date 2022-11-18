// Object: MixerSetPropertyNodeData
// ClassId: 1046
// RuntimeId: 52366
// TypeInfo: 0x0000000144E173C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/MixerSetPropertyEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerSetPropertyNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::MixerSetPropertyEntry> Entries; // 0x18
    }; // 0x20
    static_assert(sizeof(MixerSetPropertyNodeData) == 0x20);
}
#pragma pack(pop)