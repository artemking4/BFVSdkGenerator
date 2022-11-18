// Object: EnvironmentNodeData
// ClassId: 988
// RuntimeId: 58520
// TypeInfo: 0x0000000144E03B70
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class EnvironmentNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort ObstructionValue; // 0x18
        Audio::AudioGraphNodePort OcclusionFactor; // 0x20
    }; // 0x28
    static_assert(sizeof(EnvironmentNodeData) == 0x28);
}
#pragma pack(pop)