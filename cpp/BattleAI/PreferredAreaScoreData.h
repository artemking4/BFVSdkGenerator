// Object: PreferredAreaScoreData
// ClassId: 1466
// RuntimeId: 18377
// TypeInfo: 0x0000000144BEF9C0
#include "../BattleAI/CustomCoverScoreData.h"
#include "../BattleAI/BaseShapeWithOffset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class PreferredAreaScoreData : public BattleAI::CustomCoverScoreData {
        Array<BattleAI::BaseShapeWithOffset> Shapes; // 0x30
        Float32 Score; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(PreferredAreaScoreData) == 0x40);
}
#pragma pack(pop)