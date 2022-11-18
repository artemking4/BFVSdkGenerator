// Object: ClientPlaceHolderEntity
// ClassId: 6788
// RuntimeId: 38321
// TypeInfo: 0x0000000144E37FA0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientPlaceHolderEntity : public Entity::Entity {
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(ClientPlaceHolderEntity) == 0x28);
}