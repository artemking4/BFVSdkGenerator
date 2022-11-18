// Object: ClientUIIncDecEventEntity
// ClassId: 6956
// RuntimeId: 27583
// TypeInfo: 0x0000000144C9A970
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIIncDecEventEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIIncDecEventEntity) == 0x38);
}