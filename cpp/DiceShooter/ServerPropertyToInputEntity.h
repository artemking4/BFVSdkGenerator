// Object: ServerPropertyToInputEntity
// ClassId: 7677
// RuntimeId: 59565
// TypeInfo: 0x0000000144DD7800
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerPropertyToInputEntity : public Entity::Entity {
        char pad_0x20[0x1D8];
    }; // 0x1F8
    static_assert(sizeof(ServerPropertyToInputEntity) == 0x1F8);
}