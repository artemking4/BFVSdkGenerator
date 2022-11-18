// Object: ParameterSmootherNodeData
// ClassId: 1074
// RuntimeId: 34352
// TypeInfo: 0x0000000144DC3B00
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ParameterSmootherNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort SmoothingTime; // 0x28
    }; // 0x30
    static_assert(sizeof(ParameterSmootherNodeData) == 0x30);
}
#pragma pack(pop)