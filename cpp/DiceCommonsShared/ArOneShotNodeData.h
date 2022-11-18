// Object: ArOneShotNodeData
// ClassId: 952
// RuntimeId: 16260
// TypeInfo: 0x0000000144DC1800
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ArOneShotNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Start; // 0x18
        Audio::AudioGraphNodePort Attack; // 0x20
        Audio::AudioGraphNodePort Hold; // 0x28
        Audio::AudioGraphNodePort Release; // 0x30
        Float32 Power; // 0x38
        Audio::AudioGraphNodePort Value; // 0x3C
        Audio::AudioGraphNodePort Started; // 0x44
        Audio::AudioGraphNodePort Stopped; // 0x4C
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(ArOneShotNodeData) == 0x58);
}
#pragma pack(pop)