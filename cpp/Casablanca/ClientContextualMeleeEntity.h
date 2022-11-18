// Object: ClientContextualMeleeEntity
// ClassId: 6644
// RuntimeId: 30646
// TypeInfo: 0x0000000144C9E890
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientContextualMeleeEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientContextualMeleeEntity) == 0xC0);
}