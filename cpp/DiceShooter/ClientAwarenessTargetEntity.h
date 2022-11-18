// Object: ClientAwarenessTargetEntity
// ClassId: 7849
// RuntimeId: 27949
// TypeInfo: 0x0000000144DD08F0
#include "../Entity/SpatialEntity.h"

namespace DiceShooter {
    class ClientAwarenessTargetEntity : public Entity::SpatialEntity {
        char pad_0x30[0x90];
    }; // 0xC0
    static_assert(sizeof(ClientAwarenessTargetEntity) == 0xC0);
}