// Object: ServerClientVec3ToServerEntity
// ClassId: 7467
// RuntimeId: 42499
// TypeInfo: 0x0000000144DD7C40
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerClientVec3ToServerEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerClientVec3ToServerEntity) == 0x70);
}