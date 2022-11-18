// Object: ClientComponentTransformEntityBase
// ClassId: 6639
// RuntimeId: 15609
// TypeInfo: 0x0000000144F6FFC0
#include "../Entity/Entity.h"

namespace Vehicle {
    class ClientComponentTransformEntityBase : public Entity::Entity {
        char pad_0x20[0x200];
    }; // 0x220
    static_assert(sizeof(ClientComponentTransformEntityBase) == 0x220);
}