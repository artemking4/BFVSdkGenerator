// Object: ClientEventMemoryEntity
// ClassId: 6690
// RuntimeId: 22239
// TypeInfo: 0x0000000144E34B90
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientEventMemoryEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientEventMemoryEntity) == 0x38);
}