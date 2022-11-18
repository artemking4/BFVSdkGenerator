// Object: ClientTeamFilterEntity
// ClassId: 6897
// RuntimeId: 57883
// TypeInfo: 0x0000000144E3BED0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientTeamFilterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientTeamFilterEntity) == 0x38);
}