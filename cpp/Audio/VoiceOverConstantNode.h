// Object: VoiceOverConstantNode
// ClassId: 5601
// RuntimeId: 12063
// TypeInfo: 0x0000000144E1C040
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverConstantValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConstantNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValue Value; // 0x18
        Audio::VoiceOverConstantValue Source; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverConstantNode) == 0x28);
}
#pragma pack(pop)