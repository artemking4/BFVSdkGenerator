// Object: SequencerNodeData
// ClassId: 1093
// RuntimeId: 40613
// TypeInfo: 0x0000000144DC3700
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../DiceCommonsShared/TimeMode.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class SequencerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Start; // 0x18
        Audio::AudioGraphNodePort Stop; // 0x20
        Audio::AudioGraphNodePort Time; // 0x28
        Audio::AudioGraphNodePort OnStarted; // 0x30
        Audio::AudioGraphNodePort OnStopped; // 0x38
        Audio::AudioGraphNodePort Out; // 0x40
        Audio::AudioGraphNodePort Delay; // 0x48
        DiceCommonsShared::TimeMode TimeMode; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(SequencerNodeData) == 0x58);
}
#pragma pack(pop)