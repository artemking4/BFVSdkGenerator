// Object: ClientEventSyncEntity
// ClassId: 6691
// RuntimeId: 26211
// TypeInfo: 0x0000000144E37D80
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientEventSyncEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientEventSyncEntity) == 0x30);
}