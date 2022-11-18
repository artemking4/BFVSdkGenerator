// Object: ClientSyncedFloatEntity
// ClassId: 6885
// RuntimeId: 30266
// TypeInfo: 0x0000000144EA6AA0
#include "../Entity/Entity.h"

namespace Network {
    class ClientSyncedFloatEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientSyncedFloatEntity) == 0xA8);
}