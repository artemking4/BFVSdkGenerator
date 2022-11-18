// Object: ClientBFUISpectatorInputTextureSourceEntity
// ClassId: 6588
// RuntimeId: 35985
// TypeInfo: 0x0000000144CCBFC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISpectatorInputTextureSourceEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUISpectatorInputTextureSourceEntity) == 0x60);
}