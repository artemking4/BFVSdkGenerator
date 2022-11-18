// Object: ClientPrivateGamesBlueprintProviderEntity
// ClassId: 6810
// RuntimeId: 41914
// TypeInfo: 0x0000000144C923E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPrivateGamesBlueprintProviderEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientPrivateGamesBlueprintProviderEntity) == 0x78);
}