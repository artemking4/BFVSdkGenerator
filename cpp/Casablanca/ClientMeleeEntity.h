// Object: ClientMeleeEntity
// ClassId: 6750
// RuntimeId: 46389
// TypeInfo: 0x0000000144C56BB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientMeleeEntity : public Entity::Entity {
        char pad_0x20[0x218];
    }; // 0x238
    static_assert(sizeof(ClientMeleeEntity) == 0x238);
}