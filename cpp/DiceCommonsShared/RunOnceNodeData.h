// Object: RunOnceNodeData
// ClassId: 1086
// RuntimeId: 3243
// TypeInfo: 0x0000000144DC3800
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class RunOnceNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Reset; // 0x20
        Audio::AudioGraphNodePort Out; // 0x28
        Boolean StartClosed; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(RunOnceNodeData) == 0x38);
}
#pragma pack(pop)