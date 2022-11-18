// Object: LfoNodeData
// ClassId: 1015
// RuntimeId: 29319
// TypeInfo: 0x0000000144E19D40
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class LfoNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Hz; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Float32 Min; // 0x30
        Float32 Max; // 0x34
        Boolean StartAtRandomValue; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(LfoNodeData) == 0x40);
}
#pragma pack(pop)