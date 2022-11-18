// Object: SpatialAnalyzer
// ClassId: 7834
// RuntimeId: 34661
// TypeInfo: 0x0000000144BF4040
#include "../Entity/Entity.h"

namespace BattleAI {
    class SpatialAnalyzer : public Entity::Entity {
        char pad_0x20[0x18B0];
    }; // 0x18D0
    static_assert(sizeof(SpatialAnalyzer) == 0x18D0);
}