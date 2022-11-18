// Object: ClientSoundActivityTesterEntity
// ClassId: 6865
// RuntimeId: 8757
// TypeInfo: 0x0000000144DAC220
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientSoundActivityTesterEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ClientSoundActivityTesterEntity) == 0x100);
}