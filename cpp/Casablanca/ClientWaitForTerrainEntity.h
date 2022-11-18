// Object: ClientWaitForTerrainEntity
// ClassId: 7050
// RuntimeId: 37814
// TypeInfo: 0x0000000144C92D70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientWaitForTerrainEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientWaitForTerrainEntity) == 0x50);
}