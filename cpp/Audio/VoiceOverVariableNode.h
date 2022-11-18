// Object: VoiceOverVariableNode
// ClassId: 5610
// RuntimeId: 33347
// TypeInfo: 0x0000000144E1B7C0
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverNamedValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverVariableNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValue Value; // 0x18
        Audio::VoiceOverNamedValue Source; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverVariableNode) == 0x28);
}
#pragma pack(pop)