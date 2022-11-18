// Object: ServerDakarHealingItemInfoEntity
// ClassId: 7484
// RuntimeId: 41590
// TypeInfo: 0x0000000144C3A7D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarHealingItemInfoEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerDakarHealingItemInfoEntity) == 0x68);
}