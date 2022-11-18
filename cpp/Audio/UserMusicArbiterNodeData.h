// Object: UserMusicArbiterNodeData
// ClassId: 1108
// RuntimeId: 26716
// TypeInfo: 0x0000000144E024F0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/SoundGraphPluginRef.h"

#pragma pack(push, 8)
namespace Audio {
    class UserMusicArbiterNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
        Audio::SoundGraphPluginRef Plugin; // 0x28
        char pad_0x2B[0x5];
    }; // 0x30
    static_assert(sizeof(UserMusicArbiterNodeData) == 0x30);
}
#pragma pack(pop)