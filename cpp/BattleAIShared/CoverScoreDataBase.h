// Object: CoverScoreDataBase
// ClassId: 1443
// RuntimeId: 9712
// TypeInfo: 0x0000000144C064E0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

namespace BattleAIShared {
    class CoverScoreDataBase : public Core::DataContainer {
        Uint32 Id; // 0x18
        Uint32 RuntimeFilter; // 0x1C
    }; // 0x20
    static_assert(sizeof(CoverScoreDataBase) == 0x20);
}