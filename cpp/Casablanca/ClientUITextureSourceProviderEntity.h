// Object: ClientUITextureSourceProviderEntity
// ClassId: 7015
// RuntimeId: 22750
// TypeInfo: 0x0000000144C9A750
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUITextureSourceProviderEntity : public Entity::Entity {
        char pad_0x20[0x3B0];
    }; // 0x3D0
    static_assert(sizeof(ClientUITextureSourceProviderEntity) == 0x3D0);
}