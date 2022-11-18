// Object: ServerGunMasterGameModeEntity
// ClassId: 7571
// RuntimeId: 4583
// TypeInfo: 0x0000000144CE6B90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerGunMasterGameModeEntity : public Entity::Entity {
        char pad_0x20[0xFF8];
    }; // 0x1018
    static_assert(sizeof(ServerGunMasterGameModeEntity) == 0x1018);
}