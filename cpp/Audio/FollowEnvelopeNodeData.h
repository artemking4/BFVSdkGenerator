// Object: FollowEnvelopeNodeData
// ClassId: 999
// RuntimeId: 24994
// TypeInfo: 0x0000000144E19DC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class FollowEnvelopeNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort X; // 0x18
        Audio::AudioGraphNodePort Y; // 0x20
        Float32 Base; // 0x28
        Float32 Scale; // 0x2C
        Float32 Pivot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(FollowEnvelopeNodeData) == 0x38);
}
#pragma pack(pop)