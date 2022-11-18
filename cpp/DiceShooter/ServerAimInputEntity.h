// Object: ServerAimInputEntity
// ClassId: 7433
// RuntimeId: 39296
// TypeInfo: 0x0000000144DD5740
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerAimInputEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ServerAimInputEntity) == 0x50);
}