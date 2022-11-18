// Object: ClientSpawnEntity
// ClassId: 7869
// RuntimeId: 11140
// TypeInfo: 0x0000000144E3BBA0
#include "../Entity/SpatialEntity.h"

namespace GameClient {
    class ClientSpawnEntity : public Entity::SpatialEntity {
        char pad_0x30[0x150];
    }; // 0x180
    static_assert(sizeof(ClientSpawnEntity) == 0x180);
}