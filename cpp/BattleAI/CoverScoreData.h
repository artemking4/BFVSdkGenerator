// Object: CoverScoreData
// ClassId: 1444
// RuntimeId: 13423
// TypeInfo: 0x0000000144BF07C0
#include "../BattleAIShared/CoverScoreDataBase.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

namespace BattleAI {
    class CoverScoreData : public BattleAIShared::CoverScoreDataBase {
        CString Comment; // 0x20
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(CoverScoreData) == 0x30);
}