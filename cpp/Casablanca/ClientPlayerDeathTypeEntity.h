// Object: ClientPlayerDeathTypeEntity
// ClassId: 6802
// RuntimeId: 5220
// TypeInfo: 0x0000000144CD8440
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayerDeathTypeEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientPlayerDeathTypeEntity) == 0x58);
}