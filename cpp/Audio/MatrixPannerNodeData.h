// Object: MatrixPannerNodeData
// ClassId: 1037
// RuntimeId: 64885
// TypeInfo: 0x0000000144E03370
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/MatrixPannerOutputChannelCount.h"

#pragma pack(push, 8)
namespace Audio {
    class MatrixPannerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort FrontLeft; // 0x20
        Audio::AudioGraphNodePort Center; // 0x28
        Audio::AudioGraphNodePort FrontRight; // 0x30
        Audio::AudioGraphNodePort RearLeft; // 0x38
        Audio::AudioGraphNodePort Lfe; // 0x40
        Audio::AudioGraphNodePort RearRight; // 0x48
        Audio::AudioGraphNodePort FarRearLeft; // 0x50
        Audio::AudioGraphNodePort FarRearRight; // 0x58
        Audio::AudioGraphNodePort Out; // 0x60
        Audio::MatrixPannerOutputChannelCount OutputChannelCount; // 0x68
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(MatrixPannerNodeData) == 0x70);
}
#pragma pack(pop)