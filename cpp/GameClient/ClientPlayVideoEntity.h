// Object: ClientPlayVideoEntity
// ClassId: 6792
// RuntimeId: 49214
// TypeInfo: 0x0000000144E41F00
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientPlayVideoEntity : public Entity::Entity {
        char pad_0x20[0xE8];
    }; // 0x108
    static_assert(sizeof(ClientPlayVideoEntity) == 0x108);
}