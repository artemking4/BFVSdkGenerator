// Object: ServerSharedDataEntity
// ClassId: 7709
// RuntimeId: 28328
// TypeInfo: 0x0000000144DAA7D0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ServerSharedDataEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ServerSharedDataEntity) == 0x98);
}