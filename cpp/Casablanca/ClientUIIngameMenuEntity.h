// Object: ClientUIIngameMenuEntity
// ClassId: 6957
// RuntimeId: 34341
// TypeInfo: 0x0000000144CB2950
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIIngameMenuEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientUIIngameMenuEntity) == 0x38);
}