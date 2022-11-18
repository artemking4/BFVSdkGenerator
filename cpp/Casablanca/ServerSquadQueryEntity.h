// Object: ServerSquadQueryEntity
// ClassId: 7725
// RuntimeId: 41908
// TypeInfo: 0x0000000144CEAC20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSquadQueryEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ServerSquadQueryEntity) == 0x98);
}