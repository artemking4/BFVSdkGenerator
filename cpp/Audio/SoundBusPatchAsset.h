// Object: SoundBusPatchAsset
// ClassId: 745
// RuntimeId: 21375
// TypeInfo: 0x0000000144E16640
#include "../Audio/SoundBusPatchBaseAsset.h"
#include "../Audio/AudioGraphNodeData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundBusPatchAsset : public Audio::SoundBusPatchBaseAsset {
        Array<Audio::AudioGraphNodeData> OutputNodes; // 0x30
    }; // 0x38
    static_assert(sizeof(SoundBusPatchAsset) == 0x38);
}
#pragma pack(pop)