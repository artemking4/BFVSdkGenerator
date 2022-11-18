// Object: RiverNodeData
// ClassId: 1084
// RuntimeId: 25462
// TypeInfo: 0x0000000144BDFBE0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class RiverNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Width; // 0x18
        Audio::AudioGraphNodePort Incline; // 0x20
        Audio::AudioGraphNodePort LocalPlayerId; // 0x28
    }; // 0x30
    static_assert(sizeof(RiverNodeData) == 0x30);
}
#pragma pack(pop)