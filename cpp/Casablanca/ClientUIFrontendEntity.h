// Object: ClientUIFrontendEntity
// ClassId: 6943
// RuntimeId: 35037
// TypeInfo: 0x0000000144CB30C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIFrontendEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientUIFrontendEntity) == 0xD0);
}