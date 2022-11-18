// Object: VoiceOverConversationNode
// ClassId: 5613
// RuntimeId: 60936
// TypeInfo: 0x0000000144E1B240
#include "../Audio/VoiceOverStructureNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverIntervalNode.h"
#include "../Audio/VoiceOverContainerConditionMode.h"
#include "../Global/Float32.h"
#include "../Audio/VoiceOverConversationInfo.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConversationNode : public Audio::VoiceOverStructureNode {
        Array<Audio::VoiceOverValueConnection> Condition; // 0x20
        Audio::VoiceOverValueConnection PronunciationIndex; // 0x28
        Array<Audio::VoiceOverIntervalNode> Intervals; // 0x38
        Array<Audio::VoiceOverStructureNode> FinishedRelationship; // 0x40
        Array<Audio::VoiceOverStructureNode> BlockedRelationship; // 0x48
        Audio::VoiceOverContainerConditionMode ConditionMode; // 0x50
        Float32 Probability; // 0x54
        Audio::VoiceOverConversationInfo Conversation; // 0x58
    }; // 0x88
    static_assert(sizeof(VoiceOverConversationNode) == 0x88);
}
#pragma pack(pop)