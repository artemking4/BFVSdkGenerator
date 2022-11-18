// Object: ClientBFUIPlayerKitStatsEntity
// ClassId: 6525
// RuntimeId: 59569
// TypeInfo: 0x0000000144CBF350
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerKitStatsEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIPlayerKitStatsEntity) == 0x50);
}