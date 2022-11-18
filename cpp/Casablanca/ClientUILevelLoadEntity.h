// Object: ClientUILevelLoadEntity
// ClassId: 6962
// RuntimeId: 32753
// TypeInfo: 0x0000000144C98EC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUILevelLoadEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientUILevelLoadEntity) == 0xB0);
}