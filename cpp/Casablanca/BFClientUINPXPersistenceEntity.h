// Object: BFClientUINPXPersistenceEntity
// ClassId: 6216
// RuntimeId: 25147
// TypeInfo: 0x0000000144CB85C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientUINPXPersistenceEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(BFClientUINPXPersistenceEntity) == 0x60);
}