// Object: ServerLootApplyAffect
// ClassId: 7596
// RuntimeId: 27759
// TypeInfo: 0x0000000144C398F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerLootApplyAffect : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerLootApplyAffect) == 0x38);
}