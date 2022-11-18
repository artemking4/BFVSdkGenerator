// Object: VoiceOverConversationEntity
// ClassId: 8263
// RuntimeId: 18739
// TypeInfo: 0x0000000144E382D0
#include "../Entity/Entity.h"

namespace GameClient {
    class VoiceOverConversationEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(VoiceOverConversationEntity) == 0x60);
}