// Object: GateNodeData
// ClassId: 1005
// RuntimeId: 964
// TypeInfo: 0x0000000144DC3E80
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class GateNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Open; // 0x20
        Audio::AudioGraphNodePort Close; // 0x28
        Audio::AudioGraphNodePort Out; // 0x30
        Boolean StartOpened; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(GateNodeData) == 0x40);
}
#pragma pack(pop)