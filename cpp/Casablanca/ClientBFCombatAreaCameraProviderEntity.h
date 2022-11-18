// Object: ClientBFCombatAreaCameraProviderEntity
// ClassId: 6334
// RuntimeId: 61408
// TypeInfo: 0x0000000144C9F440
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFCombatAreaCameraProviderEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFCombatAreaCameraProviderEntity) == 0x58);
}