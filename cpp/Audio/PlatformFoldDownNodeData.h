// Object: PlatformFoldDownNodeData
// ClassId: 1078
// RuntimeId: 37213
// TypeInfo: 0x0000000144E02970
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class PlatformFoldDownNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::SoundGraphPluginRef Plugin; // 0x28
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(PlatformFoldDownNodeData) == 0x30);
}
#pragma pack(pop)