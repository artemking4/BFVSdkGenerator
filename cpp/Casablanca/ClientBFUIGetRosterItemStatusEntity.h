// Object: ClientBFUIGetRosterItemStatusEntity
// ClassId: 6441
// RuntimeId: 12620
// TypeInfo: 0x0000000144CC4560
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetRosterItemStatusEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(ClientBFUIGetRosterItemStatusEntity) == 0x100);
}