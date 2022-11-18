// Object: ClientSyncedTransformEntity
// ClassId: 6890
// RuntimeId: 52111
// TypeInfo: 0x0000000144EA6880
#include "../Entity/Entity.h"

namespace Network {
    class ClientSyncedTransformEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientSyncedTransformEntity) == 0xA8);
}