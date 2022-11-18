// Object: TowardsPreferredWeaponRangeScoreData
// ClassId: 1472
// RuntimeId: 6359
// TypeInfo: 0x0000000144BF0140
#include "../BattleAI/CoverScoreData.h"
#include "../Core/FloatCurve.h"

#pragma pack(push, 8)
namespace BattleAI {
    class TowardsPreferredWeaponRangeScoreData : public BattleAI::CoverScoreData {
        Core::FloatCurve OutsidePreferredRangeScoreCurve; // 0x30
        Core::FloatCurve InsidePreferredRangeScoreCurve; // 0x38
    }; // 0x40
    static_assert(sizeof(TowardsPreferredWeaponRangeScoreData) == 0x40);
}
#pragma pack(pop)