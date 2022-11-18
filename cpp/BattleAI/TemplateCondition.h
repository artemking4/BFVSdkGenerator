// Object: TemplateCondition
// ClassId: 96
// RuntimeId: 7419
// TypeInfo: 0x0000000144BEF4E0
#include "../BattleAI/ActionCondition.h"
#include "../BattleAIShared/AISoldierSpawnTemplateData.h"

#pragma pack(push, 8)
namespace BattleAI {
    class TemplateCondition : public BattleAI::ActionCondition {
        Array<BattleAIShared::AISoldierSpawnTemplateData> Templates; // 0x18
    }; // 0x20
    static_assert(sizeof(TemplateCondition) == 0x20);
}
#pragma pack(pop)