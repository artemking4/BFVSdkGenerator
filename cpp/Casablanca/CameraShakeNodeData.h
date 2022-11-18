// Object: CameraShakeNodeData
// ClassId: 964
// RuntimeId: 1989
// TypeInfo: 0x0000000144C1DE00
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CameraShakeNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Pitch; // 0x18
        Audio::AudioGraphNodePort Yaw; // 0x20
        Audio::AudioGraphNodePort Roll; // 0x28
        Audio::AudioGraphNodePort XOffset; // 0x30
        Audio::AudioGraphNodePort YOffset; // 0x38
        Audio::AudioGraphNodePort ZOffset; // 0x40
        Audio::AudioGraphNodePort FOVOffset; // 0x48
    }; // 0x50
    static_assert(sizeof(CameraShakeNodeData) == 0x50);
}
#pragma pack(pop)