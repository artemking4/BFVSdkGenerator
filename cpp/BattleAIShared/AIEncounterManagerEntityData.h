// Object: AIEncounterManagerEntityData
// ClassId: 1976
// RuntimeId: 14801
// TypeInfo: 0x0000000144BFF250
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/EncounterConfig.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIEncounterManagerEntityData : public Entity::EntityData {
        Array<BattleAIShared::EncounterConfig> Encounters; // 0x20
        Uint32 EventCount; // 0x28
        Boolean SaveState; // 0x2C
        Boolean ConditionA; // 0x2D
        Boolean ConditionB; // 0x2E
        char pad_0x2F[0x1];
    }; // 0x30
    static_assert(sizeof(AIEncounterManagerEntityData) == 0x30);
}
#pragma pack(pop)