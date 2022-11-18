// Object: CoverScoreModifierEntity
// ClassId: 7097
// RuntimeId: 32935
// TypeInfo: 0x0000000144BFAA20
#include "../Entity/Entity.h"

namespace BattleAI {
    class CoverScoreModifierEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(CoverScoreModifierEntity) == 0x38);
}