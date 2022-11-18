// Object: ClientOrderProviderEntity
// ClassId: 6767
// RuntimeId: 44617
// TypeInfo: 0x0000000144C94940
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientOrderProviderEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientOrderProviderEntity) == 0xE0);
}