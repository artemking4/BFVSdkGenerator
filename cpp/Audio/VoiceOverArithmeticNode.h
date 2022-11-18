// Object: VoiceOverArithmeticNode
// ClassId: 5599
// RuntimeId: 25812
// TypeInfo: 0x0000000144E1C5C0
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverArithmeticExpressionType.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverArithmeticNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValueConnection A; // 0x18
        Audio::VoiceOverValueConnection B; // 0x28
        Audio::VoiceOverValue Result; // 0x38
        Audio::VoiceOverArithmeticExpressionType Operation; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(VoiceOverArithmeticNode) == 0x48);
}
#pragma pack(pop)