// Object: FiringPatternCollectionData
// ClassId: 500
// RuntimeId: 13371
// TypeInfo: 0x0000000144C196B0
#include "../Core/Asset.h"
#include "../BattleAIShared/FiringPatternData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class FiringPatternCollectionData : public Core::Asset {
        Array<BattleAIShared::FiringPatternData> Patterns; // 0x20
    }; // 0x28
    static_assert(sizeof(FiringPatternCollectionData) == 0x28);
}
#pragma pack(pop)