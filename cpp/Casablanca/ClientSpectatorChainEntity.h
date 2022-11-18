// Object: ClientSpectatorChainEntity
// ClassId: 6871
// RuntimeId: 42456
// TypeInfo: 0x0000000144C47A00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSpectatorChainEntity : public Entity::Entity {
        char pad_0x20[0xB10];
    }; // 0xB30
    static_assert(sizeof(ClientSpectatorChainEntity) == 0xB30);
}