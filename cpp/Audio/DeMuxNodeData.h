// Object: DeMuxNodeData
// ClassId: 979
// RuntimeId: 4790
// TypeInfo: 0x0000000144E1A0C0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/DeMuxOutput.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class DeMuxNodeData : public Audio::AudioGraphNodeData {
        Array<Audio::DeMuxOutput> Outputs; // 0x18
        Audio::AudioGraphNodePort Trigger; // 0x20
        Audio::AudioGraphNodePort Value; // 0x28
        Boolean WrapValue; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DeMuxNodeData) == 0x38);
}
#pragma pack(pop)