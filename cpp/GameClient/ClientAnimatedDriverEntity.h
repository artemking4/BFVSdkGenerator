// Object: ClientAnimatedDriverEntity
// ClassId: 6323
// RuntimeId: 44316
// TypeInfo: 0x0000000144E3A4A0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientAnimatedDriverEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientAnimatedDriverEntity) == 0xA0);
}