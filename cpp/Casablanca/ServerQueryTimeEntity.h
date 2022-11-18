// Object: ServerQueryTimeEntity
// ClassId: 7682
// RuntimeId: 10926
// TypeInfo: 0x0000000144C3E530
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerQueryTimeEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerQueryTimeEntity) == 0x38);
}