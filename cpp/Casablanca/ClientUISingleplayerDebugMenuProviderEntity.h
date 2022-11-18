// Object: ClientUISingleplayerDebugMenuProviderEntity
// ClassId: 7002
// RuntimeId: 44489
// TypeInfo: 0x0000000144CB09F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISingleplayerDebugMenuProviderEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUISingleplayerDebugMenuProviderEntity) == 0x40);
}