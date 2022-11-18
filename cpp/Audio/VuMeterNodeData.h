// Object: VuMeterNodeData
// ClassId: 1116
// RuntimeId: 18360
// TypeInfo: 0x0000000144E02070
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Audio/VuMeterMode.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class VuMeterNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::AudioGraphNodePort FrontLeft; // 0x28
        Audio::AudioGraphNodePort Center; // 0x30
        Audio::AudioGraphNodePort FrontRight; // 0x38
        Audio::AudioGraphNodePort RearLeft; // 0x40
        Audio::AudioGraphNodePort RearRight; // 0x48
        Audio::AudioGraphNodePort Lfe; // 0x50
        Audio::VuMeterMode Mode; // 0x58
        Int32 Efficiency; // 0x5C
        Int32 VUMeterXPos; // 0x60
        Int32 VUMeterYPos; // 0x64
        Audio::SoundGraphPluginRef Plugin; // 0x68
        Boolean RenderVUMeterBars; // 0x6B
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(VuMeterNodeData) == 0x70);
}
#pragma pack(pop)