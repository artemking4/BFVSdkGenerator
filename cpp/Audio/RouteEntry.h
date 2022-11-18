// Object: RouteEntry
// ClassId: 1163
// RuntimeId: 54158
// TypeInfo: 0x0000000144E027F0
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class RouteEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort Output; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::SoundGraphPluginRef Plugin; // 0x28
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(RouteEntry) == 0x30);
}
#pragma pack(pop)