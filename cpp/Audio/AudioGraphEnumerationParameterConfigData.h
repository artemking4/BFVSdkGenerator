// Object: AudioGraphEnumerationParameterConfigData
// ClassId: 1178
// RuntimeId: 14512
// TypeInfo: 0x0000000144E17740
#include "../Audio/AudioGraphParameterConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class AudioGraphEnumerationParameterConfigData : public Audio::AudioGraphParameterConfigData {
        Float32 Value; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AudioGraphEnumerationParameterConfigData) == 0x28);
}
#pragma pack(pop)