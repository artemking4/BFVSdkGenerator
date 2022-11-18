// Object: ClientSyncedIntEntity
// ClassId: 6886
// RuntimeId: 41114
// TypeInfo: 0x0000000144EA6CC0
#include "../Entity/Entity.h"

namespace Network {
    class ClientSyncedIntEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientSyncedIntEntity) == 0xA8);
}