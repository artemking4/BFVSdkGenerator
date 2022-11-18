// Object: VoiceOverConversationCheckEntityData
// ClassId: 3886
// RuntimeId: 17567
// TypeInfo: 0x0000000144DC1E00
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverConversationQueueGroup.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class VoiceOverConversationCheckEntityData : public Entity::EntityData {
        Audio::VoiceOverConversationQueueGroup QueueGroup; // 0x20
        Boolean ContinuousUpdate; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(VoiceOverConversationCheckEntityData) == 0x30);
}
#pragma pack(pop)