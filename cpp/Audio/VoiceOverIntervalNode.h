// Object: VoiceOverIntervalNode
// ClassId: 5606
// RuntimeId: 31409
// TypeInfo: 0x0000000144E1BB40
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverInterval.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverIntervalNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValueConnection Threshold; // 0x18
        Audio::VoiceOverValue Time; // 0x28
        Audio::VoiceOverValue False; // 0x30
        Audio::VoiceOverValue True; // 0x38
        Audio::VoiceOverInterval Interval; // 0x40
    }; // 0x48
    static_assert(sizeof(VoiceOverIntervalNode) == 0x48);
}
#pragma pack(pop)