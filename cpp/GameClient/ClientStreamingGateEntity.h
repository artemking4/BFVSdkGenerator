// Object: ClientStreamingGateEntity
// ClassId: 6880
// RuntimeId: 7936
// TypeInfo: 0x0000000144E3C0F0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientStreamingGateEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientStreamingGateEntity) == 0x38);
}