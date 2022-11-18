// Object: VoiceOverCompareNode
// ClassId: 5600
// RuntimeId: 47250
// TypeInfo: 0x0000000144E1C4C0
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverCompareExpressionType.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverCompareNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValueConnection A; // 0x18
        Audio::VoiceOverValueConnection B; // 0x28
        Audio::VoiceOverValue False; // 0x38
        Audio::VoiceOverValue True; // 0x40
        Audio::VoiceOverCompareExpressionType Operation; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(VoiceOverCompareNode) == 0x50);
}
#pragma pack(pop)