// Object: VoiceOverConversationNodeConfigData
// ClassId: 5622
// RuntimeId: 65448
// TypeInfo: 0x0000000144E1B1C0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Audio/VoiceOverContainerConditionMode.h"
#include "../Global/Float32.h"
#include "../Audio/VoiceOverConversationInfo.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConversationNodeConfigData : public Audio::VoiceOverNodeConfigData {
        Audio::VoiceOverContainerConditionMode ConditionMode; // 0x20
        Float32 Probability; // 0x24
        Audio::VoiceOverConversationInfo Conversation; // 0x28
    }; // 0x58
    static_assert(sizeof(VoiceOverConversationNodeConfigData) == 0x58);
}
#pragma pack(pop)