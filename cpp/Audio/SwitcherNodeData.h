// Object: SwitcherNodeData
// ClassId: 1103
// RuntimeId: 56350
// TypeInfo: 0x0000000144E18340
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/SwitcherEntry.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class SwitcherNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::SwitcherEntry> Outputs; // 0x18
        Audio::AudioGraphNodePort Trigger; // 0x20
        Audio::AudioGraphNodePort Value; // 0x28
        Float32 DefaultCaseValue; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(SwitcherNodeData) == 0x38);
}
#pragma pack(pop)