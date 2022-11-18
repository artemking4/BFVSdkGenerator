// Object: AIConcealmentVolumeEntity
// ClassId: 6171
// RuntimeId: 29607
// TypeInfo: 0x0000000144BFCAE0
#include "../Entity/Entity.h"

namespace BattleAI {
    class AIConcealmentVolumeEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(AIConcealmentVolumeEntity) == 0x58);
}