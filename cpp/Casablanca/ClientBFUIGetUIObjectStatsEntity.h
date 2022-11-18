// Object: ClientBFUIGetUIObjectStatsEntity
// ClassId: 6461
// RuntimeId: 9608
// TypeInfo: 0x0000000144CC3CE0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetUIObjectStatsEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientBFUIGetUIObjectStatsEntity) == 0xA0);
}