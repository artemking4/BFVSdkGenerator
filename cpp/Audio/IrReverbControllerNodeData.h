// Object: IrReverbControllerNodeData
// ClassId: 1011
// RuntimeId: 42818
// TypeInfo: 0x0000000144E02870
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class IrReverbControllerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Reverb0; // 0x18
        Audio::AudioGraphNodePort Amplitude0; // 0x20
        Audio::AudioGraphNodePort Reverb1; // 0x28
        Audio::AudioGraphNodePort Amplitude1; // 0x30
        Boolean NormalizeGain; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(IrReverbControllerNodeData) == 0x40);
}
#pragma pack(pop)