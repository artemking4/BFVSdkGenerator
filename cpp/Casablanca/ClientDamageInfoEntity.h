// Object: ClientDamageInfoEntity
// ClassId: 6665
// RuntimeId: 25107
// TypeInfo: 0x0000000144CB65B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDamageInfoEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ClientDamageInfoEntity) == 0x100);
}