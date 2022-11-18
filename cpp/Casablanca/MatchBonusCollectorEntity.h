// Object: MatchBonusCollectorEntity
// ClassId: 7256
// RuntimeId: 45459
// TypeInfo: 0x0000000144CE5670
#include "../Entity/Entity.h"

namespace Casablanca {
    class MatchBonusCollectorEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(MatchBonusCollectorEntity) == 0x30);
}