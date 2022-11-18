// Object: ClientSyncedVec3Entity
// ClassId: 6891
// RuntimeId: 23248
// TypeInfo: 0x0000000144EA6440
#include "../Entity/Entity.h"

namespace Network {
    class ClientSyncedVec3Entity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientSyncedVec3Entity) == 0xA8);
}