// Object: PathDistanceScoreData
// ClassId: 1454
// RuntimeId: 44685
// TypeInfo: 0x0000000144BEFCC0
#include "../BattleAI/CoverScoreDataWithRefPos.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAI {
    class PathDistanceScoreData : public BattleAI::CoverScoreDataWithRefPos {
        Float32 MaxSearchDistance; // 0x48
        Boolean PrecisePath; // 0x4C
        Boolean RejectCoverBeyondSearchDistance; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(PathDistanceScoreData) == 0x50);
}
#pragma pack(pop)