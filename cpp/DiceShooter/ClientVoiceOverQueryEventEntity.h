// Object: ClientVoiceOverQueryEventEntity
// ClassId: 7046
// RuntimeId: 40457
// TypeInfo: 0x0000000144DD0B10
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientVoiceOverQueryEventEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientVoiceOverQueryEventEntity) == 0xA8);
}