// Object: ClientUIActionEntity
// ClassId: 6910
// RuntimeId: 23705
// TypeInfo: 0x0000000144F68050
#include "../Entity/Entity.h"

namespace UIDataKeys {
    class ClientUIActionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIActionEntity) == 0x38);
}