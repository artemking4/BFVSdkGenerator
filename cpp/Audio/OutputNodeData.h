// Object: OutputNodeData
// ClassId: 1063
// RuntimeId: 14501
// TypeInfo: 0x0000000144E030F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurve.h"
#include "../Global/Boolean.h"
#include "../Audio/LowPassFilterType.h"
#include "../Audio/SoundBusData.h"
#include "../Audio/OutputTransformSource.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Audio/SoundGraphPluginRef.h"
#include "../Audio/MixGroup.h"
#include "../Audio/OutputNodeVersion.h"

#pragma pack(push, 8)
namespace Audio {
    class OutputNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort BypassHeadroom; // 0x20
        Float32 MinDistance; // 0x28
        char pad_0x2C[0x4];
        Core::FloatCurve AttenuationCurve; // 0x30
        Audio::AudioGraphNodePort CurveFactor; // 0x38
        Audio::AudioGraphNodePort HFDampingDistance; // 0x40
        Audio::AudioGraphNodePort HFDampingObstruction; // 0x48
        Float32 HFDampingOcclusion; // 0x50
        Audio::LowPassFilterType HFDampingFilter; // 0x54
        Float32 Gain; // 0x58
        char pad_0x5C[0x4];
        Audio::SoundBusData MainSend; // 0x60
        Float32 ExpectedPeakAmplitude; // 0x68
        Audio::OutputTransformSource TransformSource; // 0x6C
        CString OutputName; // 0x70
        Uint32 OutputNameHash; // 0x78
        char pad_0x7C[0x4];
        Audio::MixGroup MixGroup; // 0x80
        Audio::OutputNodeVersion Version; // 0x88
        Boolean Solo; // 0x8C
        Boolean EnableHdr; // 0x8D
        Audio::SoundGraphPluginRef LowPassPlugin; // 0x8E
        Audio::SoundGraphPluginRef VuPlugin; // 0x91
        Audio::SoundGraphPluginRef MainSendPlugin; // 0x94
        char pad_0x97[0x1];
    }; // 0x98
    static_assert(sizeof(OutputNodeData) == 0x98);
}
#pragma pack(pop)