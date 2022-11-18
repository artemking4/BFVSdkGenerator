// Object: ServerDamageInfoEntity
// ClassId: 7497
// RuntimeId: 43657
// TypeInfo: 0x0000000144C41010
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDamageInfoEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ServerDamageInfoEntity) == 0x120);
}