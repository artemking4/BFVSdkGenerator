// Object: ServerBoneSelectorEntity
// ClassId: 7455
// RuntimeId: 6218
// TypeInfo: 0x0000000144CE7EB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerBoneSelectorEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ServerBoneSelectorEntity) == 0xA0);
}