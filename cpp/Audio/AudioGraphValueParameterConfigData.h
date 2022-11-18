// Object: AudioGraphValueParameterConfigData
// ClassId: 1179
// RuntimeId: 25955
// TypeInfo: 0x0000000144E177C0
#include "../Audio/AudioGraphParameterConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioGraphValueParameterConfigData : public Audio::AudioGraphParameterConfigData {
        Float32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AudioGraphValueParameterConfigData) == 0x28);
}
#pragma pack(pop)