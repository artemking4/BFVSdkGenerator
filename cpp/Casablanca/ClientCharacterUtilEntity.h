// Object: ClientCharacterUtilEntity
// ClassId: 6631
// RuntimeId: 46203
// TypeInfo: 0x0000000144C9EBC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientCharacterUtilEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientCharacterUtilEntity) == 0x98);
}