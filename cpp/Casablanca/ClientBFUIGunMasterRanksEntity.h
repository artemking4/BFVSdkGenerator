// Object: ClientBFUIGunMasterRanksEntity
// ClassId: 6479
// RuntimeId: 30991
// TypeInfo: 0x0000000144CA13A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGunMasterRanksEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIGunMasterRanksEntity) == 0x60);
}