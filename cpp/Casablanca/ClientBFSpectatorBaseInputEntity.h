// Object: ClientBFSpectatorBaseInputEntity
// ClassId: 6339
// RuntimeId: 56972
// TypeInfo: 0x0000000144CC1830
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorBaseInputEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientBFSpectatorBaseInputEntity) == 0x70);
}