// Object: ClientRankEntity
// ClassId: 6832
// RuntimeId: 59705
// TypeInfo: 0x0000000144C8B0A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientRankEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientRankEntity) == 0x48);
}