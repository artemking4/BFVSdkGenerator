// Object: ServerFireProjectileEntity
// ClassId: 7551
// RuntimeId: 59115
// TypeInfo: 0x0000000144DD3070
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerFireProjectileEntity : public Entity::Entity {
        char pad_0x20[0x198];
    }; // 0x1B8
    static_assert(sizeof(ServerFireProjectileEntity) == 0x1B8);
}