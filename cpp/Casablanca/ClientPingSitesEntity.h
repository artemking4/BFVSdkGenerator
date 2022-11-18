// Object: ClientPingSitesEntity
// ClassId: 6787
// RuntimeId: 36017
// TypeInfo: 0x0000000144C924F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPingSitesEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientPingSitesEntity) == 0x58);
}