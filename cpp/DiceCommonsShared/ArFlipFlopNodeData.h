// Object: ArFlipFlopNodeData
// ClassId: 950
// RuntimeId: 56020
// TypeInfo: 0x0000000144DC1900
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ArFlipFlopNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Start; // 0x18
        Audio::AudioGraphNodePort Stop; // 0x20
        Audio::AudioGraphNodePort StopEndCycle; // 0x28
        Audio::AudioGraphNodePort Attack; // 0x30
        Audio::AudioGraphNodePort Hold; // 0x38
        Audio::AudioGraphNodePort Release; // 0x40
        Float32 Power; // 0x48
        Audio::AudioGraphNodePort Value; // 0x4C
        Audio::AudioGraphNodePort Started; // 0x54
        Audio::AudioGraphNodePort EndAttack; // 0x5C
        Audio::AudioGraphNodePort EndHold; // 0x64
        Audio::AudioGraphNodePort EndRelease; // 0x6C
        Audio::AudioGraphNodePort Stopped; // 0x74
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(ArFlipFlopNodeData) == 0x80);
}
#pragma pack(pop)