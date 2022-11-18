// Object: ClientRemoteEventEntity
// ClassId: 6838
// RuntimeId: 48670
// TypeInfo: 0x0000000144DDCFB0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientRemoteEventEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientRemoteEventEntity) == 0x40);
}