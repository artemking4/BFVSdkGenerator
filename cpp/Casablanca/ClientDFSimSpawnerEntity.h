// Object: ClientDFSimSpawnerEntity
// ClassId: 6650
// RuntimeId: 21851
// TypeInfo: 0x0000000144C8E390
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDFSimSpawnerEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientDFSimSpawnerEntity) == 0xD0);
}