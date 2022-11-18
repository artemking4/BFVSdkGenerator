// Object: ClientVoiceOverSourceEntity
// ClassId: 7048
// RuntimeId: 37953
// TypeInfo: 0x0000000144DAB9A0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientVoiceOverSourceEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientVoiceOverSourceEntity) == 0x70);
}