// Object: ClientClientVec3ToServerEntity
// ClassId: 6636
// RuntimeId: 39483
// TypeInfo: 0x0000000144DD7D50
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientClientVec3ToServerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientClientVec3ToServerEntity) == 0x50);
}