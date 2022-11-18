// Object: MixerSystemAsset
// ClassId: 572
// RuntimeId: 42578
// TypeInfo: 0x0000000144E16C40
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Audio/MixGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class MixerSystemAsset : public Core::Asset {
        Array<Audio::MixGroup> Groups; // 0x20
        Boolean ExponentialGainInterpolation; // 0x28
        Boolean OctaveFrequencyInterpolationLpf; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(MixerSystemAsset) == 0x30);
}
#pragma pack(pop)