// Object: ClientUIChatDataProviderEntity
// ClassId: 6920
// RuntimeId: 56143
// TypeInfo: 0x0000000144CA07F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIChatDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientUIChatDataProviderEntity) == 0x48);
}