// Object: ServerDakarReviveEntity
// ClassId: 7490
// RuntimeId: 52912
// TypeInfo: 0x0000000144C39D30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarReviveEntity : public Entity::Entity {
        char pad_0x20[0xA8];
    }; // 0xC8
    static_assert(sizeof(ServerDakarReviveEntity) == 0xC8);
}