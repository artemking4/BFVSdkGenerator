// Object: ClientBFUIIconTextureSourceEntity
// ClassId: 6482
// RuntimeId: 22412
// TypeInfo: 0x0000000144C9D0A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIIconTextureSourceEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIIconTextureSourceEntity) == 0x40);
}