// Object: LoudnessNodeData
// ClassId: 1031
// RuntimeId: 42018
// TypeInfo: 0x0000000144DC3C00
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class LoudnessNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort Momentary; // 0x28
        Audio::AudioGraphNodePort Integrated; // 0x30
        Audio::AudioGraphNodePort Reset; // 0x38
        CString TraceLabel; // 0x40
        Float32 IntegrationTime; // 0x48
        Audio::SoundGraphPluginRef Plugin; // 0x4C
        Boolean Trace; // 0x4F
        Boolean EnableClamp; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(LoudnessNodeData) == 0x58);
}
#pragma pack(pop)