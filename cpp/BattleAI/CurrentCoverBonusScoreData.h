// Object: CurrentCoverBonusScoreData
// ClassId: 1464
// RuntimeId: 37474
// TypeInfo: 0x0000000144BF06C0
#include "../BattleAI/CoverScoreData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class CurrentCoverBonusScoreData : public BattleAI::CoverScoreData {
        Float32 BonusScore; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(CurrentCoverBonusScoreData) == 0x38);
}
#pragma pack(pop)