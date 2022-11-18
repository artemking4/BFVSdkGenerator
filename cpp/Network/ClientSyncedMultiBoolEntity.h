// Object: ClientSyncedMultiBoolEntity
// ClassId: 6887
// RuntimeId: 33868
// TypeInfo: 0x0000000144EA6220
#include "../Entity/Entity.h"

namespace Network {
    class ClientSyncedMultiBoolEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientSyncedMultiBoolEntity) == 0x70);
}