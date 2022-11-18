// Object: ClientBFUIObjectStatsCompareEntity
// ClassId: 6516
// RuntimeId: 64027
// TypeInfo: 0x0000000144CA69C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIObjectStatsCompareEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIObjectStatsCompareEntity) == 0x58);
}