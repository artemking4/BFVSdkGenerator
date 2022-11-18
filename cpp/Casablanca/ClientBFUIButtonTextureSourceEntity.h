// Object: ClientBFUIButtonTextureSourceEntity
// ClassId: 6367
// RuntimeId: 249
// TypeInfo: 0x0000000144C9D3D0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIButtonTextureSourceEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIButtonTextureSourceEntity) == 0x48);
}