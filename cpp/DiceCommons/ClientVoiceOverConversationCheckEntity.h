// Object: ClientVoiceOverConversationCheckEntity
// ClassId: 7038
// RuntimeId: 25574
// TypeInfo: 0x0000000144DABDE0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientVoiceOverConversationCheckEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientVoiceOverConversationCheckEntity) == 0x60);
}