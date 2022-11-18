// Object: ClientUIInputEntity
// ClassId: 6958
// RuntimeId: 37294
// TypeInfo: 0x0000000144E41DF0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientUIInputEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIInputEntity) == 0x38);
}