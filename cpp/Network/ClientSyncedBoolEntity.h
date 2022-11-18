// Object: ClientSyncedBoolEntity
// ClassId: 6882
// RuntimeId: 51983
// TypeInfo: 0x0000000144EA6660
#include "../Entity/Entity.h"

namespace Network {
    class ClientSyncedBoolEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientSyncedBoolEntity) == 0xA8);
}