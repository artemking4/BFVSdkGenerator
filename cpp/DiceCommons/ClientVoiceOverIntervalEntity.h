// Object: ClientVoiceOverIntervalEntity
// ClassId: 7041
// RuntimeId: 59968
// TypeInfo: 0x0000000144DABCD0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientVoiceOverIntervalEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientVoiceOverIntervalEntity) == 0x30);
}