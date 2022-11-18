// Object: VoiceOverContainerNode
// ClassId: 5612
// RuntimeId: 10949
// TypeInfo: 0x0000000144E1B640
#include "../Audio/VoiceOverStructureNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverIntervalNode.h"
#include "../Audio/VoiceOverContainerConditionMode.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverContainerNode : public Audio::VoiceOverStructureNode {
        Array<Audio::VoiceOverValueConnection> Condition; // 0x20
        Array<Audio::VoiceOverIntervalNode> Intervals; // 0x28
        Array<Audio::VoiceOverStructureNode> TrueRelationship; // 0x30
        Array<Audio::VoiceOverStructureNode> FalseRelationship; // 0x38
        Audio::VoiceOverContainerConditionMode ConditionMode; // 0x40
        Float32 Probability; // 0x44
        Boolean AlwaysResetInterval; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(VoiceOverContainerNode) == 0x50);
}
#pragma pack(pop)