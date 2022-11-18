// Object: VoiceOverConversationGroupEntity
// ClassId: 8264
// RuntimeId: 57114
// TypeInfo: 0x0000000144E1F600
#include "../Entity/Entity.h"

namespace Audio {
    class VoiceOverConversationGroupEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(VoiceOverConversationGroupEntity) == 0x30);
}