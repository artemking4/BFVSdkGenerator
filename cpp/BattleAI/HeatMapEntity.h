// Object: HeatMapEntity
// ClassId: 7193
// RuntimeId: 8830
// TypeInfo: 0x0000000144BFC9D0
#include "../Entity/Entity.h"

namespace BattleAI {
    class HeatMapEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(HeatMapEntity) == 0xE0);
}