// Object: AIParameterEntityData
// ClassId: 1985
// RuntimeId: 56245
// TypeInfo: 0x0000000144C11980
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

namespace BattleAIShared {
    class AIParameterEntityData : public Entity::EntityData {
        Boolean AutoActivate; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(AIParameterEntityData) == 0x28);
}