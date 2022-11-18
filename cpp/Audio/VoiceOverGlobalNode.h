// Object: VoiceOverGlobalNode
// ClassId: 5604
// RuntimeId: 5397
// TypeInfo: 0x0000000144E1BD40
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverNamedValue.h"
#include "../Audio/VoiceOverObject.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverGlobalNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValue Value; // 0x18
        Audio::VoiceOverNamedValue Field; // 0x20
        Audio::VoiceOverObject Object; // 0x28
    }; // 0x30
    static_assert(sizeof(VoiceOverGlobalNode) == 0x30);
}
#pragma pack(pop)