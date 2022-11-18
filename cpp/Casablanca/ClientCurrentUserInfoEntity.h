// Object: ClientCurrentUserInfoEntity
// ClassId: 6648
// RuntimeId: 39092
// TypeInfo: 0x0000000144C8AA40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCurrentUserInfoEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientCurrentUserInfoEntity) == 0x40);
}