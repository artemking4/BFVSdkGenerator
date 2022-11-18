// Object: PreferredWeaponRangeScoreData
// ClassId: 1462
// RuntimeId: 52600
// TypeInfo: 0x0000000144BF01C0
#include "../BattleAI/CoverScoreDataWithScoreCurve.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAI {
    class PreferredWeaponRangeScoreData : public BattleAI::CoverScoreDataWithScoreCurve {
        Boolean EnabledOnlyInsideDefendArea; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(PreferredWeaponRangeScoreData) == 0x48);
}
#pragma pack(pop)