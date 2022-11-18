// Object: ClientTeamEntity
// ClassId: 6896
// RuntimeId: 35332
// TypeInfo: 0x0000000144E3A280
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientTeamEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientTeamEntity) == 0x30);
}