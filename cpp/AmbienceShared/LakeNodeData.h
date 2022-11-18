// Object: LakeNodeData
// ClassId: 1014
// RuntimeId: 21244
// TypeInfo: 0x0000000144BDFC60
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class LakeNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Depth; // 0x18
        Audio::AudioGraphNodePort LocalPlayerId; // 0x20
    }; // 0x28
    static_assert(sizeof(LakeNodeData) == 0x28);
}
#pragma pack(pop)