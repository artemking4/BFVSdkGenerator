// Object: VoiceOverProbabilityNode
// ClassId: 5609
// RuntimeId: 1683
// TypeInfo: 0x0000000144E1B8C0
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValue.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverProbabilityNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValue False; // 0x18
        Audio::VoiceOverValue True; // 0x20
        Float32 Probability; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(VoiceOverProbabilityNode) == 0x30);
}
#pragma pack(pop)