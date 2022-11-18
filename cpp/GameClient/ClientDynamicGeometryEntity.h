// Object: ClientDynamicGeometryEntity
// ClassId: 6681
// RuntimeId: 17517
// TypeInfo: 0x0000000144E34CA0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientDynamicGeometryEntity : public Entity::Entity {
        char pad_0x20[0x108];
    }; // 0x128
    static_assert(sizeof(ClientDynamicGeometryEntity) == 0x128);
}