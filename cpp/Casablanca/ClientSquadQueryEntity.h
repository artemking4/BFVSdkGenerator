// Object: ClientSquadQueryEntity
// ClassId: 6874
// RuntimeId: 17826
// TypeInfo: 0x0000000144CD79A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSquadQueryEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientSquadQueryEntity) == 0x98);
}