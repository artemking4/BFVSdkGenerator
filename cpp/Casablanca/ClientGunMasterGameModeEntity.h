// Object: ClientGunMasterGameModeEntity
// ClassId: 6724
// RuntimeId: 12909
// TypeInfo: 0x0000000144CD5820
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientGunMasterGameModeEntity : public Entity::Entity {
        char pad_0x20[0xFA0];
    }; // 0xFC0
    static_assert(sizeof(ClientGunMasterGameModeEntity) == 0xFC0);
}