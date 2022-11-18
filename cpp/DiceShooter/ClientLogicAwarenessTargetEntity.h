// Object: ClientLogicAwarenessTargetEntity
// ClassId: 6744
// RuntimeId: 61094
// TypeInfo: 0x0000000144DD07E0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientLogicAwarenessTargetEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientLogicAwarenessTargetEntity) == 0x58);
}