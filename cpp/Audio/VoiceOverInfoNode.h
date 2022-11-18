// Object: VoiceOverInfoNode
// ClassId: 5605
// RuntimeId: 52783
// TypeInfo: 0x0000000144E1BC40
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverNamedValue.h"
#include "../Audio/VoiceOverObject.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverInfoNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValueConnection Object; // 0x18
        Audio::VoiceOverValue Value; // 0x28
        Audio::VoiceOverNamedValue Field; // 0x30
        Audio::VoiceOverObject ExpectedType; // 0x38
    }; // 0x40
    static_assert(sizeof(VoiceOverInfoNode) == 0x40);
}
#pragma pack(pop)