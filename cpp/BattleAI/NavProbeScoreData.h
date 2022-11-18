// Object: NavProbeScoreData
// ClassId: 1469
// RuntimeId: 28296
// TypeInfo: 0x0000000144BEFBC0
#include "../BattleAI/CoverScoreData.h"
#include "../BattleAI/CoverScorePosition.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAI {
    class NavProbeScoreData : public BattleAI::CoverScoreData {
        BattleAI::CoverScorePosition RefPosition; // 0x30
        Float32 Score; // 0x34
        Float32 MaxProbeDistance; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(NavProbeScoreData) == 0x40);
}
#pragma pack(pop)