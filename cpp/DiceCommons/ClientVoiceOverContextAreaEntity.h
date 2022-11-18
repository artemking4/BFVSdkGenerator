// Object: ClientVoiceOverContextAreaEntity
// ClassId: 7036
// RuntimeId: 7381
// TypeInfo: 0x0000000144DAC000
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientVoiceOverContextAreaEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientVoiceOverContextAreaEntity) == 0x60);
}