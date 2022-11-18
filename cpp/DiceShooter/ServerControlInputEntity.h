// Object: ServerControlInputEntity
// ClassId: 7472
// RuntimeId: 55519
// TypeInfo: 0x0000000144DD5520
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerControlInputEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerControlInputEntity) == 0x68);
}