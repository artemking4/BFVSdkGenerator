// Object: ArLoopingNodeData
// ClassId: 951
// RuntimeId: 54696
// TypeInfo: 0x0000000144DC1880
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ArLoopingNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Start; // 0x18
        Audio::AudioGraphNodePort Stop; // 0x20
        Audio::AudioGraphNodePort Attack; // 0x28
        Audio::AudioGraphNodePort Release; // 0x30
        Float32 Power; // 0x38
        Audio::AudioGraphNodePort Value; // 0x3C
        Audio::AudioGraphNodePort Started; // 0x44
        Audio::AudioGraphNodePort Stopped; // 0x4C
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(ArLoopingNodeData) == 0x58);
}
#pragma pack(pop)