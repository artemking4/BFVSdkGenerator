// Object: ClientUICompareDataKeyEntity
// ClassId: 6927
// RuntimeId: 51169
// TypeInfo: 0x0000000144F67F40
#include "../Entity/Entity.h"

namespace UIDataKeys {
    class ClientUICompareDataKeyEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUICompareDataKeyEntity) == 0x38);
}