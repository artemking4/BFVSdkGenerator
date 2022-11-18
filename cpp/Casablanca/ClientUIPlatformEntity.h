// Object: ClientUIPlatformEntity
// ClassId: 6981
// RuntimeId: 25837
// TypeInfo: 0x0000000144CB5020
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIPlatformEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientUIPlatformEntity) == 0x58);
}