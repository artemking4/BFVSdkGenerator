// Object: MultiCrossfaderGroup
// ClassId: 1152
// RuntimeId: 62663
// TypeInfo: 0x0000000144E191C0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Audio/FaderType.h"

#pragma pack(push, 8)
namespace Audio {
    class MultiCrossfaderGroup : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Amplitude; // 0x18
        Audio::AudioGraphNodePort Start; // 0x20
        Audio::AudioGraphNodePort Stop; // 0x28
        Float32 FadeAmplitude; // 0x30
        Float32 FadeBegin; // 0x34
        Float32 FadeEnd; // 0x38
        Audio::FaderType FadeType; // 0x3C
    }; // 0x40
    static_assert(sizeof(MultiCrossfaderGroup) == 0x40);
}
#pragma pack(pop)