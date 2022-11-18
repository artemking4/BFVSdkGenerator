// Object: ClientGameInfoEntity
// ClassId: 6717
// RuntimeId: 16976
// TypeInfo: 0x0000000144C92600
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGameInfoEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientGameInfoEntity) == 0x70);
}