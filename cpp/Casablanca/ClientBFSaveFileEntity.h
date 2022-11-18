// Object: ClientBFSaveFileEntity
// ClassId: 6338
// RuntimeId: 40221
// TypeInfo: 0x0000000144C531A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSaveFileEntity : public Entity::Entity {
        char pad_0x20[0x118];
    }; // 0x138
    static_assert(sizeof(ClientBFSaveFileEntity) == 0x138);
}