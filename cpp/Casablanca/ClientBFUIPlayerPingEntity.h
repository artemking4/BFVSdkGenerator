// Object: ClientBFUIPlayerPingEntity
// ClassId: 6526
// RuntimeId: 31164
// TypeInfo: 0x0000000144CBF240
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerPingEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUIPlayerPingEntity) == 0x68);
}