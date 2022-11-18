// Object: ServerComparePlayerEntity
// ClassId: 7469
// RuntimeId: 17969
// TypeInfo: 0x0000000144CE7B80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerComparePlayerEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerComparePlayerEntity) == 0x38);
}