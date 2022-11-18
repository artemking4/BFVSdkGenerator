// Object: ClientAimingWorldLockEfficiencyEntity
// ClassId: 6318
// RuntimeId: 63701
// TypeInfo: 0x0000000144C90FD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientAimingWorldLockEfficiencyEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientAimingWorldLockEfficiencyEntity) == 0x48);
}