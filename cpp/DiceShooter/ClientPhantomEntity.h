// Object: ClientPhantomEntity
// ClassId: 6784
// RuntimeId: 50193
// TypeInfo: 0x0000000144DDA660
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientPhantomEntity : public Entity::Entity {
        char pad_0x20[0xF60];
    }; // 0xF80
    static_assert(sizeof(ClientPhantomEntity) == 0xF80);
}