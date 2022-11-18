// Object: ClientUILoadLevelEntity
// ClassId: 6965
// RuntimeId: 55822
// TypeInfo: 0x0000000144C98FD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILoadLevelEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientUILoadLevelEntity) == 0x30);
}