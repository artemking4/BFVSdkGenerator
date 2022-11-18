// Object: VoiceOverDistanceNode
// ClassId: 5603
// RuntimeId: 8544
// TypeInfo: 0x0000000144E1BE40
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverCompareExpressionType.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverDistanceNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValueConnection A; // 0x18
        Audio::VoiceOverValueConnection B; // 0x28
        Audio::VoiceOverValueConnection Threshold; // 0x38
        Audio::VoiceOverValue Distance; // 0x48
        Audio::VoiceOverValue False; // 0x50
        Audio::VoiceOverValue True; // 0x58
        Audio::VoiceOverCompareExpressionType Operation; // 0x60
        char pad_0x64[0x4];
    }; // 0x68
    static_assert(sizeof(VoiceOverDistanceNode) == 0x68);
}
#pragma pack(pop)