// Object: ClientUISharedAmmoEntity
// ClassId: 7000
// RuntimeId: 44305
// TypeInfo: 0x0000000144CB48B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUISharedAmmoEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientUISharedAmmoEntity) == 0xA8);
}