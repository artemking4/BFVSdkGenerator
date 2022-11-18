// Object: ParameterFilterLinearNodeData
// ClassId: 1071
// RuntimeId: 5396
// TypeInfo: 0x0000000144E18DC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class ParameterFilterLinearNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort AttackSpeed; // 0x28
        Audio::AudioGraphNodePort ReleaseSpeed; // 0x30
        Float32 DefaultOutputValue; // 0x38
        Boolean KeepActive; // 0x3C
        Boolean SkipFirstUpdate; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(ParameterFilterLinearNodeData) == 0x40);
}
#pragma pack(pop)