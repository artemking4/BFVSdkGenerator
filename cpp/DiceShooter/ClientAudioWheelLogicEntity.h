// Object: ClientAudioWheelLogicEntity
// ClassId: 6333
// RuntimeId: 17947
// TypeInfo: 0x0000000144DD0D30
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAudioWheelLogicEntity : public Entity::Entity {
        char pad_0x20[0x118];
    }; // 0x138
    static_assert(sizeof(ClientAudioWheelLogicEntity) == 0x138);
}