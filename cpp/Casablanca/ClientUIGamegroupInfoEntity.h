// Object: ClientUIGamegroupInfoEntity
// ClassId: 6946
// RuntimeId: 40228
// TypeInfo: 0x0000000144CB2FB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIGamegroupInfoEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUIGamegroupInfoEntity) == 0x40);
}