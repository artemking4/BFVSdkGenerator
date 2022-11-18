// Object: ServerFactionCategorizationEntity
// ClassId: 7549
// RuntimeId: 323
// TypeInfo: 0x0000000144CF0240
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFactionCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerFactionCategorizationEntity) == 0x48);
}