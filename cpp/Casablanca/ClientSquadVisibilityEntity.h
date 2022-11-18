// Object: ClientSquadVisibilityEntity
// ClassId: 6879
// RuntimeId: 60502
// TypeInfo: 0x0000000144CD7450
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSquadVisibilityEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ClientSquadVisibilityEntity) == 0x110);
}