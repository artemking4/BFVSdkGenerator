// Object: FlagScoreCounterEntityData
// ClassId: 2747
// RuntimeId: 4123
// TypeInfo: 0x0000000144D5C3E0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../CasablancaShared/ScoringCounterRate.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FlagScoreCounterEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::ScoringCounterRate> ScoreIncreaseRate; // 0x28
        Int32 InitialScore; // 0x30
        Int32 MinimumScore; // 0x34
        Int32 StartingScore; // 0x38
        Int32 TargetScore; // 0x3C
        Boolean Enabled; // 0x40
        Boolean UseExternalScoring; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(FlagScoreCounterEntityData) == 0x48);
}
#pragma pack(pop)