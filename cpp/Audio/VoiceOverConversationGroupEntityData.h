// Object: VoiceOverConversationGroupEntityData
// ClassId: 3888
// RuntimeId: 59748
// TypeInfo: 0x0000000144E1DF40
#include "../Entity/EntityData.h"
#include "../Audio/VoiceOverConversationQueueGroup.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverConversationGroupEntityData : public Entity::EntityData {
        Audio::VoiceOverConversationQueueGroup QueueGroup; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverConversationGroupEntityData) == 0x28);
}
#pragma pack(pop)