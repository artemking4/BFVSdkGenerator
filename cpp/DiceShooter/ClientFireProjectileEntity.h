// Object: ClientFireProjectileEntity
// ClassId: 6704
// RuntimeId: 47476
// TypeInfo: 0x0000000144DDB320
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientFireProjectileEntity : public Entity::Entity {
        char pad_0x20[0x1A0];
    }; // 0x1C0
    static_assert(sizeof(ClientFireProjectileEntity) == 0x1C0);
}