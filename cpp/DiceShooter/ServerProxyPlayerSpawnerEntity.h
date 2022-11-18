// Object: ServerProxyPlayerSpawnerEntity
// ClassId: 7678
// RuntimeId: 39077
// TypeInfo: 0x0000000144DD4310
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerProxyPlayerSpawnerEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ServerProxyPlayerSpawnerEntity) == 0x98);
}