// Object: ClientUIGameJoinEntity
// ClassId: 6944
// RuntimeId: 34104
// TypeInfo: 0x0000000144CB2EA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGameJoinEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientUIGameJoinEntity) == 0x50);
}