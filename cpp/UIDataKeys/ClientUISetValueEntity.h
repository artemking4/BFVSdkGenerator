// Object: ClientUISetValueEntity
// ClassId: 6998
// RuntimeId: 10174
// TypeInfo: 0x0000000144F67D20
#include "../Entity/Entity.h"

namespace UIDataKeys {
    class ClientUISetValueEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUISetValueEntity) == 0x38);
}